
undefined8 FUN_00101f12(undefined8 param_1)

{
  return param_1;
}




void FUN_0010182a(undefined8 param_1)

{
  FUN_0010188a(param_1);
  return;
}




undefined8 FUN_00101bfe(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f66(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010224e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101db4(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_0010179e(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101cf8(void)

{
  return;
}




void FUN_0010298c(void)

{
  return;
}




void FUN_00101ff0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101db4(param_2);
  uVar2 = FUN_00101ab6(param_1);
  FUN_00101b02(param_1,uVar2,uVar1);
  return;
}




void FUN_00102a1b(void)

{
  return;
}




void FUN_00102c6c(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f08)();
  return;
}




void FUN_001020a2(undefined8 param_1)

{
  FUN_0010220d(param_1,1);
  return;
}




void FUN_00102a3c(void)

{
  return;
}




void FUN_001017b4(undefined8 param_1)

{
  FUN_001017d4(param_1);
  return;
}




void FUN_001026de(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001022b0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102312(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001021b2(long param_1)

{
  FUN_00102292(param_1 + 0x10);
  return;
}




void FUN_00102292(undefined8 param_1)

{
  FUN_00102300(param_1);
  return;
}




void FUN_0010193c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101bb4(param_2);
  FUN_00101b63(&local_21,uVar1);
  FUN_00101bc6(param_1,&local_21);
  FUN_001018b6(&local_21);
  uVar1 = FUN_00101c4e(param_2);
  uVar2 = FUN_00101bfe(param_2);
                    /* try { // try from 001019c8 to 001019cc has its CatchHandler @ 001019cf */
  FUN_00101c9a(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001029fa(void)

{
  return;
}




void FUN_001029ce(void)

{
  return;
}




void FUN_001021e6(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




long * FUN_0010243c(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 FUN_00102bb1(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101f66(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001029ef(void)

{
  return;
}




undefined8 FUN_00101dc6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001020a2(param_1);
  uVar2 = FUN_00101d2a(param_1);
  FUN_001020c6(local_38,uVar2,uVar1);
  uVar3 = FUN_00101db4(param_2);
  uVar4 = FUN_00101d08(uVar1);
  FUN_0010213f(uVar2,uVar4,uVar3);
  FUN_0010217c(local_38,0);
  FUN_00102100(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




undefined8 FUN_00102963(void)

{
  return 0;
}




void FUN_001026b0(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101a08(undefined8 param_1)

{
  FUN_00101cf8(param_1);
  return;
}




void FUN_00102711(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010252d(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102582(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00102875(long param_1,ulong param_2,long param_3)

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




void FUN_0010153a(void)

{
  long in_FS_OFFSET;
  undefined8 *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 5;
  FUN_0010184a(local_58);
  local_68 = &local_60;
                    /* try { // try from 00101580 to 001015bd has its CatchHandler @ 00101609 */
  FUN_00101902(local_58,&local_68);
  FUN_00101902(local_58,&local_68);
  FUN_00101902(local_58,&local_68);
  FUN_0010193c(local_38,local_58);
                    /* try { // try from 001015c5 to 001015c9 has its CatchHandler @ 001015f4 */
  FUN_0010235f(local_38);
  FUN_0010186a(local_38);
  FUN_0010186a(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101e90(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_0010180a(undefined8 param_1)

{
  FUN_001018b6(param_1);
  return;
}




void FUN_00101a38(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101d08(local_20);
    uVar3 = FUN_00101d2a(param_1);
    FUN_00101d3c(uVar3,uVar2);
    FUN_00101d66(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102481(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102a05(void)

{
  return;
}




void FUN_0010220d(undefined8 param_1,undefined8 param_2)

{
  FUN_001022b0(param_1,param_2,0);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e4) */
/* WARNING: Removing unreachable block (ram,0x001013f0) */

void FUN_001013c0(void)

{
  return;
}




void FUN_00101a28(void)

{
  return;
}




undefined8 FUN_00101db4(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a47(void)

{
  return;
}




void FUN_00101d08(long param_1)

{
  FUN_0010203e(param_1 + 0x10);
  return;
}




undefined8 FUN_00102300(undefined8 param_1)

{
  return param_1;
}




void FUN_00101bc6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f12(param_2);
  FUN_00101f24(param_1,uVar1);
  return;
}




undefined8 FUN_00102954(void)

{
  return 1;
}




undefined8 FUN_00101bb4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101b63(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101eba(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101c9a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00101f84(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00101fce(&local_18);
    FUN_00101ff0(local_10,uVar2);
    FUN_00101faa(&local_18);
  }
  return;
}




undefined8 FUN_0010179e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010188a(undefined8 param_1)

{
  FUN_00101a08(param_1);
  FUN_001017b4(param_1);
  return;
}




void FUN_00101724(void)

{
  FUN_0010153a();
  FUN_00101633();
  return;
}




undefined8 FUN_00102a89(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102a52,local_18);
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




void FUN_001024d9(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102997(void)

{
  return;
}




undefined8 FUN_0010223b(undefined8 param_1)

{
  return param_1;
}




void FUN_0010265d(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010186a(undefined8 param_1)

{
  FUN_001018d6(param_1);
  return;
}




void FUN_00101449(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010184a(local_58);
  local_60 = 0;
                    /* try { // try from 00101487 to 001014c4 has its CatchHandler @ 00101510 */
  FUN_00101902(local_58,&local_60);
  FUN_00101902(local_58,&local_60);
  FUN_00101902(local_58,&local_60);
  FUN_0010193c(local_38,local_58);
                    /* try { // try from 001014cc to 001014d0 has its CatchHandler @ 001014fb */
  FUN_0010232a(local_38);
  FUN_0010186a(local_38);
  FUN_0010186a(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001017d4(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101d3c(undefined8 param_1,undefined8 param_2)

{
  FUN_0010205c(param_1,param_2);
  return;
}




void FUN_00101d66(undefined8 param_1,undefined8 param_2)

{
  FUN_0010206f(param_1,param_2,1);
  return;
}




undefined8 FUN_00101ab6(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d96(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101ee8(undefined8 param_1,undefined8 param_2)

{
  FUN_0010219e(param_1,param_2);
  return;
}




void FUN_00102a52(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001029b8(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a3) */
/* WARNING: Removing unreachable block (ram,0x001013af) */

void FUN_00101390(void)

{
  return;
}




bool FUN_00102b56(pthread_t *param_1)

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




undefined8 FUN_00101f84(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




ulong FUN_00102771(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101739(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102481("Calling good()...");
  FUN_00101724();
  FUN_00102481("Finished good()");
  FUN_00102481("Calling bad()...");
  FUN_00101449();
  FUN_00102481("Finished bad()");
  return 0;
}




undefined8 FUN_00101eba(undefined8 param_1,undefined8 param_2)

{
  FUN_00101ee8(param_1,param_2);
  return param_1;
}




void FUN_0010213f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101db4(param_3);
  FUN_0010224e(param_1,param_2,uVar1);
  return;
}




void FUN_0010219e(void)

{
  return;
}




void FUN_0010206f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001021e6(param_1,param_2,param_3);
  return;
}




void FUN_00102a31(void)

{
  return;
}




void FUN_0010235f(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001023de(param_1);
  FUN_00102582(*(undefined8 *)*puVar1);
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




void FUN_00102100(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010206f(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102501(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001029c3(void)

{
  return;
}




void FUN_001018b6(undefined8 param_1)

{
  FUN_00101a28(param_1);
  return;
}




void FUN_00101fce(undefined8 *param_1)

{
  FUN_001021b2(*param_1);
  return;
}




void FUN_0010205c(void)

{
  return;
}




void FUN_001023de(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101ab6(param_1);
  FUN_0010243c(&local_18);
  FUN_00102460(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102685(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102c4d(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00102bd4(undefined8 *param_1)

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




void FUN_00102c8b(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001025d8(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




int FUN_00102972(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010184a(undefined8 param_1)

{
  FUN_0010182a(param_1);
  return;
}




void FUN_00102394(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_001023de(param_1);
  if ((undefined8 *)*plVar1 == (undefined8 *)0x0) {
    FUN_00102481("data is NULL");
  }
  else {
    FUN_00102582(*(undefined8 *)*plVar1);
  }
  return;
}




void FUN_0010232a(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001023de(param_1);
  FUN_00102582(*(undefined8 *)*puVar1);
  return;
}




undefined8 FUN_00101d2a(undefined8 param_1)

{
  return param_1;
}




void FUN_00101d96(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001029a2(void)

{
  return;
}




void FUN_001025ad(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001018d6(undefined8 param_1)

{
  FUN_00101a38(param_1);
  FUN_0010180a(param_1);
  return;
}




undefined8 FUN_00101c4e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f66(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001021d4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102312(void)

{
  return 0x555555555555555;
}




void FUN_001020c6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010223b(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001024a7(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102a26(void)

{
  return;
}




void FUN_00101902(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ab6(param_1);
  FUN_00101b02(param_1,uVar1,param_2);
  return;
}




void FUN_00102460(undefined8 *param_1)

{
  FUN_00101d08(*param_1);
  return;
}




void FUN_00102557(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001029ad(void)

{
  return;
}




void FUN_00102a10(void)

{
  return;
}




void FUN_00102603(undefined4 param_1)

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




void FUN_00101b02(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101db4(param_3);
  p_Var2 = (_List_node_base *)FUN_00101dc6(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101e90(param_1,1);
  return;
}




void FUN_00101633(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010184a(local_58);
  local_60 = 0;
                    /* try { // try from 00101671 to 001016ae has its CatchHandler @ 001016fa */
  FUN_00101902(local_58,&local_60);
  FUN_00101902(local_58,&local_60);
  FUN_00101902(local_58,&local_60);
  FUN_0010193c(local_38,local_58);
                    /* try { // try from 001016b6 to 001016ba has its CatchHandler @ 001016e5 */
  FUN_00102394(local_38);
  FUN_0010186a(local_38);
  FUN_0010186a(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_0010217c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
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




void FUN_00101f24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f12(param_2);
  FUN_00101ee8(param_1,uVar1);
  FUN_001017b4(param_1);
  return;
}




undefined8 * FUN_00101faa(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_0010203e(undefined8 param_1)

{
  FUN_001021d4(param_1);
  return;
}




void FUN_001029e4(void)

{
  return;
}




void FUN_001029d9(void)

{
  return;
}




void FUN_00102d30(void)

{
  return;
}



