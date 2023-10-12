

#include "huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenGaussGrantRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




GaussDBforOpenGaussGrantRequest::GaussDBforOpenGaussGrantRequest()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    usersIsSet_ = false;
}

GaussDBforOpenGaussGrantRequest::~GaussDBforOpenGaussGrantRequest() = default;

void GaussDBforOpenGaussGrantRequest::validate()
{
}

web::json::value GaussDBforOpenGaussGrantRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}
bool GaussDBforOpenGaussGrantRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<GaussDBforOpenGaussUserWithPrivilege> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}


std::string GaussDBforOpenGaussGrantRequest::getDbName() const
{
    return dbName_;
}

void GaussDBforOpenGaussGrantRequest::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool GaussDBforOpenGaussGrantRequest::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void GaussDBforOpenGaussGrantRequest::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::vector<GaussDBforOpenGaussUserWithPrivilege>& GaussDBforOpenGaussGrantRequest::getUsers()
{
    return users_;
}

void GaussDBforOpenGaussGrantRequest::setUsers(const std::vector<GaussDBforOpenGaussUserWithPrivilege>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool GaussDBforOpenGaussGrantRequest::usersIsSet() const
{
    return usersIsSet_;
}

void GaussDBforOpenGaussGrantRequest::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}


