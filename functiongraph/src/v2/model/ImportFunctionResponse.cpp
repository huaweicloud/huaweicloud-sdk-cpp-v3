

#include "huaweicloud/functiongraph/v2/model/ImportFunctionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ImportFunctionResponse::ImportFunctionResponse()
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
    gpuMemory_ = 0;
    gpuMemoryIsSet_ = false;
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
    description_ = "";
    descriptionIsSet_ = false;
    versionDescription_ = "";
    versionDescriptionIsSet_ = false;
    lastModified_ = utility::datetime();
    lastModifiedIsSet_ = false;
    funcVpcIsSet_ = false;
    dependListIsSet_ = false;
    dependVersionListIsSet_ = false;
    strategyConfigIsSet_ = false;
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
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ImportFunctionResponse::~ImportFunctionResponse() = default;

void ImportFunctionResponse::validate()
{
}

web::json::value ImportFunctionResponse::toJson() const
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
    if(gpuMemoryIsSet_) {
        val[utility::conversions::to_string_t("gpu_memory")] = ModelBase::toJson(gpuMemory_);
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
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(versionDescriptionIsSet_) {
        val[utility::conversions::to_string_t("version_description")] = ModelBase::toJson(versionDescription_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }
    if(funcVpcIsSet_) {
        val[utility::conversions::to_string_t("func_vpc")] = ModelBase::toJson(funcVpc_);
    }
    if(dependListIsSet_) {
        val[utility::conversions::to_string_t("depend_list")] = ModelBase::toJson(dependList_);
    }
    if(dependVersionListIsSet_) {
        val[utility::conversions::to_string_t("depend_version_list")] = ModelBase::toJson(dependVersionList_);
    }
    if(strategyConfigIsSet_) {
        val[utility::conversions::to_string_t("strategy_config")] = ModelBase::toJson(strategyConfig_);
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
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool ImportFunctionResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("gpu_memory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpu_memory"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpuMemory(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("func_vpc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_vpc"));
        if(!fieldValue.is_null())
        {
            FuncVpc refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncVpc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("depend_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("depend_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDependList(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("strategy_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("strategy_config"));
        if(!fieldValue.is_null())
        {
            StrategyConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStrategyConfig(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


std::string ImportFunctionResponse::getFuncUrn() const
{
    return funcUrn_;
}

void ImportFunctionResponse::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool ImportFunctionResponse::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void ImportFunctionResponse::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

std::string ImportFunctionResponse::getFuncName() const
{
    return funcName_;
}

void ImportFunctionResponse::setFuncName(const std::string& value)
{
    funcName_ = value;
    funcNameIsSet_ = true;
}

bool ImportFunctionResponse::funcNameIsSet() const
{
    return funcNameIsSet_;
}

void ImportFunctionResponse::unsetfuncName()
{
    funcNameIsSet_ = false;
}

std::string ImportFunctionResponse::getDomainId() const
{
    return domainId_;
}

void ImportFunctionResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ImportFunctionResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ImportFunctionResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ImportFunctionResponse::getNamespace() const
{
    return namespace_;
}

void ImportFunctionResponse::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ImportFunctionResponse::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ImportFunctionResponse::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string ImportFunctionResponse::getProjectName() const
{
    return projectName_;
}

void ImportFunctionResponse::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ImportFunctionResponse::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ImportFunctionResponse::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string ImportFunctionResponse::getPackage() const
{
    return package_;
}

void ImportFunctionResponse::setPackage(const std::string& value)
{
    package_ = value;
    packageIsSet_ = true;
}

bool ImportFunctionResponse::packageIsSet() const
{
    return packageIsSet_;
}

void ImportFunctionResponse::unsetpackage()
{
    packageIsSet_ = false;
}

std::string ImportFunctionResponse::getRuntime() const
{
    return runtime_;
}

void ImportFunctionResponse::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool ImportFunctionResponse::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void ImportFunctionResponse::unsetruntime()
{
    runtimeIsSet_ = false;
}

int32_t ImportFunctionResponse::getTimeout() const
{
    return timeout_;
}

void ImportFunctionResponse::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool ImportFunctionResponse::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void ImportFunctionResponse::unsettimeout()
{
    timeoutIsSet_ = false;
}

std::string ImportFunctionResponse::getHandler() const
{
    return handler_;
}

void ImportFunctionResponse::setHandler(const std::string& value)
{
    handler_ = value;
    handlerIsSet_ = true;
}

bool ImportFunctionResponse::handlerIsSet() const
{
    return handlerIsSet_;
}

void ImportFunctionResponse::unsethandler()
{
    handlerIsSet_ = false;
}

int32_t ImportFunctionResponse::getMemorySize() const
{
    return memorySize_;
}

void ImportFunctionResponse::setMemorySize(int32_t value)
{
    memorySize_ = value;
    memorySizeIsSet_ = true;
}

bool ImportFunctionResponse::memorySizeIsSet() const
{
    return memorySizeIsSet_;
}

void ImportFunctionResponse::unsetmemorySize()
{
    memorySizeIsSet_ = false;
}

int32_t ImportFunctionResponse::getGpuMemory() const
{
    return gpuMemory_;
}

void ImportFunctionResponse::setGpuMemory(int32_t value)
{
    gpuMemory_ = value;
    gpuMemoryIsSet_ = true;
}

bool ImportFunctionResponse::gpuMemoryIsSet() const
{
    return gpuMemoryIsSet_;
}

void ImportFunctionResponse::unsetgpuMemory()
{
    gpuMemoryIsSet_ = false;
}

int32_t ImportFunctionResponse::getCpu() const
{
    return cpu_;
}

void ImportFunctionResponse::setCpu(int32_t value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool ImportFunctionResponse::cpuIsSet() const
{
    return cpuIsSet_;
}

void ImportFunctionResponse::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string ImportFunctionResponse::getCodeType() const
{
    return codeType_;
}

void ImportFunctionResponse::setCodeType(const std::string& value)
{
    codeType_ = value;
    codeTypeIsSet_ = true;
}

bool ImportFunctionResponse::codeTypeIsSet() const
{
    return codeTypeIsSet_;
}

void ImportFunctionResponse::unsetcodeType()
{
    codeTypeIsSet_ = false;
}

std::string ImportFunctionResponse::getCodeUrl() const
{
    return codeUrl_;
}

void ImportFunctionResponse::setCodeUrl(const std::string& value)
{
    codeUrl_ = value;
    codeUrlIsSet_ = true;
}

bool ImportFunctionResponse::codeUrlIsSet() const
{
    return codeUrlIsSet_;
}

void ImportFunctionResponse::unsetcodeUrl()
{
    codeUrlIsSet_ = false;
}

std::string ImportFunctionResponse::getCodeFilename() const
{
    return codeFilename_;
}

void ImportFunctionResponse::setCodeFilename(const std::string& value)
{
    codeFilename_ = value;
    codeFilenameIsSet_ = true;
}

bool ImportFunctionResponse::codeFilenameIsSet() const
{
    return codeFilenameIsSet_;
}

void ImportFunctionResponse::unsetcodeFilename()
{
    codeFilenameIsSet_ = false;
}

int64_t ImportFunctionResponse::getCodeSize() const
{
    return codeSize_;
}

void ImportFunctionResponse::setCodeSize(int64_t value)
{
    codeSize_ = value;
    codeSizeIsSet_ = true;
}

bool ImportFunctionResponse::codeSizeIsSet() const
{
    return codeSizeIsSet_;
}

void ImportFunctionResponse::unsetcodeSize()
{
    codeSizeIsSet_ = false;
}

std::string ImportFunctionResponse::getUserData() const
{
    return userData_;
}

void ImportFunctionResponse::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool ImportFunctionResponse::userDataIsSet() const
{
    return userDataIsSet_;
}

void ImportFunctionResponse::unsetuserData()
{
    userDataIsSet_ = false;
}

std::string ImportFunctionResponse::getDigest() const
{
    return digest_;
}

void ImportFunctionResponse::setDigest(const std::string& value)
{
    digest_ = value;
    digestIsSet_ = true;
}

bool ImportFunctionResponse::digestIsSet() const
{
    return digestIsSet_;
}

void ImportFunctionResponse::unsetdigest()
{
    digestIsSet_ = false;
}

std::string ImportFunctionResponse::getVersion() const
{
    return version_;
}

void ImportFunctionResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ImportFunctionResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ImportFunctionResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string ImportFunctionResponse::getImageName() const
{
    return imageName_;
}

void ImportFunctionResponse::setImageName(const std::string& value)
{
    imageName_ = value;
    imageNameIsSet_ = true;
}

bool ImportFunctionResponse::imageNameIsSet() const
{
    return imageNameIsSet_;
}

void ImportFunctionResponse::unsetimageName()
{
    imageNameIsSet_ = false;
}

std::string ImportFunctionResponse::getXrole() const
{
    return xrole_;
}

void ImportFunctionResponse::setXrole(const std::string& value)
{
    xrole_ = value;
    xroleIsSet_ = true;
}

bool ImportFunctionResponse::xroleIsSet() const
{
    return xroleIsSet_;
}

void ImportFunctionResponse::unsetxrole()
{
    xroleIsSet_ = false;
}

std::string ImportFunctionResponse::getAppXrole() const
{
    return appXrole_;
}

void ImportFunctionResponse::setAppXrole(const std::string& value)
{
    appXrole_ = value;
    appXroleIsSet_ = true;
}

bool ImportFunctionResponse::appXroleIsSet() const
{
    return appXroleIsSet_;
}

void ImportFunctionResponse::unsetappXrole()
{
    appXroleIsSet_ = false;
}

std::string ImportFunctionResponse::getDescription() const
{
    return description_;
}

void ImportFunctionResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ImportFunctionResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ImportFunctionResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ImportFunctionResponse::getVersionDescription() const
{
    return versionDescription_;
}

void ImportFunctionResponse::setVersionDescription(const std::string& value)
{
    versionDescription_ = value;
    versionDescriptionIsSet_ = true;
}

bool ImportFunctionResponse::versionDescriptionIsSet() const
{
    return versionDescriptionIsSet_;
}

void ImportFunctionResponse::unsetversionDescription()
{
    versionDescriptionIsSet_ = false;
}

utility::datetime ImportFunctionResponse::getLastModified() const
{
    return lastModified_;
}

void ImportFunctionResponse::setLastModified(const utility::datetime& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool ImportFunctionResponse::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void ImportFunctionResponse::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

FuncVpc ImportFunctionResponse::getFuncVpc() const
{
    return funcVpc_;
}

void ImportFunctionResponse::setFuncVpc(const FuncVpc& value)
{
    funcVpc_ = value;
    funcVpcIsSet_ = true;
}

bool ImportFunctionResponse::funcVpcIsSet() const
{
    return funcVpcIsSet_;
}

void ImportFunctionResponse::unsetfuncVpc()
{
    funcVpcIsSet_ = false;
}

std::vector<std::string>& ImportFunctionResponse::getDependList()
{
    return dependList_;
}

void ImportFunctionResponse::setDependList(const std::vector<std::string>& value)
{
    dependList_ = value;
    dependListIsSet_ = true;
}

bool ImportFunctionResponse::dependListIsSet() const
{
    return dependListIsSet_;
}

void ImportFunctionResponse::unsetdependList()
{
    dependListIsSet_ = false;
}

std::vector<std::string>& ImportFunctionResponse::getDependVersionList()
{
    return dependVersionList_;
}

void ImportFunctionResponse::setDependVersionList(const std::vector<std::string>& value)
{
    dependVersionList_ = value;
    dependVersionListIsSet_ = true;
}

bool ImportFunctionResponse::dependVersionListIsSet() const
{
    return dependVersionListIsSet_;
}

void ImportFunctionResponse::unsetdependVersionList()
{
    dependVersionListIsSet_ = false;
}

StrategyConfig ImportFunctionResponse::getStrategyConfig() const
{
    return strategyConfig_;
}

void ImportFunctionResponse::setStrategyConfig(const StrategyConfig& value)
{
    strategyConfig_ = value;
    strategyConfigIsSet_ = true;
}

bool ImportFunctionResponse::strategyConfigIsSet() const
{
    return strategyConfigIsSet_;
}

void ImportFunctionResponse::unsetstrategyConfig()
{
    strategyConfigIsSet_ = false;
}

std::string ImportFunctionResponse::getExtendConfig() const
{
    return extendConfig_;
}

void ImportFunctionResponse::setExtendConfig(const std::string& value)
{
    extendConfig_ = value;
    extendConfigIsSet_ = true;
}

bool ImportFunctionResponse::extendConfigIsSet() const
{
    return extendConfigIsSet_;
}

void ImportFunctionResponse::unsetextendConfig()
{
    extendConfigIsSet_ = false;
}

std::string ImportFunctionResponse::getInitializerHandler() const
{
    return initializerHandler_;
}

void ImportFunctionResponse::setInitializerHandler(const std::string& value)
{
    initializerHandler_ = value;
    initializerHandlerIsSet_ = true;
}

bool ImportFunctionResponse::initializerHandlerIsSet() const
{
    return initializerHandlerIsSet_;
}

void ImportFunctionResponse::unsetinitializerHandler()
{
    initializerHandlerIsSet_ = false;
}

int32_t ImportFunctionResponse::getInitializerTimeout() const
{
    return initializerTimeout_;
}

void ImportFunctionResponse::setInitializerTimeout(int32_t value)
{
    initializerTimeout_ = value;
    initializerTimeoutIsSet_ = true;
}

bool ImportFunctionResponse::initializerTimeoutIsSet() const
{
    return initializerTimeoutIsSet_;
}

void ImportFunctionResponse::unsetinitializerTimeout()
{
    initializerTimeoutIsSet_ = false;
}

std::string ImportFunctionResponse::getPreStopHandler() const
{
    return preStopHandler_;
}

void ImportFunctionResponse::setPreStopHandler(const std::string& value)
{
    preStopHandler_ = value;
    preStopHandlerIsSet_ = true;
}

bool ImportFunctionResponse::preStopHandlerIsSet() const
{
    return preStopHandlerIsSet_;
}

void ImportFunctionResponse::unsetpreStopHandler()
{
    preStopHandlerIsSet_ = false;
}

int32_t ImportFunctionResponse::getPreStopTimeout() const
{
    return preStopTimeout_;
}

void ImportFunctionResponse::setPreStopTimeout(int32_t value)
{
    preStopTimeout_ = value;
    preStopTimeoutIsSet_ = true;
}

bool ImportFunctionResponse::preStopTimeoutIsSet() const
{
    return preStopTimeoutIsSet_;
}

void ImportFunctionResponse::unsetpreStopTimeout()
{
    preStopTimeoutIsSet_ = false;
}

std::string ImportFunctionResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ImportFunctionResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ImportFunctionResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ImportFunctionResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


