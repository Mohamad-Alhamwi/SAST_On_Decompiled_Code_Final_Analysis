
undefined8 FUN_00101eca(undefined8 param_1)

{
  return param_1;
}




void FUN_00101628(undefined8 param_1)

{
  FUN_00101646(param_1);
  return;
}




void FUN_00101ae4(undefined8 param_1)

{
  FUN_00101c46(param_1);
  FUN_00101a18(param_1);
  return;
}




long FUN_001022e0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00101c16(undefined8 param_1)

{
  FUN_00101eba(param_1);
  return;
}




void FUN_00102987(void)

{
  return;
}




undefined8 FUN_0010203c(undefined8 param_1,undefined8 param_2)

{
  FUN_0010206a(param_1,param_2);
  return param_1;
}




void FUN_00102a16(void)

{
  return;
}




void FUN_00102c67(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f08)();
  return;
}




void FUN_001020e8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102a37(void)

{
  return;
}




void FUN_001015c6(undefined8 *param_1)

{
  FUN_00101606(*param_1);
  return;
}




void FUN_001026d9(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102316(long param_1)

{
  FUN_001023e4(param_1 + 0x10);
  return;
}




void FUN_001021d3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102338(param_1,param_2,param_3);
  return;
}




void FUN_00102302(void)

{
  return;
}




undefined8 FUN_001019ac(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001029f5(void)

{
  return;
}




void FUN_001029c9(void)

{
  return;
}




void FUN_0010222a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010238d(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_00102452(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102bac(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101f06(undefined8 param_1,undefined8 param_2)

{
  FUN_001021d3(param_1,param_2,1);
  return;
}




void FUN_001029ea(void)

{
  return;
}




undefined8 FUN_00101dc0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020e8(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010295e(void)

{
  return 0;
}




void FUN_001026ab(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001019c2(undefined8 param_1)

{
  FUN_001019e2(param_1);
  return;
}




void FUN_0010270c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102528(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010257d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00102870(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010147c(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001014f8(param_1);
  FUN_001024d4(*(undefined4 *)*puVar1);
  return;
}




undefined8 FUN_00101e10(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020e8(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101606(long param_1)

{
  FUN_00101628(param_1 + 0x10);
  return;
}




void FUN_00101a18(undefined8 param_1)

{
  FUN_00101ac4(param_1);
  return;
}




void FUN_0010247c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102a00(void)

{
  return;
}




void FUN_00102264(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001021d3(*param_1,param_1[1],1);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e4) */
/* WARNING: Removing unreachable block (ram,0x001013f0) */

void FUN_001013c0(void)

{
  return;
}




void FUN_001019e2(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101d88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102094(param_2);
  FUN_001020a6(param_1,uVar1);
  return;
}




void FUN_00102a42(void)

{
  return;
}




void FUN_00101c36(void)

{
  return;
}




void FUN_00102338(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101ac4(undefined8 param_1)

{
  FUN_00101c36(param_1);
  return;
}




undefined8 FUN_0010294f(void)

{
  return 1;
}




void FUN_00101a98(undefined8 param_1)

{
  FUN_00101c16(param_1);
  FUN_001019c2(param_1);
  return;
}




void FUN_00101a78(undefined8 param_1)

{
  FUN_00101ae4(param_1);
  return;
}




void FUN_00101b4a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101d76(param_2);
  FUN_00101d25(&local_21,uVar1);
  FUN_00101d88(param_1,&local_21);
  FUN_00101ac4(&local_21);
  uVar1 = FUN_00101e10(param_2);
  uVar2 = FUN_00101dc0(param_2);
                    /* try { // try from 00101bd6 to 00101bda has its CatchHandler @ 00101bdd */
  FUN_00101e5c(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long * FUN_001015a2(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101749(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined4 *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_64 = 5;
  FUN_00101a58(local_58);
  local_60 = &local_64;
                    /* try { // try from 0010178e to 001017cb has its CatchHandler @ 00101817 */
  FUN_00101b10(local_58,&local_60);
  FUN_00101b10(local_58,&local_60);
  FUN_00101b10(local_58,&local_60);
  FUN_00101b4a(local_38,local_58);
                    /* try { // try from 001017d3 to 001017d7 has its CatchHandler @ 00101802 */
  FUN_0010147c(local_38);
  FUN_00101a78(local_38);
  FUN_00101a78(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001014f8(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101556(param_1);
  FUN_001015a2(&local_18);
  FUN_001015c6(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102a84(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102a4d,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




void FUN_001024d4(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102992(void)

{
  return;
}




void FUN_001022a3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f35(param_3);
  FUN_001023a0(param_1,param_2,uVar1);
  return;
}




void FUN_00102658(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101658(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a58(local_58);
  local_60 = 0;
                    /* try { // try from 00101696 to 001016d3 has its CatchHandler @ 0010171f */
  FUN_00101b10(local_58,&local_60);
  FUN_00101b10(local_58,&local_60);
  FUN_00101b10(local_58,&local_60);
  FUN_00101b4a(local_38,local_58);
                    /* try { // try from 001016db to 001016df has its CatchHandler @ 0010170a */
  FUN_00101449(local_38);
  FUN_00101a78(local_38);
  FUN_00101a78(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101449(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001014f8(param_1);
  FUN_001024d4(*(undefined4 *)*puVar1);
  return;
}




void FUN_001015e8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f35(param_3);
  p_Var2 = (_List_node_base *)FUN_00101f48(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102012(param_1,1);
  return;
}




undefined8 FUN_00101d25(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010203c(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101a38(undefined8 param_1)

{
  FUN_00101a98(param_1);
  return;
}




void FUN_00101eba(void)

{
  return;
}




void FUN_00102a4d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001029b3(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a3) */
/* WARNING: Removing unreachable block (ram,0x001013af) */

void FUN_00101390(void)

{
  return;
}




bool FUN_00102b51(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




undefined8 FUN_00101f35(undefined8 param_1)

{
  return param_1;
}




ulong FUN_0010276c(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030a0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101556(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001015e8(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    cVar1 = FUN_00102106(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102150(&local_18);
    FUN_00102172(local_10,uVar2);
    FUN_0010212c(&local_18);
  }
  return;
}




void FUN_00102150(undefined8 *param_1)

{
  FUN_00102316(*param_1);
  return;
}




void FUN_001021c0(void)

{
  return;
}




void FUN_001020a6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102094(param_2);
  FUN_0010206a(param_1,uVar1);
  FUN_001019c2(param_1);
  return;
}




void FUN_00102a2c(void)

{
  return;
}




void FUN_001023a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101f35(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001019ac(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102cc0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




undefined8 * FUN_0010212c(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_001024fc(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001029be(void)

{
  return;
}




void FUN_00101841(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a58(local_58);
  local_60 = 0;
                    /* try { // try from 0010187f to 001018bc has its CatchHandler @ 00101908 */
  FUN_00101b10(local_58,&local_60);
  FUN_00101b10(local_58,&local_60);
  FUN_00101b10(local_58,&local_60);
  FUN_00101b4a(local_38,local_58);
                    /* try { // try from 001018c4 to 001018c8 has its CatchHandler @ 001018f3 */
  FUN_001014af(local_38);
  FUN_00101a78(local_38);
  FUN_00101a78(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102012(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00102094(undefined8 param_1)

{
  return param_1;
}




void FUN_00102402(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102464(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00102680(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102c48(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00102bcf(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




void FUN_00102c86(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001025d3(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




int FUN_0010296d(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00101646(undefined8 param_1)

{
  return param_1;
}




void FUN_001023e4(undefined8 param_1)

{
  FUN_00102452(param_1);
  return;
}




undefined8 FUN_0010238d(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c46(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101606(local_20);
    uVar3 = FUN_00101eca(param_1);
    FUN_00101edc(uVar3,uVar2);
    FUN_00101f06(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_00101d76(undefined8 param_1)

{
  return param_1;
}




void FUN_0010299d(void)

{
  return;
}




void FUN_001025a8(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101932(void)

{
  FUN_00101749();
  FUN_00101841();
  return;
}




void FUN_00101b10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101556(param_1);
  FUN_00101cc4(param_1,uVar1,param_2);
  return;
}




void FUN_00102206(undefined8 param_1)

{
  FUN_0010235f(param_1,1);
  return;
}




void FUN_0010235f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102402(param_1,param_2,0);
  return;
}




undefined8 FUN_00102106(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001024a2(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102a21(void)

{
  return;
}




undefined8 FUN_00101947(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010247c("Calling good()...");
  FUN_00101932();
  FUN_0010247c("Finished good()");
  FUN_0010247c("Calling bad()...");
  FUN_00101658();
  FUN_0010247c("Finished bad()");
  return 0;
}




undefined8 FUN_00102464(void)

{
  return 0x555555555555555;
}




void FUN_00102552(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001029a8(void)

{
  return;
}




void FUN_00102a0b(void)

{
  return;
}




void FUN_001025fe(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a58(undefined8 param_1)

{
  FUN_00101a38(param_1);
  return;
}




void FUN_001014af(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001014f8(param_1);
  if ((undefined4 *)*puVar1 == (undefined4 *)0x0) {
    FUN_0010247c("data is NULL");
  }
  else {
    FUN_001024d4(*(undefined4 *)*puVar1);
  }
  return;
}




void FUN_00102172(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f35(param_2);
  uVar2 = FUN_00101556(param_1);
  FUN_00101cc4(param_1,uVar2,uVar1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_00101390();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00101edc(undefined8 param_1,undefined8 param_2)

{
  FUN_001021c0(param_1,param_2);
  return;
}




undefined8 FUN_00101f48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102206(param_1);
  uVar2 = FUN_00101eca(param_1);
  FUN_0010222a(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f35(param_2);
  uVar4 = FUN_00101606(uVar1);
  FUN_001022a3(uVar2,uVar4,uVar3);
  FUN_001022e0(local_38,0);
  FUN_00102264(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_0010206a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102302(param_1,param_2);
  return;
}




void FUN_001029df(void)

{
  return;
}




void FUN_001029d4(void)

{
  return;
}




void FUN_00102d30(void)

{
  return;
}



