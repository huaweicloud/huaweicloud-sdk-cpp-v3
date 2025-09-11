

#include "huaweicloud/functiongraph/v2/model/UpdateFunctionCodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateFunctionCodeResponse::UpdateFunctionCodeResponse()
{
    funcUrn_ = "";
    funcUrnIsSet_ = false;
    funcName_ = "";
    funcNameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    runtime_ = "";
    runtimeIsSet_ = false;
    codeType_ = "";
    codeTypeIsSet_ = false;
    codeUrl_ = "";
    codeUrlIsSet_ = false;
    codeFilename_ = "";
    codeFilenameIsSet_ = false;
    codeSize_ = 0L;
    codeSizeIsSet_ = false;
    digest_ = "";
    digestIsSet_ = false;
    lastModified_ = utility::datetime();
    lastModifiedIsSet_ = false;
    funcCodeIsSet_ = false;
    dependListIsSet_ = false;
    dependVersionListIsSet_ = false;
    strategyConfigIsSet_ = false;
    dependenciesIsSet_ = false;
    codeEncryptKmsKeyId_ = "";
    codeEncryptKmsKeyIdIsSet_ = false;
}

UpdateFunctionCodeResponse::~UpdateFunctionCodeResponse() = default;

void UpdateFunctionCodeResponse::validate()
{
}

web::json::value UpdateFunctionCodeResponse::toJson() const
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
    if(runtimeIsSet_) {
        val[utility::conversions::to_string_t("runtime")] = ModelBase::toJson(runtime_);
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
    if(digestIsSet_) {
        val[utility::conversions::to_string_t("digest")] = ModelBase::toJson(digest_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }
    if(funcCodeIsSet_) {
        val[utility::conversions::to_string_t("func_code")] = ModelBase::toJson(funcCode_);
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
    if(dependenciesIsSet_) {
        val[utility::conversions::to_string_t("dependencies")] = ModelBase::toJson(dependencies_);
    }
    if(codeEncryptKmsKeyIdIsSet_) {
        val[utility::conversions::to_string_t("code_encrypt_kms_key_id")] = ModelBase::toJson(codeEncryptKmsKeyId_);
    }

    return val;
}
bool UpdateFunctionCodeResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("runtime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("digest"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("digest"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDigest(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("func_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_code"));
        if(!fieldValue.is_null())
        {
            FuncCode refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dependencies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dependencies"));
        if(!fieldValue.is_null())
        {
            std::vector<Dependency> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDependencies(refVal);
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
    return ok;
}


std::string UpdateFunctionCodeResponse::getFuncUrn() const
{
    return funcUrn_;
}

void UpdateFunctionCodeResponse::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool UpdateFunctionCodeResponse::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void UpdateFunctionCodeResponse::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

std::string UpdateFunctionCodeResponse::getFuncName() const
{
    return funcName_;
}

void UpdateFunctionCodeResponse::setFuncName(const std::string& value)
{
    funcName_ = value;
    funcNameIsSet_ = true;
}

bool UpdateFunctionCodeResponse::funcNameIsSet() const
{
    return funcNameIsSet_;
}

void UpdateFunctionCodeResponse::unsetfuncName()
{
    funcNameIsSet_ = false;
}

std::string UpdateFunctionCodeResponse::getDomainId() const
{
    return domainId_;
}

void UpdateFunctionCodeResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateFunctionCodeResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateFunctionCodeResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string UpdateFunctionCodeResponse::getRuntime() const
{
    return runtime_;
}

void UpdateFunctionCodeResponse::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool UpdateFunctionCodeResponse::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void UpdateFunctionCodeResponse::unsetruntime()
{
    runtimeIsSet_ = false;
}

std::string UpdateFunctionCodeResponse::getCodeType() const
{
    return codeType_;
}

void UpdateFunctionCodeResponse::setCodeType(const std::string& value)
{
    codeType_ = value;
    codeTypeIsSet_ = true;
}

bool UpdateFunctionCodeResponse::codeTypeIsSet() const
{
    return codeTypeIsSet_;
}

void UpdateFunctionCodeResponse::unsetcodeType()
{
    codeTypeIsSet_ = false;
}

std::string UpdateFunctionCodeResponse::getCodeUrl() const
{
    return codeUrl_;
}

void UpdateFunctionCodeResponse::setCodeUrl(const std::string& value)
{
    codeUrl_ = value;
    codeUrlIsSet_ = true;
}

bool UpdateFunctionCodeResponse::codeUrlIsSet() const
{
    return codeUrlIsSet_;
}

void UpdateFunctionCodeResponse::unsetcodeUrl()
{
    codeUrlIsSet_ = false;
}

std::string UpdateFunctionCodeResponse::getCodeFilename() const
{
    return codeFilename_;
}

void UpdateFunctionCodeResponse::setCodeFilename(const std::string& value)
{
    codeFilename_ = value;
    codeFilenameIsSet_ = true;
}

bool UpdateFunctionCodeResponse::codeFilenameIsSet() const
{
    return codeFilenameIsSet_;
}

void UpdateFunctionCodeResponse::unsetcodeFilename()
{
    codeFilenameIsSet_ = false;
}

int64_t UpdateFunctionCodeResponse::getCodeSize() const
{
    return codeSize_;
}

void UpdateFunctionCodeResponse::setCodeSize(int64_t value)
{
    codeSize_ = value;
    codeSizeIsSet_ = true;
}

bool UpdateFunctionCodeResponse::codeSizeIsSet() const
{
    return codeSizeIsSet_;
}

void UpdateFunctionCodeResponse::unsetcodeSize()
{
    codeSizeIsSet_ = false;
}

std::string UpdateFunctionCodeResponse::getDigest() const
{
    return digest_;
}

void UpdateFunctionCodeResponse::setDigest(const std::string& value)
{
    digest_ = value;
    digestIsSet_ = true;
}

bool UpdateFunctionCodeResponse::digestIsSet() const
{
    return digestIsSet_;
}

void UpdateFunctionCodeResponse::unsetdigest()
{
    digestIsSet_ = false;
}

utility::datetime UpdateFunctionCodeResponse::getLastModified() const
{
    return lastModified_;
}

void UpdateFunctionCodeResponse::setLastModified(const utility::datetime& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool UpdateFunctionCodeResponse::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void UpdateFunctionCodeResponse::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

FuncCode UpdateFunctionCodeResponse::getFuncCode() const
{
    return funcCode_;
}

void UpdateFunctionCodeResponse::setFuncCode(const FuncCode& value)
{
    funcCode_ = value;
    funcCodeIsSet_ = true;
}

bool UpdateFunctionCodeResponse::funcCodeIsSet() const
{
    return funcCodeIsSet_;
}

void UpdateFunctionCodeResponse::unsetfuncCode()
{
    funcCodeIsSet_ = false;
}

std::vector<std::string>& UpdateFunctionCodeResponse::getDependList()
{
    return dependList_;
}

void UpdateFunctionCodeResponse::setDependList(const std::vector<std::string>& value)
{
    dependList_ = value;
    dependListIsSet_ = true;
}

bool UpdateFunctionCodeResponse::dependListIsSet() const
{
    return dependListIsSet_;
}

void UpdateFunctionCodeResponse::unsetdependList()
{
    dependListIsSet_ = false;
}

std::vector<std::string>& UpdateFunctionCodeResponse::getDependVersionList()
{
    return dependVersionList_;
}

void UpdateFunctionCodeResponse::setDependVersionList(const std::vector<std::string>& value)
{
    dependVersionList_ = value;
    dependVersionListIsSet_ = true;
}

bool UpdateFunctionCodeResponse::dependVersionListIsSet() const
{
    return dependVersionListIsSet_;
}

void UpdateFunctionCodeResponse::unsetdependVersionList()
{
    dependVersionListIsSet_ = false;
}

StrategyConfig UpdateFunctionCodeResponse::getStrategyConfig() const
{
    return strategyConfig_;
}

void UpdateFunctionCodeResponse::setStrategyConfig(const StrategyConfig& value)
{
    strategyConfig_ = value;
    strategyConfigIsSet_ = true;
}

bool UpdateFunctionCodeResponse::strategyConfigIsSet() const
{
    return strategyConfigIsSet_;
}

void UpdateFunctionCodeResponse::unsetstrategyConfig()
{
    strategyConfigIsSet_ = false;
}

std::vector<Dependency>& UpdateFunctionCodeResponse::getDependencies()
{
    return dependencies_;
}

void UpdateFunctionCodeResponse::setDependencies(const std::vector<Dependency>& value)
{
    dependencies_ = value;
    dependenciesIsSet_ = true;
}

bool UpdateFunctionCodeResponse::dependenciesIsSet() const
{
    return dependenciesIsSet_;
}

void UpdateFunctionCodeResponse::unsetdependencies()
{
    dependenciesIsSet_ = false;
}

std::string UpdateFunctionCodeResponse::getCodeEncryptKmsKeyId() const
{
    return codeEncryptKmsKeyId_;
}

void UpdateFunctionCodeResponse::setCodeEncryptKmsKeyId(const std::string& value)
{
    codeEncryptKmsKeyId_ = value;
    codeEncryptKmsKeyIdIsSet_ = true;
}

bool UpdateFunctionCodeResponse::codeEncryptKmsKeyIdIsSet() const
{
    return codeEncryptKmsKeyIdIsSet_;
}

void UpdateFunctionCodeResponse::unsetcodeEncryptKmsKeyId()
{
    codeEncryptKmsKeyIdIsSet_ = false;
}

}
}
}
}
}


