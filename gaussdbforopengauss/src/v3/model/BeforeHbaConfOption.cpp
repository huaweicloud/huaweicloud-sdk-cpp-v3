

#include "huaweicloud/gaussdbforopengauss/v3/model/BeforeHbaConfOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BeforeHbaConfOption::BeforeHbaConfOption()
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

BeforeHbaConfOption::~BeforeHbaConfOption() = default;

void BeforeHbaConfOption::validate()
{
}

web::json::value BeforeHbaConfOption::toJson() const
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
bool BeforeHbaConfOption::fromJson(const web::json::value& val)
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


std::string BeforeHbaConfOption::getType() const
{
    return type_;
}

void BeforeHbaConfOption::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BeforeHbaConfOption::typeIsSet() const
{
    return typeIsSet_;
}

void BeforeHbaConfOption::unsettype()
{
    typeIsSet_ = false;
}

std::string BeforeHbaConfOption::getDatabase() const
{
    return database_;
}

void BeforeHbaConfOption::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool BeforeHbaConfOption::databaseIsSet() const
{
    return databaseIsSet_;
}

void BeforeHbaConfOption::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::string BeforeHbaConfOption::getUser() const
{
    return user_;
}

void BeforeHbaConfOption::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool BeforeHbaConfOption::userIsSet() const
{
    return userIsSet_;
}

void BeforeHbaConfOption::unsetuser()
{
    userIsSet_ = false;
}

std::string BeforeHbaConfOption::getAddress() const
{
    return address_;
}

void BeforeHbaConfOption::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool BeforeHbaConfOption::addressIsSet() const
{
    return addressIsSet_;
}

void BeforeHbaConfOption::unsetaddress()
{
    addressIsSet_ = false;
}

std::string BeforeHbaConfOption::getMethod() const
{
    return method_;
}

void BeforeHbaConfOption::setMethod(const std::string& value)
{
    method_ = value;
    methodIsSet_ = true;
}

bool BeforeHbaConfOption::methodIsSet() const
{
    return methodIsSet_;
}

void BeforeHbaConfOption::unsetmethod()
{
    methodIsSet_ = false;
}

}
}
}
}
}


