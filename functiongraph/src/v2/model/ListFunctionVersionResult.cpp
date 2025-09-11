

#include "huaweicloud/functiongraph/v2/model/ListFunctionVersionResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionVersionResult::ListFunctionVersionResult()
{
    funcUrn_ = "";
    funcUrnIsSet_ = false;
    funcName_ = "";
    funcNameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    package_ = "";
    packageIsSet_ = false;
    runtime_ = "";
    runtimeIsSet_ = false;
    timeout_ = 0;
    timeoutIsSet_ = false;
    handler_ = "";
    handlerIsSet_ = false;
    memorySize_ = 0;
    memorySizeIsSet_ = false;
    cpu_ = 0;
    cpuIsSet_ = false;
    codeType_ = "";
    codeTypeIsSet_ = false;
    codeUrl_ = "";
    codeUrlIsSet_ = false;
    codeFilename_ = "";
    codeFilenameIsSet_ = false;
    codeSize_ = 0L;
    codeSizeIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
    encryptedUserData_ = "";
    encryptedUserDataIsSet_ = false;
    digest_ = "";
    digestIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    imageName_ = "";
    imageNameIsSet_ = false;
    xrole_ = "";
    xroleIsSet_ = false;
    appXrole_ = "";
    appXroleIsSet_ = false;
    lastModified_ = utility::datetime();
    lastModifiedIsSet_ = false;
    funcVpcId_ = "";
    funcVpcIdIsSet_ = false;
    concurrency_ = 0;
    concurrencyIsSet_ = false;
    concurrentNum_ = 0;
    concurrentNumIsSet_ = false;
    strategyConfigIsSet_ = false;
    initializerHandler_ = "";
    initializerHandlerIsSet_ = false;
    initializerTimeout_ = 0;
    initializerTimeoutIsSet_ = false;
    preStopHandler_ = "";
    preStopHandlerIsSet_ = false;
    preStopTimeout_ = 0;
    preStopTimeoutIsSet_ = false;
    longTime_ = false;
    longTimeIsSet_ = false;
    functionAsyncConfigIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    enableDynamicMemory_ = false;
    enableDynamicMemoryIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    isStatefulFunction_ = false;
    isStatefulFunctionIsSet_ = false;
    enableAuthInHeader_ = false;
    enableAuthInHeaderIsSet_ = false;
    customImageIsSet_ = false;
    reservedInstanceIdleMode_ = false;
    reservedInstanceIdleModeIsSet_ = false;
}

ListFunctionVersionResult::~ListFunctionVersionResult() = default;

void ListFunctionVersionResult::validate()
{
}

web::json::value ListFunctionVersionResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(funcUrnIsSet_) {
        val[utility::conversions::to_string_t("func_urn")] = ModelBase::toJson(funcUrn_);
    }
    if(funcNameIsSet_) {
        val[utility::conversions::to_string_t("func_name")] = ModelBase::toJson(funcName_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
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
    if(memorySizeIsSet_) {
        val[utility::conversions::to_string_t("memory_size")] = ModelBase::toJson(memorySize_);
    }
    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
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
    if(codeSizeIsSet_) {
        val[utility::conversions::to_string_t("code_size")] = ModelBase::toJson(codeSize_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }
    if(encryptedUserDataIsSet_) {
        val[utility::conversions::to_string_t("encrypted_user_data")] = ModelBase::toJson(encryptedUserData_);
    }
    if(digestIsSet_) {
        val[utility::conversions::to_string_t("digest")] = ModelBase::toJson(digest_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(imageNameIsSet_) {
        val[utility::conversions::to_string_t("image_name")] = ModelBase::toJson(imageName_);
    }
    if(xroleIsSet_) {
        val[utility::conversions::to_string_t("xrole")] = ModelBase::toJson(xrole_);
    }
    if(appXroleIsSet_) {
        val[utility::conversions::to_string_t("app_xrole")] = ModelBase::toJson(appXrole_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }
    if(funcVpcIdIsSet_) {
        val[utility::conversions::to_string_t("func_vpc_id")] = ModelBase::toJson(funcVpcId_);
    }
    if(concurrencyIsSet_) {
        val[utility::conversions::to_string_t("concurrency")] = ModelBase::toJson(concurrency_);
    }
    if(concurrentNumIsSet_) {
        val[utility::conversions::to_string_t("concurrent_num")] = ModelBase::toJson(concurrentNum_);
    }
    if(strategyConfigIsSet_) {
        val[utility::conversions::to_string_t("strategy_config")] = ModelBase::toJson(strategyConfig_);
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
    if(longTimeIsSet_) {
        val[utility::conversions::to_string_t("long_time")] = ModelBase::toJson(longTime_);
    }
    if(functionAsyncConfigIsSet_) {
        val[utility::conversions::to_string_t("function_async_config")] = ModelBase::toJson(functionAsyncConfig_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(enableDynamicMemoryIsSet_) {
        val[utility::conversions::to_string_t("enable_dynamic_memory")] = ModelBase::toJson(enableDynamicMemory_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(isStatefulFunctionIsSet_) {
        val[utility::conversions::to_string_t("is_stateful_function")] = ModelBase::toJson(isStatefulFunction_);
    }
    if(enableAuthInHeaderIsSet_) {
        val[utility::conversions::to_string_t("enable_auth_in_header")] = ModelBase::toJson(enableAuthInHeader_);
    }
    if(customImageIsSet_) {
        val[utility::conversions::to_string_t("custom_image")] = ModelBase::toJson(customImage_);
    }
    if(reservedInstanceIdleModeIsSet_) {
        val[utility::conversions::to_string_t("reserved_instance_idle_mode")] = ModelBase::toJson(reservedInstanceIdleMode_);
    }

    return val;
}
bool ListFunctionVersionResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("func_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("func_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("memory_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memory_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemorySize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpu(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("code_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("digest"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("digest"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDigest(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("last_modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModified(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("func_vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("concurrency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("concurrency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConcurrency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("concurrent_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("concurrent_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConcurrentNum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("long_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("long_time"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLongTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("function_async_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("function_async_config"));
        if(!fieldValue.is_null())
        {
            FunctionAsyncConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctionAsyncConfig(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enable_dynamic_memory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_dynamic_memory"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableDynamicMemory(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_stateful_function"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_stateful_function"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsStatefulFunction(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("custom_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_image"));
        if(!fieldValue.is_null())
        {
            CustomImage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reserved_instance_idle_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reserved_instance_idle_mode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReservedInstanceIdleMode(refVal);
        }
    }
    return ok;
}


std::string ListFunctionVersionResult::getFuncUrn() const
{
    return funcUrn_;
}

void ListFunctionVersionResult::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool ListFunctionVersionResult::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void ListFunctionVersionResult::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

std::string ListFunctionVersionResult::getFuncName() const
{
    return funcName_;
}

void ListFunctionVersionResult::setFuncName(const std::string& value)
{
    funcName_ = value;
    funcNameIsSet_ = true;
}

bool ListFunctionVersionResult::funcNameIsSet() const
{
    return funcNameIsSet_;
}

void ListFunctionVersionResult::unsetfuncName()
{
    funcNameIsSet_ = false;
}

std::string ListFunctionVersionResult::getDomainId() const
{
    return domainId_;
}

void ListFunctionVersionResult::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListFunctionVersionResult::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListFunctionVersionResult::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ListFunctionVersionResult::getNamespace() const
{
    return namespace_;
}

void ListFunctionVersionResult::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ListFunctionVersionResult::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ListFunctionVersionResult::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string ListFunctionVersionResult::getProjectName() const
{
    return projectName_;
}

void ListFunctionVersionResult::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ListFunctionVersionResult::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ListFunctionVersionResult::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string ListFunctionVersionResult::getPackage() const
{
    return package_;
}

void ListFunctionVersionResult::setPackage(const std::string& value)
{
    package_ = value;
    packageIsSet_ = true;
}

bool ListFunctionVersionResult::packageIsSet() const
{
    return packageIsSet_;
}

void ListFunctionVersionResult::unsetpackage()
{
    packageIsSet_ = false;
}

std::string ListFunctionVersionResult::getRuntime() const
{
    return runtime_;
}

void ListFunctionVersionResult::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool ListFunctionVersionResult::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void ListFunctionVersionResult::unsetruntime()
{
    runtimeIsSet_ = false;
}

int32_t ListFunctionVersionResult::getTimeout() const
{
    return timeout_;
}

void ListFunctionVersionResult::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool ListFunctionVersionResult::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void ListFunctionVersionResult::unsettimeout()
{
    timeoutIsSet_ = false;
}

std::string ListFunctionVersionResult::getHandler() const
{
    return handler_;
}

void ListFunctionVersionResult::setHandler(const std::string& value)
{
    handler_ = value;
    handlerIsSet_ = true;
}

bool ListFunctionVersionResult::handlerIsSet() const
{
    return handlerIsSet_;
}

void ListFunctionVersionResult::unsethandler()
{
    handlerIsSet_ = false;
}

int32_t ListFunctionVersionResult::getMemorySize() const
{
    return memorySize_;
}

void ListFunctionVersionResult::setMemorySize(int32_t value)
{
    memorySize_ = value;
    memorySizeIsSet_ = true;
}

bool ListFunctionVersionResult::memorySizeIsSet() const
{
    return memorySizeIsSet_;
}

void ListFunctionVersionResult::unsetmemorySize()
{
    memorySizeIsSet_ = false;
}

int32_t ListFunctionVersionResult::getCpu() const
{
    return cpu_;
}

void ListFunctionVersionResult::setCpu(int32_t value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool ListFunctionVersionResult::cpuIsSet() const
{
    return cpuIsSet_;
}

void ListFunctionVersionResult::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string ListFunctionVersionResult::getCodeType() const
{
    return codeType_;
}

void ListFunctionVersionResult::setCodeType(const std::string& value)
{
    codeType_ = value;
    codeTypeIsSet_ = true;
}

bool ListFunctionVersionResult::codeTypeIsSet() const
{
    return codeTypeIsSet_;
}

void ListFunctionVersionResult::unsetcodeType()
{
    codeTypeIsSet_ = false;
}

std::string ListFunctionVersionResult::getCodeUrl() const
{
    return codeUrl_;
}

void ListFunctionVersionResult::setCodeUrl(const std::string& value)
{
    codeUrl_ = value;
    codeUrlIsSet_ = true;
}

bool ListFunctionVersionResult::codeUrlIsSet() const
{
    return codeUrlIsSet_;
}

void ListFunctionVersionResult::unsetcodeUrl()
{
    codeUrlIsSet_ = false;
}

std::string ListFunctionVersionResult::getCodeFilename() const
{
    return codeFilename_;
}

void ListFunctionVersionResult::setCodeFilename(const std::string& value)
{
    codeFilename_ = value;
    codeFilenameIsSet_ = true;
}

bool ListFunctionVersionResult::codeFilenameIsSet() const
{
    return codeFilenameIsSet_;
}

void ListFunctionVersionResult::unsetcodeFilename()
{
    codeFilenameIsSet_ = false;
}

int64_t ListFunctionVersionResult::getCodeSize() const
{
    return codeSize_;
}

void ListFunctionVersionResult::setCodeSize(int64_t value)
{
    codeSize_ = value;
    codeSizeIsSet_ = true;
}

bool ListFunctionVersionResult::codeSizeIsSet() const
{
    return codeSizeIsSet_;
}

void ListFunctionVersionResult::unsetcodeSize()
{
    codeSizeIsSet_ = false;
}

std::string ListFunctionVersionResult::getUserData() const
{
    return userData_;
}

void ListFunctionVersionResult::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool ListFunctionVersionResult::userDataIsSet() const
{
    return userDataIsSet_;
}

void ListFunctionVersionResult::unsetuserData()
{
    userDataIsSet_ = false;
}

std::string ListFunctionVersionResult::getEncryptedUserData() const
{
    return encryptedUserData_;
}

void ListFunctionVersionResult::setEncryptedUserData(const std::string& value)
{
    encryptedUserData_ = value;
    encryptedUserDataIsSet_ = true;
}

bool ListFunctionVersionResult::encryptedUserDataIsSet() const
{
    return encryptedUserDataIsSet_;
}

void ListFunctionVersionResult::unsetencryptedUserData()
{
    encryptedUserDataIsSet_ = false;
}

std::string ListFunctionVersionResult::getDigest() const
{
    return digest_;
}

void ListFunctionVersionResult::setDigest(const std::string& value)
{
    digest_ = value;
    digestIsSet_ = true;
}

bool ListFunctionVersionResult::digestIsSet() const
{
    return digestIsSet_;
}

void ListFunctionVersionResult::unsetdigest()
{
    digestIsSet_ = false;
}

std::string ListFunctionVersionResult::getVersion() const
{
    return version_;
}

void ListFunctionVersionResult::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListFunctionVersionResult::versionIsSet() const
{
    return versionIsSet_;
}

void ListFunctionVersionResult::unsetversion()
{
    versionIsSet_ = false;
}

std::string ListFunctionVersionResult::getImageName() const
{
    return imageName_;
}

void ListFunctionVersionResult::setImageName(const std::string& value)
{
    imageName_ = value;
    imageNameIsSet_ = true;
}

bool ListFunctionVersionResult::imageNameIsSet() const
{
    return imageNameIsSet_;
}

void ListFunctionVersionResult::unsetimageName()
{
    imageNameIsSet_ = false;
}

std::string ListFunctionVersionResult::getXrole() const
{
    return xrole_;
}

void ListFunctionVersionResult::setXrole(const std::string& value)
{
    xrole_ = value;
    xroleIsSet_ = true;
}

bool ListFunctionVersionResult::xroleIsSet() const
{
    return xroleIsSet_;
}

void ListFunctionVersionResult::unsetxrole()
{
    xroleIsSet_ = false;
}

std::string ListFunctionVersionResult::getAppXrole() const
{
    return appXrole_;
}

void ListFunctionVersionResult::setAppXrole(const std::string& value)
{
    appXrole_ = value;
    appXroleIsSet_ = true;
}

bool ListFunctionVersionResult::appXroleIsSet() const
{
    return appXroleIsSet_;
}

void ListFunctionVersionResult::unsetappXrole()
{
    appXroleIsSet_ = false;
}

utility::datetime ListFunctionVersionResult::getLastModified() const
{
    return lastModified_;
}

void ListFunctionVersionResult::setLastModified(const utility::datetime& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool ListFunctionVersionResult::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void ListFunctionVersionResult::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

std::string ListFunctionVersionResult::getFuncVpcId() const
{
    return funcVpcId_;
}

void ListFunctionVersionResult::setFuncVpcId(const std::string& value)
{
    funcVpcId_ = value;
    funcVpcIdIsSet_ = true;
}

bool ListFunctionVersionResult::funcVpcIdIsSet() const
{
    return funcVpcIdIsSet_;
}

void ListFunctionVersionResult::unsetfuncVpcId()
{
    funcVpcIdIsSet_ = false;
}

int32_t ListFunctionVersionResult::getConcurrency() const
{
    return concurrency_;
}

void ListFunctionVersionResult::setConcurrency(int32_t value)
{
    concurrency_ = value;
    concurrencyIsSet_ = true;
}

bool ListFunctionVersionResult::concurrencyIsSet() const
{
    return concurrencyIsSet_;
}

void ListFunctionVersionResult::unsetconcurrency()
{
    concurrencyIsSet_ = false;
}

int32_t ListFunctionVersionResult::getConcurrentNum() const
{
    return concurrentNum_;
}

void ListFunctionVersionResult::setConcurrentNum(int32_t value)
{
    concurrentNum_ = value;
    concurrentNumIsSet_ = true;
}

bool ListFunctionVersionResult::concurrentNumIsSet() const
{
    return concurrentNumIsSet_;
}

void ListFunctionVersionResult::unsetconcurrentNum()
{
    concurrentNumIsSet_ = false;
}

StrategyConfig ListFunctionVersionResult::getStrategyConfig() const
{
    return strategyConfig_;
}

void ListFunctionVersionResult::setStrategyConfig(const StrategyConfig& value)
{
    strategyConfig_ = value;
    strategyConfigIsSet_ = true;
}

bool ListFunctionVersionResult::strategyConfigIsSet() const
{
    return strategyConfigIsSet_;
}

void ListFunctionVersionResult::unsetstrategyConfig()
{
    strategyConfigIsSet_ = false;
}

std::string ListFunctionVersionResult::getInitializerHandler() const
{
    return initializerHandler_;
}

void ListFunctionVersionResult::setInitializerHandler(const std::string& value)
{
    initializerHandler_ = value;
    initializerHandlerIsSet_ = true;
}

bool ListFunctionVersionResult::initializerHandlerIsSet() const
{
    return initializerHandlerIsSet_;
}

void ListFunctionVersionResult::unsetinitializerHandler()
{
    initializerHandlerIsSet_ = false;
}

int32_t ListFunctionVersionResult::getInitializerTimeout() const
{
    return initializerTimeout_;
}

void ListFunctionVersionResult::setInitializerTimeout(int32_t value)
{
    initializerTimeout_ = value;
    initializerTimeoutIsSet_ = true;
}

bool ListFunctionVersionResult::initializerTimeoutIsSet() const
{
    return initializerTimeoutIsSet_;
}

void ListFunctionVersionResult::unsetinitializerTimeout()
{
    initializerTimeoutIsSet_ = false;
}

std::string ListFunctionVersionResult::getPreStopHandler() const
{
    return preStopHandler_;
}

void ListFunctionVersionResult::setPreStopHandler(const std::string& value)
{
    preStopHandler_ = value;
    preStopHandlerIsSet_ = true;
}

bool ListFunctionVersionResult::preStopHandlerIsSet() const
{
    return preStopHandlerIsSet_;
}

void ListFunctionVersionResult::unsetpreStopHandler()
{
    preStopHandlerIsSet_ = false;
}

int32_t ListFunctionVersionResult::getPreStopTimeout() const
{
    return preStopTimeout_;
}

void ListFunctionVersionResult::setPreStopTimeout(int32_t value)
{
    preStopTimeout_ = value;
    preStopTimeoutIsSet_ = true;
}

bool ListFunctionVersionResult::preStopTimeoutIsSet() const
{
    return preStopTimeoutIsSet_;
}

void ListFunctionVersionResult::unsetpreStopTimeout()
{
    preStopTimeoutIsSet_ = false;
}

bool ListFunctionVersionResult::isLongTime() const
{
    return longTime_;
}

void ListFunctionVersionResult::setLongTime(bool value)
{
    longTime_ = value;
    longTimeIsSet_ = true;
}

bool ListFunctionVersionResult::longTimeIsSet() const
{
    return longTimeIsSet_;
}

void ListFunctionVersionResult::unsetlongTime()
{
    longTimeIsSet_ = false;
}

FunctionAsyncConfig ListFunctionVersionResult::getFunctionAsyncConfig() const
{
    return functionAsyncConfig_;
}

void ListFunctionVersionResult::setFunctionAsyncConfig(const FunctionAsyncConfig& value)
{
    functionAsyncConfig_ = value;
    functionAsyncConfigIsSet_ = true;
}

bool ListFunctionVersionResult::functionAsyncConfigIsSet() const
{
    return functionAsyncConfigIsSet_;
}

void ListFunctionVersionResult::unsetfunctionAsyncConfig()
{
    functionAsyncConfigIsSet_ = false;
}

std::string ListFunctionVersionResult::getType() const
{
    return type_;
}

void ListFunctionVersionResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListFunctionVersionResult::typeIsSet() const
{
    return typeIsSet_;
}

void ListFunctionVersionResult::unsettype()
{
    typeIsSet_ = false;
}

bool ListFunctionVersionResult::isEnableDynamicMemory() const
{
    return enableDynamicMemory_;
}

void ListFunctionVersionResult::setEnableDynamicMemory(bool value)
{
    enableDynamicMemory_ = value;
    enableDynamicMemoryIsSet_ = true;
}

bool ListFunctionVersionResult::enableDynamicMemoryIsSet() const
{
    return enableDynamicMemoryIsSet_;
}

void ListFunctionVersionResult::unsetenableDynamicMemory()
{
    enableDynamicMemoryIsSet_ = false;
}

std::string ListFunctionVersionResult::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListFunctionVersionResult::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListFunctionVersionResult::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListFunctionVersionResult::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool ListFunctionVersionResult::isIsStatefulFunction() const
{
    return isStatefulFunction_;
}

void ListFunctionVersionResult::setIsStatefulFunction(bool value)
{
    isStatefulFunction_ = value;
    isStatefulFunctionIsSet_ = true;
}

bool ListFunctionVersionResult::isStatefulFunctionIsSet() const
{
    return isStatefulFunctionIsSet_;
}

void ListFunctionVersionResult::unsetisStatefulFunction()
{
    isStatefulFunctionIsSet_ = false;
}

bool ListFunctionVersionResult::isEnableAuthInHeader() const
{
    return enableAuthInHeader_;
}

void ListFunctionVersionResult::setEnableAuthInHeader(bool value)
{
    enableAuthInHeader_ = value;
    enableAuthInHeaderIsSet_ = true;
}

bool ListFunctionVersionResult::enableAuthInHeaderIsSet() const
{
    return enableAuthInHeaderIsSet_;
}

void ListFunctionVersionResult::unsetenableAuthInHeader()
{
    enableAuthInHeaderIsSet_ = false;
}

CustomImage ListFunctionVersionResult::getCustomImage() const
{
    return customImage_;
}

void ListFunctionVersionResult::setCustomImage(const CustomImage& value)
{
    customImage_ = value;
    customImageIsSet_ = true;
}

bool ListFunctionVersionResult::customImageIsSet() const
{
    return customImageIsSet_;
}

void ListFunctionVersionResult::unsetcustomImage()
{
    customImageIsSet_ = false;
}

bool ListFunctionVersionResult::isReservedInstanceIdleMode() const
{
    return reservedInstanceIdleMode_;
}

void ListFunctionVersionResult::setReservedInstanceIdleMode(bool value)
{
    reservedInstanceIdleMode_ = value;
    reservedInstanceIdleModeIsSet_ = true;
}

bool ListFunctionVersionResult::reservedInstanceIdleModeIsSet() const
{
    return reservedInstanceIdleModeIsSet_;
}

void ListFunctionVersionResult::unsetreservedInstanceIdleMode()
{
    reservedInstanceIdleModeIsSet_ = false;
}

}
}
}
}
}


