

#include "huaweicloud/rds/v3/model/UpdateTdeStatusRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateTdeStatusRequestBody::UpdateTdeStatusRequestBody()
{
    rotateDay_ = 0;
    rotateDayIsSet_ = false;
    secretId_ = "";
    secretIdIsSet_ = false;
    secretName_ = "";
    secretNameIsSet_ = false;
    secretVersion_ = "";
    secretVersionIsSet_ = false;
}

UpdateTdeStatusRequestBody::~UpdateTdeStatusRequestBody() = default;

void UpdateTdeStatusRequestBody::validate()
{
}

web::json::value UpdateTdeStatusRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rotateDayIsSet_) {
        val[utility::conversions::to_string_t("rotate_day")] = ModelBase::toJson(rotateDay_);
    }
    if(secretIdIsSet_) {
        val[utility::conversions::to_string_t("secret_id")] = ModelBase::toJson(secretId_);
    }
    if(secretNameIsSet_) {
        val[utility::conversions::to_string_t("secret_name")] = ModelBase::toJson(secretName_);
    }
    if(secretVersionIsSet_) {
        val[utility::conversions::to_string_t("secret_version")] = ModelBase::toJson(secretVersion_);
    }

    return val;
}
bool UpdateTdeStatusRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rotate_day"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rotate_day"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRotateDay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretVersion(refVal);
        }
    }
    return ok;
}


int32_t UpdateTdeStatusRequestBody::getRotateDay() const
{
    return rotateDay_;
}

void UpdateTdeStatusRequestBody::setRotateDay(int32_t value)
{
    rotateDay_ = value;
    rotateDayIsSet_ = true;
}

bool UpdateTdeStatusRequestBody::rotateDayIsSet() const
{
    return rotateDayIsSet_;
}

void UpdateTdeStatusRequestBody::unsetrotateDay()
{
    rotateDayIsSet_ = false;
}

std::string UpdateTdeStatusRequestBody::getSecretId() const
{
    return secretId_;
}

void UpdateTdeStatusRequestBody::setSecretId(const std::string& value)
{
    secretId_ = value;
    secretIdIsSet_ = true;
}

bool UpdateTdeStatusRequestBody::secretIdIsSet() const
{
    return secretIdIsSet_;
}

void UpdateTdeStatusRequestBody::unsetsecretId()
{
    secretIdIsSet_ = false;
}

std::string UpdateTdeStatusRequestBody::getSecretName() const
{
    return secretName_;
}

void UpdateTdeStatusRequestBody::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool UpdateTdeStatusRequestBody::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void UpdateTdeStatusRequestBody::unsetsecretName()
{
    secretNameIsSet_ = false;
}

std::string UpdateTdeStatusRequestBody::getSecretVersion() const
{
    return secretVersion_;
}

void UpdateTdeStatusRequestBody::setSecretVersion(const std::string& value)
{
    secretVersion_ = value;
    secretVersionIsSet_ = true;
}

bool UpdateTdeStatusRequestBody::secretVersionIsSet() const
{
    return secretVersionIsSet_;
}

void UpdateTdeStatusRequestBody::unsetsecretVersion()
{
    secretVersionIsSet_ = false;
}

}
}
}
}
}


