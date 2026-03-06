00401181        void* fsbase
00401181        int64_t rax = *(fsbase + 0x28)
0040119f        printf(format: "Enter the flag: ")
004011ba        char var_38[0x28]
004011ba        __isoc99_scanf(format: "%31s", &var_38)
004011cf        int32_t result
004011cf        
004011cf        if (strlen(&var_38) == 0x1f)
004011e7            int32_t var_3c_1 = 0
004011e7            
00401235            while (true)
00401235                if (var_3c_1 s> 0x1e)
00401241                    puts(str: "Correct flag!")
00401246                    result = 0
00401246                    break
00401246                
00401215                if (sx.d(var_38[sx.q(var_3c_1)]) - 6
00401215                        != sx.d((*"`jo=N@ul_p_lmchaY][hY\_Yg_^cogw")[sx.q(var_3c_1)]))
00401221                    puts(str: "Incorrect flag!")
00401226                    result = 1
0040122b                    break
0040122b                
0040122d                var_3c_1 += 1
004011cf        else
004011db            puts(str: "Wrong!")
004011e0            result = 1
004011e0        
0040124f        *(fsbase + 0x28)
0040124f        
00401258        if (rax == *(fsbase + 0x28))
00401260            return result
