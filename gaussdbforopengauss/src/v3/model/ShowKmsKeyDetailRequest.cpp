

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowKmsKeyDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowKmsKeyDetailRequest::ShowKmsKeyDetailRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    kmsKeyId_ = "";
    kmsKeyIdIsSet_ = false;
    kmsProjectName_ = "";
    kmsProjectNameIsSet_ = false;
}

ShowKmsKeyDetailRequest::~ShowKmsKeyDetailRequest() = default;

void ShowKmsKeyDetailRequest::validate()
{
}

web::json::value ShowKmsKeyDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(kmsKeyIdIsSet_) {
        val[utility::conversions::to_string_t("kms_key_id")] = ModelBase::toJson(kmsKeyId_);
    }
    if(kmsProjectNameIsSet_) {
        val[utility::conversions::to_string_t("kms_project_name")] = ModelBase::toJson(kmsProjectName_);
    }

    return val;
}
bool ShowKmsKeyDetailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kms_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kms_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKmsKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kms_project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kms_project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKmsProjectName(refVal);
        }
    }
    return ok;
}


std::string ShowKmsKeyDetailRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowKmsKeyDetailRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowKmsKeyDetailRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowKmsKeyDetailRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowKmsKeyDetailRequest::getKmsKeyId() const
{
    return kmsKeyId_;
}

void ShowKmsKeyDetailRequest::setKmsKeyId(const std::string& value)
{
    kmsKeyId_ = value;
    kmsKeyIdIsSet_ = true;
}

bool ShowKmsKeyDetailRequest::kmsKeyIdIsSet() const
{
    return kmsKeyIdIsSet_;
}

void ShowKmsKeyDetailRequest::unsetkmsKeyId()
{
    kmsKeyIdIsSet_ = false;
}

std::string ShowKmsKeyDetailRequest::getKmsProjectName() const
{
    return kmsProjectName_;
}

void ShowKmsKeyDetailRequest::setKmsProjectName(const std::string& value)
{
    kmsProjectName_ = value;
    kmsProjectNameIsSet_ = true;
}

bool ShowKmsKeyDetailRequest::kmsProjectNameIsSet() const
{
    return kmsProjectNameIsSet_;
}

void ShowKmsKeyDetailRequest::unsetkmsProjectName()
{
    kmsProjectNameIsSet_ = false;
}

}
}
}
}
}


