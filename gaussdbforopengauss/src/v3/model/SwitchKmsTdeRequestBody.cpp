

#include "huaweicloud/gaussdbforopengauss/v3/model/SwitchKmsTdeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SwitchKmsTdeRequestBody::SwitchKmsTdeRequestBody()
{
    kmsTdeKeyId_ = "";
    kmsTdeKeyIdIsSet_ = false;
    kmsProjectName_ = "";
    kmsProjectNameIsSet_ = false;
    kmsTdeStatus_ = "";
    kmsTdeStatusIsSet_ = false;
}

SwitchKmsTdeRequestBody::~SwitchKmsTdeRequestBody() = default;

void SwitchKmsTdeRequestBody::validate()
{
}

web::json::value SwitchKmsTdeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kmsTdeKeyIdIsSet_) {
        val[utility::conversions::to_string_t("kms_tde_key_id")] = ModelBase::toJson(kmsTdeKeyId_);
    }
    if(kmsProjectNameIsSet_) {
        val[utility::conversions::to_string_t("kms_project_name")] = ModelBase::toJson(kmsProjectName_);
    }
    if(kmsTdeStatusIsSet_) {
        val[utility::conversions::to_string_t("kms_tde_status")] = ModelBase::toJson(kmsTdeStatus_);
    }

    return val;
}
bool SwitchKmsTdeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("kms_tde_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kms_tde_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKmsTdeKeyId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("kms_tde_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kms_tde_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKmsTdeStatus(refVal);
        }
    }
    return ok;
}


std::string SwitchKmsTdeRequestBody::getKmsTdeKeyId() const
{
    return kmsTdeKeyId_;
}

void SwitchKmsTdeRequestBody::setKmsTdeKeyId(const std::string& value)
{
    kmsTdeKeyId_ = value;
    kmsTdeKeyIdIsSet_ = true;
}

bool SwitchKmsTdeRequestBody::kmsTdeKeyIdIsSet() const
{
    return kmsTdeKeyIdIsSet_;
}

void SwitchKmsTdeRequestBody::unsetkmsTdeKeyId()
{
    kmsTdeKeyIdIsSet_ = false;
}

std::string SwitchKmsTdeRequestBody::getKmsProjectName() const
{
    return kmsProjectName_;
}

void SwitchKmsTdeRequestBody::setKmsProjectName(const std::string& value)
{
    kmsProjectName_ = value;
    kmsProjectNameIsSet_ = true;
}

bool SwitchKmsTdeRequestBody::kmsProjectNameIsSet() const
{
    return kmsProjectNameIsSet_;
}

void SwitchKmsTdeRequestBody::unsetkmsProjectName()
{
    kmsProjectNameIsSet_ = false;
}

std::string SwitchKmsTdeRequestBody::getKmsTdeStatus() const
{
    return kmsTdeStatus_;
}

void SwitchKmsTdeRequestBody::setKmsTdeStatus(const std::string& value)
{
    kmsTdeStatus_ = value;
    kmsTdeStatusIsSet_ = true;
}

bool SwitchKmsTdeRequestBody::kmsTdeStatusIsSet() const
{
    return kmsTdeStatusIsSet_;
}

void SwitchKmsTdeRequestBody::unsetkmsTdeStatus()
{
    kmsTdeStatusIsSet_ = false;
}

}
}
}
}
}


