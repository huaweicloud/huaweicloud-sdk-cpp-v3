

#include "huaweicloud/codehub/v4/model/AddSshKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




AddSshKeyResponse::AddSshKeyResponse()
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

AddSshKeyResponse::~AddSshKeyResponse() = default;

void AddSshKeyResponse::validate()
{
}

web::json::value AddSshKeyResponse::toJson() const
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
bool AddSshKeyResponse::fromJson(const web::json::value& val)
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


int32_t AddSshKeyResponse::getId() const
{
    return id_;
}

void AddSshKeyResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AddSshKeyResponse::idIsSet() const
{
    return idIsSet_;
}

void AddSshKeyResponse::unsetid()
{
    idIsSet_ = false;
}

std::string AddSshKeyResponse::getTitle() const
{
    return title_;
}

void AddSshKeyResponse::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool AddSshKeyResponse::titleIsSet() const
{
    return titleIsSet_;
}

void AddSshKeyResponse::unsettitle()
{
    titleIsSet_ = false;
}

std::string AddSshKeyResponse::getKey() const
{
    return key_;
}

void AddSshKeyResponse::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool AddSshKeyResponse::keyIsSet() const
{
    return keyIsSet_;
}

void AddSshKeyResponse::unsetkey()
{
    keyIsSet_ = false;
}

std::string AddSshKeyResponse::getCreatedAt() const
{
    return createdAt_;
}

void AddSshKeyResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool AddSshKeyResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void AddSshKeyResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

}
}
}
}
}


