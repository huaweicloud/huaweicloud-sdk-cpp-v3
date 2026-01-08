

#include "huaweicloud/gaussdbforopengauss/v3/model/AfterHbaConfOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




AfterHbaConfOption::AfterHbaConfOption()
{
    type_ = "";
    typeIsSet_ = false;
    database_ = "";
    databaseIsSet_ = false;
    user_ = "";
    userIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    method_ = "";
    methodIsSet_ = false;
}

AfterHbaConfOption::~AfterHbaConfOption() = default;

void AfterHbaConfOption::validate()
{
}

web::json::value AfterHbaConfOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(methodIsSet_) {
        val[utility::conversions::to_string_t("method")] = ModelBase::toJson(method_);
    }

    return val;
}
bool AfterHbaConfOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMethod(refVal);
        }
    }
    return ok;
}


std::string AfterHbaConfOption::getType() const
{
    return type_;
}

void AfterHbaConfOption::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AfterHbaConfOption::typeIsSet() const
{
    return typeIsSet_;
}

void AfterHbaConfOption::unsettype()
{
    typeIsSet_ = false;
}

std::string AfterHbaConfOption::getDatabase() const
{
    return database_;
}

void AfterHbaConfOption::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool AfterHbaConfOption::databaseIsSet() const
{
    return databaseIsSet_;
}

void AfterHbaConfOption::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::string AfterHbaConfOption::getUser() const
{
    return user_;
}

void AfterHbaConfOption::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool AfterHbaConfOption::userIsSet() const
{
    return userIsSet_;
}

void AfterHbaConfOption::unsetuser()
{
    userIsSet_ = false;
}

std::string AfterHbaConfOption::getAddress() const
{
    return address_;
}

void AfterHbaConfOption::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool AfterHbaConfOption::addressIsSet() const
{
    return addressIsSet_;
}

void AfterHbaConfOption::unsetaddress()
{
    addressIsSet_ = false;
}

std::string AfterHbaConfOption::getMethod() const
{
    return method_;
}

void AfterHbaConfOption::setMethod(const std::string& value)
{
    method_ = value;
    methodIsSet_ = true;
}

bool AfterHbaConfOption::methodIsSet() const
{
    return methodIsSet_;
}

void AfterHbaConfOption::unsetmethod()
{
    methodIsSet_ = false;
}

}
}
}
}
}


