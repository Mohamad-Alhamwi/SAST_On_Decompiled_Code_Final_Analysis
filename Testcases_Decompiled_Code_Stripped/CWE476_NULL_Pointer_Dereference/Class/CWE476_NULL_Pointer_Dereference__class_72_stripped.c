
void FUN_001035bb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035f0(param_1,param_2,param_3);
  return;
}




void FUN_00103822(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103f80(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001039d3(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001037f6(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102eff(undefined8 param_1,undefined8 param_2)

{
  FUN_0010314e(param_1,param_2,0);
  return;
}




undefined8 FUN_001019e5(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001032d9(undefined8 param_1)

{
  FUN_00103326(param_1);
  return;
}




void FUN_00103002(void)

{
  return;
}




void FUN_00103cfa(void)

{
  return;
}




void FUN_001019fc(undefined8 param_1)

{
  FUN_00101a88(param_1);
  return;
}




void FUN_001025ae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b94(param_1,param_3);
                    /* try { // try from 001025e8 to 001025ec has its CatchHandler @ 001025ef */
  FUN_00102bca(param_1,param_2);
  return;
}




void FUN_001026c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c24(param_1,param_2,param_3);
  return;
}




long FUN_00103215(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_001024be(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101e82(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001027fa(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c94(param_1);
  FUN_00102cf9(*param_1,uVar1);
  return;
}




void FUN_001031e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033be(param_1,param_2,param_3);
  return;
}




void FUN_001030b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010328b(param_1,param_2,param_3);
  return;
}




void FUN_0010196b(void)

{
  FUN_0010165e();
  FUN_001017f6();
  return;
}




undefined8 FUN_00103326(void)

{
  return 0xfffffffffffffff;
}




void FUN_001038cd(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103c58(void)

{
  return 0;
}




void FUN_00102db6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102e24(param_3);
  uVar2 = FUN_00102e24(local_28);
  uVar3 = FUN_00102e24(local_20);
  uVar1 = FUN_00103069(uVar3,uVar2,uVar1);
  FUN_0010309e(&local_30,uVar1);
  return;
}




void FUN_00102890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d23(param_2);
  uVar2 = FUN_00102d23(param_1);
  FUN_00102d6f(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010384c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101e42(undefined8 param_1)

{
  return param_1;
}




void FUN_00102cf9(undefined8 param_1,undefined8 param_2)

{
  FUN_00103002(param_1,param_2);
  return;
}




long FUN_00102c94(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00102788(undefined8 param_1)

{
  return param_1;
}




void FUN_00103cc3(void)

{
  return;
}




void FUN_0010314e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103326(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00103d47(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00104020(void)

{
  return;
}




void FUN_00102938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e24(param_2);
  uVar2 = FUN_00102e24(param_1);
  FUN_00102e36(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c97(void)

{
  return;
}




void FUN_00103a06(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 * FUN_0010340e(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  long local_18;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




void FUN_00103776(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010379c(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103d1b(void)

{
  return;
}




void FUN_001038a2(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_001030e5(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001032d9(param_1);
  puVar1 = (undefined8 *)FUN_001032f7(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103194(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010333e(param_2);
  uVar2 = FUN_0010333e(param_1);
  FUN_00103350(uVar2,uVar1,param_3);
  return;
}




void FUN_0010273b(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c81(param_1,param_2);
  return;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101430();
    DAT_00108020 = 1;
    return;
  }
  return;
}




void * FUN_00103543(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_00101b42(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e82(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102caa(param_3);
  FUN_00102fbe(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00101eb6(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102766(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void * FUN_001035f0(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103cef(void)

{
  return;
}




void FUN_00102f8d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103194(param_1,param_2,param_3);
  return;
}




void FUN_00102fbe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102caa(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001019e5(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_00102e24(undefined8 param_1)

{
  return param_1;
}




void FUN_00103016(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103f42(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001039a5(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101e54(undefined8 param_1,undefined8 param_2)

{
  FUN_0010273b(param_1,param_2);
  return;
}




ulong FUN_00103a66(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050b4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102bca(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102aae(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




undefined8 FUN_00103459(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102788(&local_10);
  return *puVar1;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




undefined8 FUN_00102caa(undefined8 param_1)

{
  return param_1;
}




void FUN_00103877(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102f2d(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103016(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103d7e(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103d47,local_18);
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




void FUN_0010328b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102e24(param_1);
  uVar1 = FUN_0010340e(uVar1,param_2,param_3);
  FUN_0010309e(&local_10,uVar1);
  return;
}




void FUN_00102e36(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00101b92(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101ea4(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00102472(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e82(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010333e(undefined8 param_1)

{
  return param_1;
}




void FUN_001038f8(undefined4 param_1)

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




void FUN_001036a1(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00103752(param_1,2);
  puVar1 = (undefined4 *)*puVar2;
  FUN_001037ce(*puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete(puVar1,8);
  }
  return;
}




void FUN_001034d5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102e24(param_3);
  uVar2 = FUN_00102e24(local_28);
  uVar3 = FUN_00102e24(local_20);
  uVar1 = FUN_001035bb(uVar3,uVar2,uVar1);
  FUN_0010309e(&local_30,uVar1);
  return;
}




void FUN_00103d3c(void)

{
  return;
}




void FUN_00101afa(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e42(param_1);
  FUN_00101e54(*param_1,param_1[1],uVar1);
  FUN_00101aa8(param_1);
  return;
}




void FUN_00101df8(void)

{
  return;
}




void FUN_00101a1c(undefined8 param_1)

{
  FUN_00101a5c(param_1);
  return;
}




void FUN_00103cad(void)

{
  return;
}




void FUN_00101f52(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = param_1;
  if (param_3 != 0) {
    if ((ulong)(param_1[2] - param_1[1] >> 3) < param_3) {
      local_68 = FUN_001029be(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102472(local_80);
      local_60 = FUN_0010284c(&local_88,&local_78);
      local_70 = FUN_00102aae(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101e42(local_80);
                    /* try { // try from 0010225c to 001022e7 has its CatchHandler @ 0010239f */
      FUN_00102989(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101e42(local_80);
      puVar2 = (undefined8 *)FUN_00101ea4(&local_88);
      local_70 = FUN_00102ae5(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101e42(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101ea4(&local_88);
      local_70 = FUN_00102ae5(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101e42(local_80);
      FUN_00101e54(*local_80,local_80[1],uVar1);
      FUN_00101e08(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_0010279a(local_38,param_1,param_4);
                    /* try { // try from 00101fdc to 001021af has its CatchHandler @ 00102381 */
      local_50 = FUN_0010282e(local_38);
      local_78 = FUN_00101b42(local_80);
      local_48 = FUN_0010284c(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101e42(local_80);
        FUN_00102890(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101ea4(&local_88);
        FUN_001028e8(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101ea4(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101ea4(&local_88);
        FUN_00102938(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101e42(local_80);
        lVar4 = FUN_00102989(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101e42(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101ea4(&local_88);
        FUN_00102890(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101ea4(&local_88);
        FUN_00102938(*puVar2,local_40,local_50);
      }
      FUN_001027fa(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103069(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103215(param_1,param_2,param_3);
  return;
}




long FUN_0010284c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101ea4(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101ea4(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101aa8(long *param_1)

{
  FUN_00101e08(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_001019fc(param_1);
  return;
}




ulong * FUN_00102ed0(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




bool FUN_00103e4b(pthread_t *param_1)

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




long FUN_00103752(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00101dc6(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




long FUN_00102524(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00103cd9(void)

{
  return;
}




ulong FUN_00103b6a(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050bc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010347a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103543(param_1,param_2,param_3);
  return;
}




void FUN_0010165e(void)

{
  long in_FS_OFFSET;
  undefined4 *local_70;
  undefined8 local_68;
  undefined4 *local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a3c(local_58);
                    /* try { // try from 0010168b to 00101780 has its CatchHandler @ 001017cc */
  local_70 = (undefined4 *)operator_new(8);
  *local_70 = 0;
  local_70[1] = 0;
  local_60 = local_70;
  local_68 = FUN_00101b42(local_58);
  FUN_00101b92(local_38,&local_68);
  FUN_00101bc0(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101b42(local_58);
  FUN_00101b92(local_38,&local_68);
  FUN_00101bc0(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101b42(local_58);
  FUN_00101b92(local_38,&local_68);
  FUN_00101bc0(local_58,local_38[0],1,&local_70);
  FUN_00101c86(local_38,local_58);
                    /* try { // try from 00101788 to 0010178c has its CatchHandler @ 001017b7 */
  FUN_001036a1(local_38);
  FUN_00101afa(local_38);
  FUN_00101afa(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102d23(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103016(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031e4(param_1,param_2,param_3);
  return;
}




void FUN_001037ce(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101ea4(undefined8 param_1)

{
  return param_1;
}




ulong FUN_001029be(undefined8 param_1,ulong param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  local_40 = param_1;
  lVar1 = FUN_00102eaa(param_1);
  lVar2 = FUN_00102524(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102524(local_40);
  local_30 = FUN_00102524(local_40);
  plVar3 = (long *)FUN_00102ed0(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102524(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102eaa(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102eaa(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00103ea6(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103f61(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001014e9(void)

{
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a3c(local_58);
  local_68 = 0;
  local_60 = FUN_00101b42(local_58);
  FUN_00101b92(local_38,&local_60);
                    /* try { // try from 00101553 to 001015e8 has its CatchHandler @ 00101634 */
  FUN_00101bc0(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b42(local_58);
  FUN_00101b92(local_38,&local_60);
  FUN_00101bc0(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b42(local_58);
  FUN_00101b92(local_38,&local_60);
  FUN_00101bc0(local_58,local_38[0],1,&local_68);
  FUN_00101c86(local_38,local_58);
                    /* try { // try from 001015f0 to 001015f4 has its CatchHandler @ 0010161f */
  FUN_00103653(local_38);
  FUN_00101afa(local_38);
  FUN_00101afa(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102989(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e74(param_1,param_2,param_3);
  return;
}




void FUN_00101a88(undefined8 param_1)

{
  FUN_00101df8(param_1);
  return;
}




void FUN_00103d26(void)

{
  return;
}




void FUN_00101bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = param_1;
  local_20 = FUN_00101eb6(param_1);
  local_18 = FUN_00101f0d(&local_38,&local_20);
  local_20 = FUN_00102472(local_30);
  uVar1 = FUN_001024be(&local_20,local_18);
  FUN_00101f52(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102472(local_30);
  FUN_001024be(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong * FUN_001032f7(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102c81(void)

{
  return;
}




void FUN_00103c8c(void)

{
  return;
}




void FUN_00103cce(void)

{
  return;
}




undefined8 FUN_00102b3d(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b6a(param_1,param_2);
  return param_1;
}




void FUN_00102d6f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103034(param_1,param_2,param_3);
  return;
}




void FUN_00103952(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001034af(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001035a6(&local_10);
  FUN_00102da4(uVar1);
  return;
}




void FUN_00103d10(void)

{
  return;
}




void FUN_00102b6a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f7a(param_1,param_2);
  return;
}




void FUN_00103d31(void)

{
  return;
}




undefined8 FUN_00103c49(void)

{
  return 1;
}




void FUN_00101a5c(undefined8 param_1)

{
  FUN_00101da6(param_1);
  FUN_00101dc6(param_1);
  return;
}




undefined8 FUN_00102da4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010309e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103ce4(void)

{
  return;
}




void FUN_00101a3c(undefined8 param_1)

{
  FUN_00101a1c(param_1);
  return;
}




void FUN_00102c5a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001033be(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001034af(param_2);
  uVar2 = FUN_001034af(param_1);
  FUN_001034d5(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001035a6(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00102b94(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b6a(param_1,param_2);
  FUN_00101dc6(param_1);
  return;
}




void FUN_001036ef(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00103752(param_1,2);
  puVar1 = (undefined4 *)*puVar2;
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00103776("data is NULL");
  }
  else {
    FUN_001037ce(*puVar1);
    if (puVar1 != (undefined4 *)0x0) {
      operator_delete(puVar1,8);
    }
  }
  return;
}




void FUN_00101e08(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102709(param_1,param_2,param_3);
  }
  return;
}




long FUN_00101f0d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102788(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102788(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00102e74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030b4(param_1,param_2,param_3);
  return;
}




void FUN_001017f6(void)

{
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a3c(local_58);
  local_68 = 0;
  local_60 = FUN_00101b42(local_58);
  FUN_00101b92(local_38,&local_60);
                    /* try { // try from 00101860 to 001018f5 has its CatchHandler @ 00101941 */
  FUN_00101bc0(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b42(local_58);
  FUN_00101b92(local_38,&local_60);
  FUN_00101bc0(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b42(local_58);
  FUN_00101b92(local_38,&local_60);
  FUN_00101bc0(local_58,local_38[0],1,&local_68);
  FUN_00101c86(local_38,local_58);
                    /* try { // try from 001018fd to 00101901 has its CatchHandler @ 0010192c */
  FUN_001036ef(local_38);
  FUN_00101afa(local_38);
  FUN_00101afa(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103cb8(void)

{
  return;
}




void FUN_00101c86(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010259c(param_2);
  FUN_0010254b(&local_31,uVar1);
  uVar1 = FUN_00102524(param_2);
                    /* try { // try from 00101cec to 00101cf0 has its CatchHandler @ 00101d59 */
  FUN_001025ae(param_1,uVar1,&local_31);
  FUN_00101a88(&local_31);
  uVar2 = FUN_00101e42(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_0010266c(param_2);
  uVar4 = FUN_00102614(param_2);
                    /* try { // try from 00101d3a to 00101d3e has its CatchHandler @ 00101d77 */
  uVar1 = FUN_001026c4(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101980(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103776("Calling good()...");
  FUN_0010196b();
  FUN_00103776("Finished good()");
  FUN_00103776("Calling bad()...");
  FUN_001014e9();
  FUN_00103776("Finished bad()");
  return 0;
}




void FUN_00101e82(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102ae5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f2d(param_2);
  uVar2 = FUN_00102f2d(param_1);
  FUN_00102d6f(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103ca2(void)

{
  return;
}




void FUN_00103d05(void)

{
  return;
}




void FUN_0010282e(undefined8 param_1)

{
  FUN_00102c94(param_1);
  return;
}




void FUN_001028e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102da4(param_2);
  uVar2 = FUN_00102da4(param_1);
  FUN_00102db6(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102aae(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102eff(param_1,param_2);
  }
  return uVar1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ee0)();
  return;
}




void FUN_00101da6(undefined8 param_1)

{
  FUN_001026fa(param_1);
  return;
}




void FUN_00103c81(void)

{
  return;
}




void FUN_00103653(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00103752(param_1,2);
  puVar1 = (undefined4 *)*puVar2;
  FUN_001037ce(*puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete(puVar1,8);
  }
  return;
}




undefined8 FUN_00102614(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102766(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103fb0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_0010259c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102766(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102e24(param_3);
  uVar2 = FUN_00103459(local_28);
  uVar3 = FUN_00103459(local_20);
  uVar1 = FUN_0010347a(uVar3,uVar2,uVar1);
  FUN_0010309e(&local_30,uVar1);
  return;
}




void FUN_00102709(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c5a(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010254b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102b3d(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010397a(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001026fa(void)

{
  return;
}




void FUN_00102eaa(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010259c(param_1);
  FUN_001030e5(uVar1);
  return;
}




void FUN_00102c24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f8d(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010266c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102766(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




int FUN_00103c67(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00103ec9(undefined8 *param_1)

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




void FUN_0010279a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102caa(param_3);
  uVar2 = FUN_00102c94(param_1);
  FUN_00102cbc(*param_1,uVar2,uVar1);
  return;
}




void FUN_00102f7a(void)

{
  return;
}



