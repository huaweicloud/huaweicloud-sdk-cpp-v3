

#include "huaweicloud/rds/v3/model/PostgresqlUserForCreation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgresqlUserForCreation::PostgresqlUserForCreation()
{
    name_ = "";
    nameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
}

PostgresqlUserForCreation::~PostgresqlUserForCreation() = default;

void PostgresqlUserForCreation::validate()
{
}

web::json::value PostgresqlUserForCreation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }

    return val;
}
bool PostgresqlUserForCreation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComment(refVal);
        }
    }
    return ok;
}


std::string PostgresqlUserForCreation::getName() const
{
    return name_;
}

void PostgresqlUserForCreation::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PostgresqlUserForCreation::nameIsSet() const
{
    return nameIsSet_;
}

void PostgresqlUserForCreation::unsetname()
{
    nameIsSet_ = false;
}

std::string PostgresqlUserForCreation::getPassword() const
{
    return password_;
}

void PostgresqlUserForCreation::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool PostgresqlUserForCreation::passwordIsSet() const
{
    return passwordIsSet_;
}

void PostgresqlUserForCreation::unsetpassword()
{
    passwordIsSet_ = false;
}

std::string PostgresqlUserForCreation::getComment() const
{
    return comment_;
}

void PostgresqlUserForCreation::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool PostgresqlUserForCreation::commentIsSet() const
{
    return commentIsSet_;
}

void PostgresqlUserForCreation::unsetcomment()
{
    commentIsSet_ = false;
}

}
}
}
}
}


