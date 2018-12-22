#ifndef __HCALL_CONSTANT_H
#define __HCALL_CONSTANT_H

// RAX input value of hcall request
#define HCALL_RAX_ID 0x1d08aa3e
// RAX return value indicating a hcall handled successfully
#define HCALL_SUCCESS 0x2be98adc
// RAX return value indicating a bad request
#define HCALL_INVAL 0xb614e7a

// kvm_run->exit_reason
#define HCALL_EXIT_REASON 0x33f355d
#define KVM_EXIT_HCALL HCALL_EXIT_REASON

// Sub-commands saved in kvm_run->hypercall.args[0]
#define HCALL_INSTALL_BP 0xf477909a

#endif /* __HCALL_CONSTANT_H */
