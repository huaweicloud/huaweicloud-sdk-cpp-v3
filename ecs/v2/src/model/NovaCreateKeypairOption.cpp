

#include "huaweicloud/ecs/model/NovaCreateKeypairOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaCreateKeypairOption::NovaCreateKeypairOption()
{
    publicKey_ = "";
    publicKeyIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
}

NovaCreateKeypairOption::~NovaCreateKeypairOption() = default;

void NovaCreateKeypairOption::validate()
{
}

web::json::value NovaCreateKeypairOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicKeyIsSet_) {
        val[utility::conversions::to_string_t("public_key")] = ModelBase::toJson(publicKey_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}

bool NovaCreateKeypairOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("public_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicKey(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    return ok;
}


std::string NovaCreateKeypairOption::getPublicKey() const
{
    return publicKey_;
}

void NovaCreateKeypairOption::setPublicKey(const std::string& value)
{
    publicKey_ = value;
    publicKeyIsSet_ = true;
}

bool NovaCreateKeypairOption::publicKeyIsSet() const
{
    return publicKeyIsSet_;
}

void NovaCreateKeypairOption::unsetpublicKey()
{
    publicKeyIsSet_ = false;
}

std::string NovaCreateKeypairOption::getType() const
{
    return type_;
}

void NovaCreateKeypairOption::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool NovaCreateKeypairOption::typeIsSet() const
{
    return typeIsSet_;
}

void NovaCreateKeypairOption::unsettype()
{
    typeIsSet_ = false;
}

std::string NovaCreateKeypairOption::getName() const
{
    return name_;
}

void NovaCreateKeypairOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NovaCreateKeypairOption::nameIsSet() const
{
    return nameIsSet_;
}

void NovaCreateKeypairOption::unsetname()
{
    nameIsSet_ = false;
}

std::string NovaCreateKeypairOption::getUserId() const
{
    return userId_;
}

void NovaCreateKeypairOption::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool NovaCreateKeypairOption::userIdIsSet() const
{
    return userIdIsSet_;
}

void NovaCreateKeypairOption::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


