

#include "huaweicloud/functiongraph/v2/model/UpdateFunctionCodeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateFunctionCodeRequestBody::UpdateFunctionCodeRequestBody()
{
    codeType_ = "";
    codeTypeIsSet_ = false;
    codeUrl_ = "";
    codeUrlIsSet_ = false;
    codeFilename_ = "";
    codeFilenameIsSet_ = false;
    funcCodeIsSet_ = false;
    dependVersionListIsSet_ = false;
    codeEncryptKmsKeyId_ = "";
    codeEncryptKmsKeyIdIsSet_ = false;
}

UpdateFunctionCodeRequestBody::~UpdateFunctionCodeRequestBody() = default;

void UpdateFunctionCodeRequestBody::validate()
{
}

web::json::value UpdateFunctionCodeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeTypeIsSet_) {
        val[utility::conversions::to_string_t("code_type")] = ModelBase::toJson(codeType_);
    }
    if(codeUrlIsSet_) {
        val[utility::conversions::to_string_t("code_url")] = ModelBase::toJson(codeUrl_);
    }
    if(codeFilenameIsSet_) {
        val[utility::conversions::to_string_t("code_filename")] = ModelBase::toJson(codeFilename_);
    }
    if(funcCodeIsSet_) {
        val[utility::conversions::to_string_t("func_code")] = ModelBase::toJson(funcCode_);
    }
    if(dependVersionListIsSet_) {
        val[utility::conversions::to_string_t("depend_version_list")] = ModelBase::toJson(dependVersionList_);
    }
    if(codeEncryptKmsKeyIdIsSet_) {
        val[utility::conversions::to_string_t("code_encrypt_kms_key_id")] = ModelBase::toJson(codeEncryptKmsKeyId_);
    }

    return val;
}
bool UpdateFunctionCodeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("func_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_code"));
        if(!fieldValue.is_null())
        {
            FuncCode refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncCode(refVal);
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


std::string UpdateFunctionCodeRequestBody::getCodeType() const
{
    return codeType_;
}

void UpdateFunctionCodeRequestBody::setCodeType(const std::string& value)
{
    codeType_ = value;
    codeTypeIsSet_ = true;
}

bool UpdateFunctionCodeRequestBody::codeTypeIsSet() const
{
    return codeTypeIsSet_;
}

void UpdateFunctionCodeRequestBody::unsetcodeType()
{
    codeTypeIsSet_ = false;
}

std::string UpdateFunctionCodeRequestBody::getCodeUrl() const
{
    return codeUrl_;
}

void UpdateFunctionCodeRequestBody::setCodeUrl(const std::string& value)
{
    codeUrl_ = value;
    codeUrlIsSet_ = true;
}

bool UpdateFunctionCodeRequestBody::codeUrlIsSet() const
{
    return codeUrlIsSet_;
}

void UpdateFunctionCodeRequestBody::unsetcodeUrl()
{
    codeUrlIsSet_ = false;
}

std::string UpdateFunctionCodeRequestBody::getCodeFilename() const
{
    return codeFilename_;
}

void UpdateFunctionCodeRequestBody::setCodeFilename(const std::string& value)
{
    codeFilename_ = value;
    codeFilenameIsSet_ = true;
}

bool UpdateFunctionCodeRequestBody::codeFilenameIsSet() const
{
    return codeFilenameIsSet_;
}

void UpdateFunctionCodeRequestBody::unsetcodeFilename()
{
    codeFilenameIsSet_ = false;
}

FuncCode UpdateFunctionCodeRequestBody::getFuncCode() const
{
    return funcCode_;
}

void UpdateFunctionCodeRequestBody::setFuncCode(const FuncCode& value)
{
    funcCode_ = value;
    funcCodeIsSet_ = true;
}

bool UpdateFunctionCodeRequestBody::funcCodeIsSet() const
{
    return funcCodeIsSet_;
}

void UpdateFunctionCodeRequestBody::unsetfuncCode()
{
    funcCodeIsSet_ = false;
}

std::vector<std::string>& UpdateFunctionCodeRequestBody::getDependVersionList()
{
    return dependVersionList_;
}

void UpdateFunctionCodeRequestBody::setDependVersionList(const std::vector<std::string>& value)
{
    dependVersionList_ = value;
    dependVersionListIsSet_ = true;
}

bool UpdateFunctionCodeRequestBody::dependVersionListIsSet() const
{
    return dependVersionListIsSet_;
}

void UpdateFunctionCodeRequestBody::unsetdependVersionList()
{
    dependVersionListIsSet_ = false;
}

std::string UpdateFunctionCodeRequestBody::getCodeEncryptKmsKeyId() const
{
    return codeEncryptKmsKeyId_;
}

void UpdateFunctionCodeRequestBody::setCodeEncryptKmsKeyId(const std::string& value)
{
    codeEncryptKmsKeyId_ = value;
    codeEncryptKmsKeyIdIsSet_ = true;
}

bool UpdateFunctionCodeRequestBody::codeEncryptKmsKeyIdIsSet() const
{
    return codeEncryptKmsKeyIdIsSet_;
}

void UpdateFunctionCodeRequestBody::unsetcodeEncryptKmsKeyId()
{
    codeEncryptKmsKeyIdIsSet_ = false;
}

}
}
}
}
}


