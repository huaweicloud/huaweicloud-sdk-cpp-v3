

#include "huaweicloud/codehub/v4/model/SSHKeyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




SSHKeyDto::SSHKeyDto()
{
    id_ = 0;
    idIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
}

SSHKeyDto::~SSHKeyDto() = default;

void SSHKeyDto::validate()
{
}

web::json::value SSHKeyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }

    return val;
}
bool SSHKeyDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
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


int32_t SSHKeyDto::getId() const
{
    return id_;
}

void SSHKeyDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SSHKeyDto::idIsSet() const
{
    return idIsSet_;
}

void SSHKeyDto::unsetid()
{
    idIsSet_ = false;
}

std::string SSHKeyDto::getTitle() const
{
    return title_;
}

void SSHKeyDto::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool SSHKeyDto::titleIsSet() const
{
    return titleIsSet_;
}

void SSHKeyDto::unsettitle()
{
    titleIsSet_ = false;
}

std::string SSHKeyDto::getKey() const
{
    return key_;
}

void SSHKeyDto::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool SSHKeyDto::keyIsSet() const
{
    return keyIsSet_;
}

void SSHKeyDto::unsetkey()
{
    keyIsSet_ = false;
}

std::string SSHKeyDto::getCreatedAt() const
{
    return createdAt_;
}

void SSHKeyDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool SSHKeyDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void SSHKeyDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

}
}
}
}
}


