

#include "huaweicloud/functiongraph/v2/model/CreateFunctionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateFunctionRequestBody::CreateFunctionRequestBody()
{
    funcName_ = "";
    funcNameIsSet_ = false;
    package_ = "";
    packageIsSet_ = false;
    runtime_ = "";
    runtimeIsSet_ = false;
    timeout_ = 0;
    timeoutIsSet_ = false;
    handler_ = "";
    handlerIsSet_ = false;
    dependVersionListIsSet_ = false;
    funcVpcIsSet_ = false;
    memorySize_ = 0;
    memorySizeIsSet_ = false;
    gpuMemory_ = 0;
    gpuMemoryIsSet_ = false;
    gpuType_ = "";
    gpuTypeIsSet_ = false;
    codeType_ = "";
    codeTypeIsSet_ = false;
    codeUrl_ = "";
    codeUrlIsSet_ = false;
    codeFilename_ = "";
    codeFilenameIsSet_ = false;
    customImageIsSet_ = false;
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
    funcCodeIsSet_ = false;
    mountConfigIsSet_ = false;
    initializerHandler_ = "";
    initializerHandlerIsSet_ = false;
    initializerTimeout_ = 0;
    initializerTimeoutIsSet_ = false;
    preStopHandler_ = "";
    preStopHandlerIsSet_ = false;
    preStopTimeout_ = 0;
    preStopTimeoutIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    logConfigIsSet_ = false;
    networkControllerIsSet_ = false;
    isStatefulFunction_ = false;
    isStatefulFunctionIsSet_ = false;
    enableDynamicMemory_ = false;
    enableDynamicMemoryIsSet_ = false;
    enableLtsLog_ = false;
    enableLtsLogIsSet_ = false;
    ltsCustomTagIsSet_ = false;
    userDataEncryptKmsKeyId_ = "";
    userDataEncryptKmsKeyIdIsSet_ = false;
    codeEncryptKmsKeyId_ = "";
    codeEncryptKmsKeyIdIsSet_ = false;
    domainNames_ = "";
    domainNamesIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
}

CreateFunctionRequestBody::~CreateFunctionRequestBody() = default;

void CreateFunctionRequestBody::validate()
{
}

web::json::value CreateFunctionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(funcNameIsSet_) {
        val[utility::conversions::to_string_t("func_name")] = ModelBase::toJson(funcName_);
    }
    if(packageIsSet_) {
        val[utility::conversions::to_string_t("package")] = ModelBase::toJson(package_);
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
    if(dependVersionListIsSet_) {
        val[utility::conversions::to_string_t("depend_version_list")] = ModelBase::toJson(dependVersionList_);
    }
    if(funcVpcIsSet_) {
        val[utility::conversions::to_string_t("func_vpc")] = ModelBase::toJson(funcVpc_);
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
    if(codeTypeIsSet_) {
        val[utility::conversions::to_string_t("code_type")] = ModelBase::toJson(codeType_);
    }
    if(codeUrlIsSet_) {
        val[utility::conversions::to_string_t("code_url")] = ModelBase::toJson(codeUrl_);
    }
    if(codeFilenameIsSet_) {
        val[utility::conversions::to_string_t("code_filename")] = ModelBase::toJson(codeFilename_);
    }
    if(customImageIsSet_) {
        val[utility::conversions::to_string_t("custom_image")] = ModelBase::toJson(customImage_);
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
    if(funcCodeIsSet_) {
        val[utility::conversions::to_string_t("func_code")] = ModelBase::toJson(funcCode_);
    }
    if(mountConfigIsSet_) {
        val[utility::conversions::to_string_t("mount_config")] = ModelBase::toJson(mountConfig_);
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
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
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
    if(enableLtsLogIsSet_) {
        val[utility::conversions::to_string_t("enable_lts_log")] = ModelBase::toJson(enableLtsLog_);
    }
    if(ltsCustomTagIsSet_) {
        val[utility::conversions::to_string_t("lts_custom_tag")] = ModelBase::toJson(ltsCustomTag_);
    }
    if(userDataEncryptKmsKeyIdIsSet_) {
        val[utility::conversions::to_string_t("user_data_encrypt_kms_key_id")] = ModelBase::toJson(userDataEncryptKmsKeyId_);
    }
    if(codeEncryptKmsKeyIdIsSet_) {
        val[utility::conversions::to_string_t("code_encrypt_kms_key_id")] = ModelBase::toJson(codeEncryptKmsKeyId_);
    }
    if(domainNamesIsSet_) {
        val[utility::conversions::to_string_t("domain_names")] = ModelBase::toJson(domainNames_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool CreateFunctionRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("package"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("depend_version_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("depend_version_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDependVersionList(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("code_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_filename"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_filename"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeFilename(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("func_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_code"));
        if(!fieldValue.is_null())
        {
            FuncCode refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("code_encrypt_kms_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_encrypt_kms_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeEncryptKmsKeyId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string CreateFunctionRequestBody::getFuncName() const
{
    return funcName_;
}

void CreateFunctionRequestBody::setFuncName(const std::string& value)
{
    funcName_ = value;
    funcNameIsSet_ = true;
}

bool CreateFunctionRequestBody::funcNameIsSet() const
{
    return funcNameIsSet_;
}

void CreateFunctionRequestBody::unsetfuncName()
{
    funcNameIsSet_ = false;
}

std::string CreateFunctionRequestBody::getPackage() const
{
    return package_;
}

void CreateFunctionRequestBody::setPackage(const std::string& value)
{
    package_ = value;
    packageIsSet_ = true;
}

bool CreateFunctionRequestBody::packageIsSet() const
{
    return packageIsSet_;
}

void CreateFunctionRequestBody::unsetpackage()
{
    packageIsSet_ = false;
}

std::string CreateFunctionRequestBody::getRuntime() const
{
    return runtime_;
}

void CreateFunctionRequestBody::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool CreateFunctionRequestBody::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void CreateFunctionRequestBody::unsetruntime()
{
    runtimeIsSet_ = false;
}

int32_t CreateFunctionRequestBody::getTimeout() const
{
    return timeout_;
}

void CreateFunctionRequestBody::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool CreateFunctionRequestBody::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void CreateFunctionRequestBody::unsettimeout()
{
    timeoutIsSet_ = false;
}

std::string CreateFunctionRequestBody::getHandler() const
{
    return handler_;
}

void CreateFunctionRequestBody::setHandler(const std::string& value)
{
    handler_ = value;
    handlerIsSet_ = true;
}

bool CreateFunctionRequestBody::handlerIsSet() const
{
    return handlerIsSet_;
}

void CreateFunctionRequestBody::unsethandler()
{
    handlerIsSet_ = false;
}

std::vector<std::string>& CreateFunctionRequestBody::getDependVersionList()
{
    return dependVersionList_;
}

void CreateFunctionRequestBody::setDependVersionList(const std::vector<std::string>& value)
{
    dependVersionList_ = value;
    dependVersionListIsSet_ = true;
}

bool CreateFunctionRequestBody::dependVersionListIsSet() const
{
    return dependVersionListIsSet_;
}

void CreateFunctionRequestBody::unsetdependVersionList()
{
    dependVersionListIsSet_ = false;
}

FuncVpc CreateFunctionRequestBody::getFuncVpc() const
{
    return funcVpc_;
}

void CreateFunctionRequestBody::setFuncVpc(const FuncVpc& value)
{
    funcVpc_ = value;
    funcVpcIsSet_ = true;
}

bool CreateFunctionRequestBody::funcVpcIsSet() const
{
    return funcVpcIsSet_;
}

void CreateFunctionRequestBody::unsetfuncVpc()
{
    funcVpcIsSet_ = false;
}

int32_t CreateFunctionRequestBody::getMemorySize() const
{
    return memorySize_;
}

void CreateFunctionRequestBody::setMemorySize(int32_t value)
{
    memorySize_ = value;
    memorySizeIsSet_ = true;
}

bool CreateFunctionRequestBody::memorySizeIsSet() const
{
    return memorySizeIsSet_;
}

void CreateFunctionRequestBody::unsetmemorySize()
{
    memorySizeIsSet_ = false;
}

int32_t CreateFunctionRequestBody::getGpuMemory() const
{
    return gpuMemory_;
}

void CreateFunctionRequestBody::setGpuMemory(int32_t value)
{
    gpuMemory_ = value;
    gpuMemoryIsSet_ = true;
}

bool CreateFunctionRequestBody::gpuMemoryIsSet() const
{
    return gpuMemoryIsSet_;
}

void CreateFunctionRequestBody::unsetgpuMemory()
{
    gpuMemoryIsSet_ = false;
}

std::string CreateFunctionRequestBody::getGpuType() const
{
    return gpuType_;
}

void CreateFunctionRequestBody::setGpuType(const std::string& value)
{
    gpuType_ = value;
    gpuTypeIsSet_ = true;
}

bool CreateFunctionRequestBody::gpuTypeIsSet() const
{
    return gpuTypeIsSet_;
}

void CreateFunctionRequestBody::unsetgpuType()
{
    gpuTypeIsSet_ = false;
}

std::string CreateFunctionRequestBody::getCodeType() const
{
    return codeType_;
}

void CreateFunctionRequestBody::setCodeType(const std::string& value)
{
    codeType_ = value;
    codeTypeIsSet_ = true;
}

bool CreateFunctionRequestBody::codeTypeIsSet() const
{
    return codeTypeIsSet_;
}

void CreateFunctionRequestBody::unsetcodeType()
{
    codeTypeIsSet_ = false;
}

std::string CreateFunctionRequestBody::getCodeUrl() const
{
    return codeUrl_;
}

void CreateFunctionRequestBody::setCodeUrl(const std::string& value)
{
    codeUrl_ = value;
    codeUrlIsSet_ = true;
}

bool CreateFunctionRequestBody::codeUrlIsSet() const
{
    return codeUrlIsSet_;
}

void CreateFunctionRequestBody::unsetcodeUrl()
{
    codeUrlIsSet_ = false;
}

std::string CreateFunctionRequestBody::getCodeFilename() const
{
    return codeFilename_;
}

void CreateFunctionRequestBody::setCodeFilename(const std::string& value)
{
    codeFilename_ = value;
    codeFilenameIsSet_ = true;
}

bool CreateFunctionRequestBody::codeFilenameIsSet() const
{
    return codeFilenameIsSet_;
}

void CreateFunctionRequestBody::unsetcodeFilename()
{
    codeFilenameIsSet_ = false;
}

CustomImage CreateFunctionRequestBody::getCustomImage() const
{
    return customImage_;
}

void CreateFunctionRequestBody::setCustomImage(const CustomImage& value)
{
    customImage_ = value;
    customImageIsSet_ = true;
}

bool CreateFunctionRequestBody::customImageIsSet() const
{
    return customImageIsSet_;
}

void CreateFunctionRequestBody::unsetcustomImage()
{
    customImageIsSet_ = false;
}

std::string CreateFunctionRequestBody::getUserData() const
{
    return userData_;
}

void CreateFunctionRequestBody::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool CreateFunctionRequestBody::userDataIsSet() const
{
    return userDataIsSet_;
}

void CreateFunctionRequestBody::unsetuserData()
{
    userDataIsSet_ = false;
}

std::string CreateFunctionRequestBody::getEncryptedUserData() const
{
    return encryptedUserData_;
}

void CreateFunctionRequestBody::setEncryptedUserData(const std::string& value)
{
    encryptedUserData_ = value;
    encryptedUserDataIsSet_ = true;
}

bool CreateFunctionRequestBody::encryptedUserDataIsSet() const
{
    return encryptedUserDataIsSet_;
}

void CreateFunctionRequestBody::unsetencryptedUserData()
{
    encryptedUserDataIsSet_ = false;
}

std::string CreateFunctionRequestBody::getXrole() const
{
    return xrole_;
}

void CreateFunctionRequestBody::setXrole(const std::string& value)
{
    xrole_ = value;
    xroleIsSet_ = true;
}

bool CreateFunctionRequestBody::xroleIsSet() const
{
    return xroleIsSet_;
}

void CreateFunctionRequestBody::unsetxrole()
{
    xroleIsSet_ = false;
}

std::string CreateFunctionRequestBody::getAppXrole() const
{
    return appXrole_;
}

void CreateFunctionRequestBody::setAppXrole(const std::string& value)
{
    appXrole_ = value;
    appXroleIsSet_ = true;
}

bool CreateFunctionRequestBody::appXroleIsSet() const
{
    return appXroleIsSet_;
}

void CreateFunctionRequestBody::unsetappXrole()
{
    appXroleIsSet_ = false;
}

std::string CreateFunctionRequestBody::getDescription() const
{
    return description_;
}

void CreateFunctionRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateFunctionRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateFunctionRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

FuncCode CreateFunctionRequestBody::getFuncCode() const
{
    return funcCode_;
}

void CreateFunctionRequestBody::setFuncCode(const FuncCode& value)
{
    funcCode_ = value;
    funcCodeIsSet_ = true;
}

bool CreateFunctionRequestBody::funcCodeIsSet() const
{
    return funcCodeIsSet_;
}

void CreateFunctionRequestBody::unsetfuncCode()
{
    funcCodeIsSet_ = false;
}

MountConfig CreateFunctionRequestBody::getMountConfig() const
{
    return mountConfig_;
}

void CreateFunctionRequestBody::setMountConfig(const MountConfig& value)
{
    mountConfig_ = value;
    mountConfigIsSet_ = true;
}

bool CreateFunctionRequestBody::mountConfigIsSet() const
{
    return mountConfigIsSet_;
}

void CreateFunctionRequestBody::unsetmountConfig()
{
    mountConfigIsSet_ = false;
}

std::string CreateFunctionRequestBody::getInitializerHandler() const
{
    return initializerHandler_;
}

void CreateFunctionRequestBody::setInitializerHandler(const std::string& value)
{
    initializerHandler_ = value;
    initializerHandlerIsSet_ = true;
}

bool CreateFunctionRequestBody::initializerHandlerIsSet() const
{
    return initializerHandlerIsSet_;
}

void CreateFunctionRequestBody::unsetinitializerHandler()
{
    initializerHandlerIsSet_ = false;
}

int32_t CreateFunctionRequestBody::getInitializerTimeout() const
{
    return initializerTimeout_;
}

void CreateFunctionRequestBody::setInitializerTimeout(int32_t value)
{
    initializerTimeout_ = value;
    initializerTimeoutIsSet_ = true;
}

bool CreateFunctionRequestBody::initializerTimeoutIsSet() const
{
    return initializerTimeoutIsSet_;
}

void CreateFunctionRequestBody::unsetinitializerTimeout()
{
    initializerTimeoutIsSet_ = false;
}

std::string CreateFunctionRequestBody::getPreStopHandler() const
{
    return preStopHandler_;
}

void CreateFunctionRequestBody::setPreStopHandler(const std::string& value)
{
    preStopHandler_ = value;
    preStopHandlerIsSet_ = true;
}

bool CreateFunctionRequestBody::preStopHandlerIsSet() const
{
    return preStopHandlerIsSet_;
}

void CreateFunctionRequestBody::unsetpreStopHandler()
{
    preStopHandlerIsSet_ = false;
}

int32_t CreateFunctionRequestBody::getPreStopTimeout() const
{
    return preStopTimeout_;
}

void CreateFunctionRequestBody::setPreStopTimeout(int32_t value)
{
    preStopTimeout_ = value;
    preStopTimeoutIsSet_ = true;
}

bool CreateFunctionRequestBody::preStopTimeoutIsSet() const
{
    return preStopTimeoutIsSet_;
}

void CreateFunctionRequestBody::unsetpreStopTimeout()
{
    preStopTimeoutIsSet_ = false;
}

std::string CreateFunctionRequestBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateFunctionRequestBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateFunctionRequestBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateFunctionRequestBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string CreateFunctionRequestBody::getType() const
{
    return type_;
}

void CreateFunctionRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateFunctionRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void CreateFunctionRequestBody::unsettype()
{
    typeIsSet_ = false;
}

FuncLogConfig CreateFunctionRequestBody::getLogConfig() const
{
    return logConfig_;
}

void CreateFunctionRequestBody::setLogConfig(const FuncLogConfig& value)
{
    logConfig_ = value;
    logConfigIsSet_ = true;
}

bool CreateFunctionRequestBody::logConfigIsSet() const
{
    return logConfigIsSet_;
}

void CreateFunctionRequestBody::unsetlogConfig()
{
    logConfigIsSet_ = false;
}

NetworkControlConfig CreateFunctionRequestBody::getNetworkController() const
{
    return networkController_;
}

void CreateFunctionRequestBody::setNetworkController(const NetworkControlConfig& value)
{
    networkController_ = value;
    networkControllerIsSet_ = true;
}

bool CreateFunctionRequestBody::networkControllerIsSet() const
{
    return networkControllerIsSet_;
}

void CreateFunctionRequestBody::unsetnetworkController()
{
    networkControllerIsSet_ = false;
}

bool CreateFunctionRequestBody::isIsStatefulFunction() const
{
    return isStatefulFunction_;
}

void CreateFunctionRequestBody::setIsStatefulFunction(bool value)
{
    isStatefulFunction_ = value;
    isStatefulFunctionIsSet_ = true;
}

bool CreateFunctionRequestBody::isStatefulFunctionIsSet() const
{
    return isStatefulFunctionIsSet_;
}

void CreateFunctionRequestBody::unsetisStatefulFunction()
{
    isStatefulFunctionIsSet_ = false;
}

bool CreateFunctionRequestBody::isEnableDynamicMemory() const
{
    return enableDynamicMemory_;
}

void CreateFunctionRequestBody::setEnableDynamicMemory(bool value)
{
    enableDynamicMemory_ = value;
    enableDynamicMemoryIsSet_ = true;
}

bool CreateFunctionRequestBody::enableDynamicMemoryIsSet() const
{
    return enableDynamicMemoryIsSet_;
}

void CreateFunctionRequestBody::unsetenableDynamicMemory()
{
    enableDynamicMemoryIsSet_ = false;
}

bool CreateFunctionRequestBody::isEnableLtsLog() const
{
    return enableLtsLog_;
}

void CreateFunctionRequestBody::setEnableLtsLog(bool value)
{
    enableLtsLog_ = value;
    enableLtsLogIsSet_ = true;
}

bool CreateFunctionRequestBody::enableLtsLogIsSet() const
{
    return enableLtsLogIsSet_;
}

void CreateFunctionRequestBody::unsetenableLtsLog()
{
    enableLtsLogIsSet_ = false;
}

std::map<std::string, std::string>& CreateFunctionRequestBody::getLtsCustomTag()
{
    return ltsCustomTag_;
}

void CreateFunctionRequestBody::setLtsCustomTag(const std::map<std::string, std::string>& value)
{
    ltsCustomTag_ = value;
    ltsCustomTagIsSet_ = true;
}

bool CreateFunctionRequestBody::ltsCustomTagIsSet() const
{
    return ltsCustomTagIsSet_;
}

void CreateFunctionRequestBody::unsetltsCustomTag()
{
    ltsCustomTagIsSet_ = false;
}

std::string CreateFunctionRequestBody::getUserDataEncryptKmsKeyId() const
{
    return userDataEncryptKmsKeyId_;
}

void CreateFunctionRequestBody::setUserDataEncryptKmsKeyId(const std::string& value)
{
    userDataEncryptKmsKeyId_ = value;
    userDataEncryptKmsKeyIdIsSet_ = true;
}

bool CreateFunctionRequestBody::userDataEncryptKmsKeyIdIsSet() const
{
    return userDataEncryptKmsKeyIdIsSet_;
}

void CreateFunctionRequestBody::unsetuserDataEncryptKmsKeyId()
{
    userDataEncryptKmsKeyIdIsSet_ = false;
}

std::string CreateFunctionRequestBody::getCodeEncryptKmsKeyId() const
{
    return codeEncryptKmsKeyId_;
}

void CreateFunctionRequestBody::setCodeEncryptKmsKeyId(const std::string& value)
{
    codeEncryptKmsKeyId_ = value;
    codeEncryptKmsKeyIdIsSet_ = true;
}

bool CreateFunctionRequestBody::codeEncryptKmsKeyIdIsSet() const
{
    return codeEncryptKmsKeyIdIsSet_;
}

void CreateFunctionRequestBody::unsetcodeEncryptKmsKeyId()
{
    codeEncryptKmsKeyIdIsSet_ = false;
}

std::string CreateFunctionRequestBody::getDomainNames() const
{
    return domainNames_;
}

void CreateFunctionRequestBody::setDomainNames(const std::string& value)
{
    domainNames_ = value;
    domainNamesIsSet_ = true;
}

bool CreateFunctionRequestBody::domainNamesIsSet() const
{
    return domainNamesIsSet_;
}

void CreateFunctionRequestBody::unsetdomainNames()
{
    domainNamesIsSet_ = false;
}

std::string CreateFunctionRequestBody::getTags() const
{
    return tags_;
}

void CreateFunctionRequestBody::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateFunctionRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateFunctionRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


