

#include "huaweicloud/rds/v3/model/PostgresqlHbaConf.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgresqlHbaConf::PostgresqlHbaConf()
{
    type_ = "";
    typeIsSet_ = false;
    database_ = "";
    databaseIsSet_ = false;
    user_ = "";
    userIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    mask_ = "";
    maskIsSet_ = false;
    method_ = "";
    methodIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
}

PostgresqlHbaConf::~PostgresqlHbaConf() = default;

void PostgresqlHbaConf::validate()
{
}

web::json::value PostgresqlHbaConf::toJson() const
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
    if(maskIsSet_) {
        val[utility::conversions::to_string_t("mask")] = ModelBase::toJson(mask_);
    }
    if(methodIsSet_) {
        val[utility::conversions::to_string_t("method")] = ModelBase::toJson(method_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }

    return val;
}
bool PostgresqlHbaConf::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("mask"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mask"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMask(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    return ok;
}


std::string PostgresqlHbaConf::getType() const
{
    return type_;
}

void PostgresqlHbaConf::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PostgresqlHbaConf::typeIsSet() const
{
    return typeIsSet_;
}

void PostgresqlHbaConf::unsettype()
{
    typeIsSet_ = false;
}

std::string PostgresqlHbaConf::getDatabase() const
{
    return database_;
}

void PostgresqlHbaConf::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool PostgresqlHbaConf::databaseIsSet() const
{
    return databaseIsSet_;
}

void PostgresqlHbaConf::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::string PostgresqlHbaConf::getUser() const
{
    return user_;
}

void PostgresqlHbaConf::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool PostgresqlHbaConf::userIsSet() const
{
    return userIsSet_;
}

void PostgresqlHbaConf::unsetuser()
{
    userIsSet_ = false;
}

std::string PostgresqlHbaConf::getAddress() const
{
    return address_;
}

void PostgresqlHbaConf::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool PostgresqlHbaConf::addressIsSet() const
{
    return addressIsSet_;
}

void PostgresqlHbaConf::unsetaddress()
{
    addressIsSet_ = false;
}

std::string PostgresqlHbaConf::getMask() const
{
    return mask_;
}

void PostgresqlHbaConf::setMask(const std::string& value)
{
    mask_ = value;
    maskIsSet_ = true;
}

bool PostgresqlHbaConf::maskIsSet() const
{
    return maskIsSet_;
}

void PostgresqlHbaConf::unsetmask()
{
    maskIsSet_ = false;
}

std::string PostgresqlHbaConf::getMethod() const
{
    return method_;
}

void PostgresqlHbaConf::setMethod(const std::string& value)
{
    method_ = value;
    methodIsSet_ = true;
}

bool PostgresqlHbaConf::methodIsSet() const
{
    return methodIsSet_;
}

void PostgresqlHbaConf::unsetmethod()
{
    methodIsSet_ = false;
}

int32_t PostgresqlHbaConf::getPriority() const
{
    return priority_;
}

void PostgresqlHbaConf::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool PostgresqlHbaConf::priorityIsSet() const
{
    return priorityIsSet_;
}

void PostgresqlHbaConf::unsetpriority()
{
    priorityIsSet_ = false;
}

}
}
}
}
}


