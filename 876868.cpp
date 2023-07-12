#include <stdio.h>
#include <stdlib.h>

int eval_expr(char* expr);
int eval_op(int result, int num, char op);

int main() {
   char expr[100];
   int result;
   printf("Enter an expression: ");
   scanf("%[^\n]", expr);  // read input expression until newline character
   result = eval_expr(expr);  // evaluate expression
   printf("Result: %d\n", result);  // print result

   return 0;
}

int eval_expr(char* expr) {
   int result = 0, num = 0, sign = 1;
   char op = '+';

   for (int i = 0; expr[i] != '='; i++) {
      if (expr[i] >= '0' && expr[i] <= '9') {
         num = num * 10 + (expr[i] - '0');
      } else if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/') {
         result = eval_op(result, num, op);
         op = expr[i];
         num = 0;
      } else if (expr[i] == ' ') {
         continue;
      } else {
         printf("Invalid character in expression: %c\n", expr[i]);
         exit(1);
      }
   }

   result = eval_op(result, num, op);

   return result;
}

int eval_op(int result, int num, char op) {
   switch (op) {
      case '+':
         result += num;
         break;
      case '-':
         result -= num;
         break;
      case '*':
         result *= num;
         break;
      case '/':
         result /= num;
         break;
      default:
         printf("Invalid operator: %c\n", op);
         exit(1);
   }

   return result;
}
