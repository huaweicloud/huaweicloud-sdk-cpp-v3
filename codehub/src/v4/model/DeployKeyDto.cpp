

#include "huaweicloud/codehub/v4/model/DeployKeyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




DeployKeyDto::DeployKeyDto()
{
    id_ = 0;
    idIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    fingerprint_ = "";
    fingerprintIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
}

DeployKeyDto::~DeployKeyDto() = default;

void DeployKeyDto::validate()
{
}

web::json::value DeployKeyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(fingerprintIsSet_) {
        val[utility::conversions::to_string_t("fingerprint")] = ModelBase::toJson(fingerprint_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }

    return val;
}
bool DeployKeyDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fingerprint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fingerprint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFingerprint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    return ok;
}


int32_t DeployKeyDto::getId() const
{
    return id_;
}

void DeployKeyDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeployKeyDto::idIsSet() const
{
    return idIsSet_;
}

void DeployKeyDto::unsetid()
{
    idIsSet_ = false;
}

std::string DeployKeyDto::getTitle() const
{
    return title_;
}

void DeployKeyDto::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool DeployKeyDto::titleIsSet() const
{
    return titleIsSet_;
}

void DeployKeyDto::unsettitle()
{
    titleIsSet_ = false;
}

std::string DeployKeyDto::getFingerprint() const
{
    return fingerprint_;
}

void DeployKeyDto::setFingerprint(const std::string& value)
{
    fingerprint_ = value;
    fingerprintIsSet_ = true;
}

bool DeployKeyDto::fingerprintIsSet() const
{
    return fingerprintIsSet_;
}

void DeployKeyDto::unsetfingerprint()
{
    fingerprintIsSet_ = false;
}

std::string DeployKeyDto::getCreatedAt() const
{
    return createdAt_;
}

void DeployKeyDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool DeployKeyDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void DeployKeyDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

}
}
}
}
}


