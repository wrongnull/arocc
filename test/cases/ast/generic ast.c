implicit typedef: '__int128'
 name: __int128_t

implicit typedef: 'unsigned __int128'
 name: __uint128_t

implicit typedef: '*char'
 name: __builtin_ms_va_list

implicit typedef: '[1]struct __va_list_tag'
 name: __builtin_va_list

implicit typedef: 'struct __NSConstantString_tag'
 name: __NSConstantString

implicit typedef: 'long double'
 name: __float80

variable: 'int'
 name: x
 init:
  generic_expr: 'int' (value: 42)
   controlling:
    int_literal: 'int' (value: 5)
   chosen:
    generic_association_expr
      int_literal: 'int' (value: 42)
   rest:
    generic_association_expr
      float_literal: 'double' (value: 32.5)

variable: 'int'
 name: y
 init:
  generic_expr: 'int' (value: 42)
   controlling:
    int_literal: 'int' (value: 5)
   chosen:
    generic_association_expr
      int_literal: 'int' (value: 42)
   rest:
    generic_association_expr
      float_literal: 'double' (value: 32.5)
    generic_default_expr
      string_literal_expr: '[7]char' lvalue (value: "string")

variable: 'double'
 name: z
 init:
  implicit cast: (int_to_float) 'double' (value: 32)
    generic_expr: 'int'
     controlling:
      int_literal: 'int' (value: 5)
     chosen:
      generic_default_expr
        int_literal: 'int' (value: 32)

