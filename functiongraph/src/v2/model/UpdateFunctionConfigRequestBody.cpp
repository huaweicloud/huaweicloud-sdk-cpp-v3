

#include "huaweicloud/functiongraph/v2/model/UpdateFunctionConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateFunctionConfigRequestBody::UpdateFunctionConfigRequestBody()
{
    funcName_ = "";
    funcNameIsSet_ = false;
    runtime_ = "";
    runtimeIsSet_ = false;
    timeout_ = 0;
    timeoutIsSet_ = false;
    handler_ = "";
    handlerIsSet_ = false;
    memorySize_ = 0;
    memorySizeIsSet_ = false;
    gpuMemory_ = 0;
    gpuMemoryIsSet_ = false;
    gpuType_ = "";
    gpuTypeIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
    encryptedUserData_ = "";
    encryptedUserDataIsSet_ = false;
    xrole_ = "";
    xroleIsSet_ = false;
    appXrole_ = "";
    appXroleIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    funcVpcIsSet_ = false;
    peeringCidr_ = "";
    peeringCidrIsSet_ = false;
    mountConfigIsSet_ = false;
    strategyConfigIsSet_ = false;
    customImageIsSet_ = false;
    extendConfig_ = "";
    extendConfigIsSet_ = false;
    initializerHandler_ = "";
    initializerHandlerIsSet_ = false;
    initializerTimeout_ = 0;
    initializerTimeoutIsSet_ = false;
    preStopHandler_ = "";
    preStopHandlerIsSet_ = false;
    preStopTimeout_ = 0;
    preStopTimeoutIsSet_ = false;
    ephemeralStorage_ = 0;
    ephemeralStorageIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    logConfigIsSet_ = false;
    networkControllerIsSet_ = false;
    isStatefulFunction_ = false;
    isStatefulFunctionIsSet_ = false;
    enableDynamicMemory_ = false;
    enableDynamicMemoryIsSet_ = false;
    enableAuthInHeader_ = false;
    enableAuthInHeaderIsSet_ = false;
    domainNames_ = "";
    domainNamesIsSet_ = false;
    restoreHookHandler_ = "";
    restoreHookHandlerIsSet_ = false;
    restoreHookTimeout_ = 0;
    restoreHookTimeoutIsSet_ = false;
    heartbeatHandler_ = "";
    heartbeatHandlerIsSet_ = false;
    enableClassIsolation_ = false;
    enableClassIsolationIsSet_ = false;
    enableLtsLog_ = false;
    enableLtsLogIsSet_ = false;
    ltsCustomTagIsSet_ = false;
    userDataEncryptKmsKeyId_ = "";
    userDataEncryptKmsKeyIdIsSet_ = false;
}

UpdateFunctionConfigRequestBody::~UpdateFunctionConfigRequestBody() = default;

void UpdateFunctionConfigRequestBody::validate()
{
}

web::json::value UpdateFunctionConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(funcNameIsSet_) {
        val[utility::conversions::to_string_t("func_name")] = ModelBase::toJson(funcName_);
    }
    if(runtimeIsSet_) {
        val[utility::conversions::to_string_t("runtime")] = ModelBase::toJson(runtime_);
    }
    if(timeoutIsSet_) {
        val[utility::conversions::to_string_t("timeout")] = ModelBase::toJson(timeout_);
    }
    if(handlerIsSet_) {
        val[utility::conversions::to_string_t("handler")] = ModelBase::toJson(handler_);
    }
    if(memorySizeIsSet_) {
        val[utility::conversions::to_string_t("memory_size")] = ModelBase::toJson(memorySize_);
    }
    if(gpuMemoryIsSet_) {
        val[utility::conversions::to_string_t("gpu_memory")] = ModelBase::toJson(gpuMemory_);
    }
    if(gpuTypeIsSet_) {
        val[utility::conversions::to_string_t("gpu_type")] = ModelBase::toJson(gpuType_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }
    if(encryptedUserDataIsSet_) {
        val[utility::conversions::to_string_t("encrypted_user_data")] = ModelBase::toJson(encryptedUserData_);
    }
    if(xroleIsSet_) {
        val[utility::conversions::to_string_t("xrole")] = ModelBase::toJson(xrole_);
    }
    if(appXroleIsSet_) {
        val[utility::conversions::to_string_t("app_xrole")] = ModelBase::toJson(appXrole_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(funcVpcIsSet_) {
        val[utility::conversions::to_string_t("func_vpc")] = ModelBase::toJson(funcVpc_);
    }
    if(peeringCidrIsSet_) {
        val[utility::conversions::to_string_t("peering_cidr")] = ModelBase::toJson(peeringCidr_);
    }
    if(mountConfigIsSet_) {
        val[utility::conversions::to_string_t("mount_config")] = ModelBase::toJson(mountConfig_);
    }
    if(strategyConfigIsSet_) {
        val[utility::conversions::to_string_t("strategy_config")] = ModelBase::toJson(strategyConfig_);
    }
    if(customImageIsSet_) {
        val[utility::conversions::to_string_t("custom_image")] = ModelBase::toJson(customImage_);
    }
    if(extendConfigIsSet_) {
        val[utility::conversions::to_string_t("extend_config")] = ModelBase::toJson(extendConfig_);
    }
    if(initializerHandlerIsSet_) {
        val[utility::conversions::to_string_t("initializer_handler")] = ModelBase::toJson(initializerHandler_);
    }
    if(initializerTimeoutIsSet_) {
        val[utility::conversions::to_string_t("initializer_timeout")] = ModelBase::toJson(initializerTimeout_);
    }
    if(preStopHandlerIsSet_) {
        val[utility::conversions::to_string_t("pre_stop_handler")] = ModelBase::toJson(preStopHandler_);
    }
    if(preStopTimeoutIsSet_) {
        val[utility::conversions::to_string_t("pre_stop_timeout")] = ModelBase::toJson(preStopTimeout_);
    }
    if(ephemeralStorageIsSet_) {
        val[utility::conversions::to_string_t("ephemeral_storage")] = ModelBase::toJson(ephemeralStorage_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(logConfigIsSet_) {
        val[utility::conversions::to_string_t("log_config")] = ModelBase::toJson(logConfig_);
    }
    if(networkControllerIsSet_) {
        val[utility::conversions::to_string_t("network_controller")] = ModelBase::toJson(networkController_);
    }
    if(isStatefulFunctionIsSet_) {
        val[utility::conversions::to_string_t("is_stateful_function")] = ModelBase::toJson(isStatefulFunction_);
    }
    if(enableDynamicMemoryIsSet_) {
        val[utility::conversions::to_string_t("enable_dynamic_memory")] = ModelBase::toJson(enableDynamicMemory_);
    }
    if(enableAuthInHeaderIsSet_) {
        val[utility::conversions::to_string_t("enable_auth_in_header")] = ModelBase::toJson(enableAuthInHeader_);
    }
    if(domainNamesIsSet_) {
        val[utility::conversions::to_string_t("domain_names")] = ModelBase::toJson(domainNames_);
    }
    if(restoreHookHandlerIsSet_) {
        val[utility::conversions::to_string_t("restore_hook_handler")] = ModelBase::toJson(restoreHookHandler_);
    }
    if(restoreHookTimeoutIsSet_) {
        val[utility::conversions::to_string_t("restore_hook_timeout")] = ModelBase::toJson(restoreHookTimeout_);
    }
    if(heartbeatHandlerIsSet_) {
        val[utility::conversions::to_string_t("heartbeat_handler")] = ModelBase::toJson(heartbeatHandler_);
    }
    if(enableClassIsolationIsSet_) {
        val[utility::conversions::to_string_t("enable_class_isolation")] = ModelBase::toJson(enableClassIsolation_);
    }
    if(enableLtsLogIsSet_) {
        val[utility::conversions::to_string_t("enable_lts_log")] = ModelBase::toJson(enableLtsLog_);
    }
    if(ltsCustomTagIsSet_) {
        val[utility::conversions::to_string_t("lts_custom_tag")] = ModelBase::toJson(ltsCustomTag_);
    }
    if(userDataEncryptKmsKeyIdIsSet_) {
        val[utility::conversions::to_string_t("user_data_encrypt_kms_key_id")] = ModelBase::toJson(userDataEncryptKmsKeyId_);
    }

    return val;
}
bool UpdateFunctionConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("func_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runtime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeout"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("handler"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("handler"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHandler(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memory_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memory_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemorySize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gpu_memory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpu_memory"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpuMemory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gpu_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpu_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpuType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encrypted_user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encrypted_user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryptedUserData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("xrole"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("xrole"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXrole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_xrole"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_xrole"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppXrole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("func_vpc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_vpc"));
        if(!fieldValue.is_null())
        {
            FuncVpc refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncVpc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("peering_cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("peering_cidr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeeringCidr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mount_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mount_config"));
        if(!fieldValue.is_null())
        {
            MountConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMountConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("strategy_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("strategy_config"));
        if(!fieldValue.is_null())
        {
            StrategyConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStrategyConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_image"));
        if(!fieldValue.is_null())
        {
            CustomImage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extend_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extend_config"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("initializer_handler"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("initializer_handler"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInitializerHandler(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("initializer_timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("initializer_timeout"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInitializerTimeout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pre_stop_handler"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pre_stop_handler"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreStopHandler(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pre_stop_timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pre_stop_timeout"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreStopTimeout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ephemeral_storage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ephemeral_storage"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEphemeralStorage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_config"));
        if(!fieldValue.is_null())
        {
            FuncLogConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network_controller"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_controller"));
        if(!fieldValue.is_null())
        {
            NetworkControlConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkController(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_stateful_function"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_stateful_function"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsStatefulFunction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_dynamic_memory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_dynamic_memory"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableDynamicMemory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_auth_in_header"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_auth_in_header"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableAuthInHeader(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_names"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restore_hook_handler"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_hook_handler"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreHookHandler(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restore_hook_timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_hook_timeout"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreHookTimeout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("heartbeat_handler"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("heartbeat_handler"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeartbeatHandler(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_class_isolation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_class_isolation"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableClassIsolation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_lts_log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_lts_log"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableLtsLog(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_custom_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_custom_tag"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsCustomTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_data_encrypt_kms_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data_encrypt_kms_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserDataEncryptKmsKeyId(refVal);
        }
    }
    return ok;
}


std::string UpdateFunctionConfigRequestBody::getFuncName() const
{
    return funcName_;
}

void UpdateFunctionConfigRequestBody::setFuncName(const std::string& value)
{
    funcName_ = value;
    funcNameIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::funcNameIsSet() const
{
    return funcNameIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetfuncName()
{
    funcNameIsSet_ = false;
}

std::string UpdateFunctionConfigRequestBody::getRuntime() const
{
    return runtime_;
}

void UpdateFunctionConfigRequestBody::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetruntime()
{
    runtimeIsSet_ = false;
}

int32_t UpdateFunctionConfigRequestBody::getTimeout() const
{
    return timeout_;
}

void UpdateFunctionConfigRequestBody::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void UpdateFunctionConfigRequestBody::unsettimeout()
{
    timeoutIsSet_ = false;
}

std::string UpdateFunctionConfigRequestBody::getHandler() const
{
    return handler_;
}

void UpdateFunctionConfigRequestBody::setHandler(const std::string& value)
{
    handler_ = value;
    handlerIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::handlerIsSet() const
{
    return handlerIsSet_;
}

void UpdateFunctionConfigRequestBody::unsethandler()
{
    handlerIsSet_ = false;
}

int32_t UpdateFunctionConfigRequestBody::getMemorySize() const
{
    return memorySize_;
}

void UpdateFunctionConfigRequestBody::setMemorySize(int32_t value)
{
    memorySize_ = value;
    memorySizeIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::memorySizeIsSet() const
{
    return memorySizeIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetmemorySize()
{
    memorySizeIsSet_ = false;
}

int32_t UpdateFunctionConfigRequestBody::getGpuMemory() const
{
    return gpuMemory_;
}

void UpdateFunctionConfigRequestBody::setGpuMemory(int32_t value)
{
    gpuMemory_ = value;
    gpuMemoryIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::gpuMemoryIsSet() const
{
    return gpuMemoryIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetgpuMemory()
{
    gpuMemoryIsSet_ = false;
}

std::string UpdateFunctionConfigRequestBody::getGpuType() const
{
    return gpuType_;
}

void UpdateFunctionConfigRequestBody::setGpuType(const std::string& value)
{
    gpuType_ = value;
    gpuTypeIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::gpuTypeIsSet() const
{
    return gpuTypeIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetgpuType()
{
    gpuTypeIsSet_ = false;
}

std::string UpdateFunctionConfigRequestBody::getUserData() const
{
    return userData_;
}

void UpdateFunctionConfigRequestBody::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::userDataIsSet() const
{
    return userDataIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetuserData()
{
    userDataIsSet_ = false;
}

std::string UpdateFunctionConfigRequestBody::getEncryptedUserData() const
{
    return encryptedUserData_;
}

void UpdateFunctionConfigRequestBody::setEncryptedUserData(const std::string& value)
{
    encryptedUserData_ = value;
    encryptedUserDataIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::encryptedUserDataIsSet() const
{
    return encryptedUserDataIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetencryptedUserData()
{
    encryptedUserDataIsSet_ = false;
}

std::string UpdateFunctionConfigRequestBody::getXrole() const
{
    return xrole_;
}

void UpdateFunctionConfigRequestBody::setXrole(const std::string& value)
{
    xrole_ = value;
    xroleIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::xroleIsSet() const
{
    return xroleIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetxrole()
{
    xroleIsSet_ = false;
}

std::string UpdateFunctionConfigRequestBody::getAppXrole() const
{
    return appXrole_;
}

void UpdateFunctionConfigRequestBody::setAppXrole(const std::string& value)
{
    appXrole_ = value;
    appXroleIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::appXroleIsSet() const
{
    return appXroleIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetappXrole()
{
    appXroleIsSet_ = false;
}

std::string UpdateFunctionConfigRequestBody::getDescription() const
{
    return description_;
}

void UpdateFunctionConfigRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

FuncVpc UpdateFunctionConfigRequestBody::getFuncVpc() const
{
    return funcVpc_;
}

void UpdateFunctionConfigRequestBody::setFuncVpc(const FuncVpc& value)
{
    funcVpc_ = value;
    funcVpcIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::funcVpcIsSet() const
{
    return funcVpcIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetfuncVpc()
{
    funcVpcIsSet_ = false;
}

std::string UpdateFunctionConfigRequestBody::getPeeringCidr() const
{
    return peeringCidr_;
}

void UpdateFunctionConfigRequestBody::setPeeringCidr(const std::string& value)
{
    peeringCidr_ = value;
    peeringCidrIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::peeringCidrIsSet() const
{
    return peeringCidrIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetpeeringCidr()
{
    peeringCidrIsSet_ = false;
}

MountConfig UpdateFunctionConfigRequestBody::getMountConfig() const
{
    return mountConfig_;
}

void UpdateFunctionConfigRequestBody::setMountConfig(const MountConfig& value)
{
    mountConfig_ = value;
    mountConfigIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::mountConfigIsSet() const
{
    return mountConfigIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetmountConfig()
{
    mountConfigIsSet_ = false;
}

StrategyConfig UpdateFunctionConfigRequestBody::getStrategyConfig() const
{
    return strategyConfig_;
}

void UpdateFunctionConfigRequestBody::setStrategyConfig(const StrategyConfig& value)
{
    strategyConfig_ = value;
    strategyConfigIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::strategyConfigIsSet() const
{
    return strategyConfigIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetstrategyConfig()
{
    strategyConfigIsSet_ = false;
}

CustomImage UpdateFunctionConfigRequestBody::getCustomImage() const
{
    return customImage_;
}

void UpdateFunctionConfigRequestBody::setCustomImage(const CustomImage& value)
{
    customImage_ = value;
    customImageIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::customImageIsSet() const
{
    return customImageIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetcustomImage()
{
    customImageIsSet_ = false;
}

std::string UpdateFunctionConfigRequestBody::getExtendConfig() const
{
    return extendConfig_;
}

void UpdateFunctionConfigRequestBody::setExtendConfig(const std::string& value)
{
    extendConfig_ = value;
    extendConfigIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::extendConfigIsSet() const
{
    return extendConfigIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetextendConfig()
{
    extendConfigIsSet_ = false;
}

std::string UpdateFunctionConfigRequestBody::getInitializerHandler() const
{
    return initializerHandler_;
}

void UpdateFunctionConfigRequestBody::setInitializerHandler(const std::string& value)
{
    initializerHandler_ = value;
    initializerHandlerIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::initializerHandlerIsSet() const
{
    return initializerHandlerIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetinitializerHandler()
{
    initializerHandlerIsSet_ = false;
}

int32_t UpdateFunctionConfigRequestBody::getInitializerTimeout() const
{
    return initializerTimeout_;
}

void UpdateFunctionConfigRequestBody::setInitializerTimeout(int32_t value)
{
    initializerTimeout_ = value;
    initializerTimeoutIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::initializerTimeoutIsSet() const
{
    return initializerTimeoutIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetinitializerTimeout()
{
    initializerTimeoutIsSet_ = false;
}

std::string UpdateFunctionConfigRequestBody::getPreStopHandler() const
{
    return preStopHandler_;
}

void UpdateFunctionConfigRequestBody::setPreStopHandler(const std::string& value)
{
    preStopHandler_ = value;
    preStopHandlerIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::preStopHandlerIsSet() const
{
    return preStopHandlerIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetpreStopHandler()
{
    preStopHandlerIsSet_ = false;
}

int32_t UpdateFunctionConfigRequestBody::getPreStopTimeout() const
{
    return preStopTimeout_;
}

void UpdateFunctionConfigRequestBody::setPreStopTimeout(int32_t value)
{
    preStopTimeout_ = value;
    preStopTimeoutIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::preStopTimeoutIsSet() const
{
    return preStopTimeoutIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetpreStopTimeout()
{
    preStopTimeoutIsSet_ = false;
}

int32_t UpdateFunctionConfigRequestBody::getEphemeralStorage() const
{
    return ephemeralStorage_;
}

void UpdateFunctionConfigRequestBody::setEphemeralStorage(int32_t value)
{
    ephemeralStorage_ = value;
    ephemeralStorageIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::ephemeralStorageIsSet() const
{
    return ephemeralStorageIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetephemeralStorage()
{
    ephemeralStorageIsSet_ = false;
}

std::string UpdateFunctionConfigRequestBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateFunctionConfigRequestBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

FuncLogConfig UpdateFunctionConfigRequestBody::getLogConfig() const
{
    return logConfig_;
}

void UpdateFunctionConfigRequestBody::setLogConfig(const FuncLogConfig& value)
{
    logConfig_ = value;
    logConfigIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::logConfigIsSet() const
{
    return logConfigIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetlogConfig()
{
    logConfigIsSet_ = false;
}

NetworkControlConfig UpdateFunctionConfigRequestBody::getNetworkController() const
{
    return networkController_;
}

void UpdateFunctionConfigRequestBody::setNetworkController(const NetworkControlConfig& value)
{
    networkController_ = value;
    networkControllerIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::networkControllerIsSet() const
{
    return networkControllerIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetnetworkController()
{
    networkControllerIsSet_ = false;
}

bool UpdateFunctionConfigRequestBody::isIsStatefulFunction() const
{
    return isStatefulFunction_;
}

void UpdateFunctionConfigRequestBody::setIsStatefulFunction(bool value)
{
    isStatefulFunction_ = value;
    isStatefulFunctionIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::isStatefulFunctionIsSet() const
{
    return isStatefulFunctionIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetisStatefulFunction()
{
    isStatefulFunctionIsSet_ = false;
}

bool UpdateFunctionConfigRequestBody::isEnableDynamicMemory() const
{
    return enableDynamicMemory_;
}

void UpdateFunctionConfigRequestBody::setEnableDynamicMemory(bool value)
{
    enableDynamicMemory_ = value;
    enableDynamicMemoryIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::enableDynamicMemoryIsSet() const
{
    return enableDynamicMemoryIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetenableDynamicMemory()
{
    enableDynamicMemoryIsSet_ = false;
}

bool UpdateFunctionConfigRequestBody::isEnableAuthInHeader() const
{
    return enableAuthInHeader_;
}

void UpdateFunctionConfigRequestBody::setEnableAuthInHeader(bool value)
{
    enableAuthInHeader_ = value;
    enableAuthInHeaderIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::enableAuthInHeaderIsSet() const
{
    return enableAuthInHeaderIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetenableAuthInHeader()
{
    enableAuthInHeaderIsSet_ = false;
}

std::string UpdateFunctionConfigRequestBody::getDomainNames() const
{
    return domainNames_;
}

void UpdateFunctionConfigRequestBody::setDomainNames(const std::string& value)
{
    domainNames_ = value;
    domainNamesIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::domainNamesIsSet() const
{
    return domainNamesIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetdomainNames()
{
    domainNamesIsSet_ = false;
}

std::string UpdateFunctionConfigRequestBody::getRestoreHookHandler() const
{
    return restoreHookHandler_;
}

void UpdateFunctionConfigRequestBody::setRestoreHookHandler(const std::string& value)
{
    restoreHookHandler_ = value;
    restoreHookHandlerIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::restoreHookHandlerIsSet() const
{
    return restoreHookHandlerIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetrestoreHookHandler()
{
    restoreHookHandlerIsSet_ = false;
}

int32_t UpdateFunctionConfigRequestBody::getRestoreHookTimeout() const
{
    return restoreHookTimeout_;
}

void UpdateFunctionConfigRequestBody::setRestoreHookTimeout(int32_t value)
{
    restoreHookTimeout_ = value;
    restoreHookTimeoutIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::restoreHookTimeoutIsSet() const
{
    return restoreHookTimeoutIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetrestoreHookTimeout()
{
    restoreHookTimeoutIsSet_ = false;
}

std::string UpdateFunctionConfigRequestBody::getHeartbeatHandler() const
{
    return heartbeatHandler_;
}

void UpdateFunctionConfigRequestBody::setHeartbeatHandler(const std::string& value)
{
    heartbeatHandler_ = value;
    heartbeatHandlerIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::heartbeatHandlerIsSet() const
{
    return heartbeatHandlerIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetheartbeatHandler()
{
    heartbeatHandlerIsSet_ = false;
}

bool UpdateFunctionConfigRequestBody::isEnableClassIsolation() const
{
    return enableClassIsolation_;
}

void UpdateFunctionConfigRequestBody::setEnableClassIsolation(bool value)
{
    enableClassIsolation_ = value;
    enableClassIsolationIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::enableClassIsolationIsSet() const
{
    return enableClassIsolationIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetenableClassIsolation()
{
    enableClassIsolationIsSet_ = false;
}

bool UpdateFunctionConfigRequestBody::isEnableLtsLog() const
{
    return enableLtsLog_;
}

void UpdateFunctionConfigRequestBody::setEnableLtsLog(bool value)
{
    enableLtsLog_ = value;
    enableLtsLogIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::enableLtsLogIsSet() const
{
    return enableLtsLogIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetenableLtsLog()
{
    enableLtsLogIsSet_ = false;
}

std::map<std::string, std::string>& UpdateFunctionConfigRequestBody::getLtsCustomTag()
{
    return ltsCustomTag_;
}

void UpdateFunctionConfigRequestBody::setLtsCustomTag(const std::map<std::string, std::string>& value)
{
    ltsCustomTag_ = value;
    ltsCustomTagIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::ltsCustomTagIsSet() const
{
    return ltsCustomTagIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetltsCustomTag()
{
    ltsCustomTagIsSet_ = false;
}

std::string UpdateFunctionConfigRequestBody::getUserDataEncryptKmsKeyId() const
{
    return userDataEncryptKmsKeyId_;
}

void UpdateFunctionConfigRequestBody::setUserDataEncryptKmsKeyId(const std::string& value)
{
    userDataEncryptKmsKeyId_ = value;
    userDataEncryptKmsKeyIdIsSet_ = true;
}

bool UpdateFunctionConfigRequestBody::userDataEncryptKmsKeyIdIsSet() const
{
    return userDataEncryptKmsKeyIdIsSet_;
}

void UpdateFunctionConfigRequestBody::unsetuserDataEncryptKmsKeyId()
{
    userDataEncryptKmsKeyIdIsSet_ = false;
}

}
}
}
}
}


