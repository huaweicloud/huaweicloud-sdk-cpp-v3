

#include "huaweicloud/rds/v3/model/SupabaseExistingInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SupabaseExistingInstanceRequest::SupabaseExistingInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    databasePwd_ = "";
    databasePwdIsSet_ = false;
}

SupabaseExistingInstanceRequest::~SupabaseExistingInstanceRequest() = default;

void SupabaseExistingInstanceRequest::validate()
{
}

web::json::value SupabaseExistingInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(databasePwdIsSet_) {
        val[utility::conversions::to_string_t("database_pwd")] = ModelBase::toJson(databasePwd_);
    }

    return val;
}
bool SupabaseExistingInstanceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_pwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_pwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabasePwd(refVal);
        }
    }
    return ok;
}


std::string SupabaseExistingInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void SupabaseExistingInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SupabaseExistingInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SupabaseExistingInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SupabaseExistingInstanceRequest::getDatabaseName() const
{
    return databaseName_;
}

void SupabaseExistingInstanceRequest::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool SupabaseExistingInstanceRequest::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void SupabaseExistingInstanceRequest::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string SupabaseExistingInstanceRequest::getDatabasePwd() const
{
    return databasePwd_;
}

void SupabaseExistingInstanceRequest::setDatabasePwd(const std::string& value)
{
    databasePwd_ = value;
    databasePwdIsSet_ = true;
}

bool SupabaseExistingInstanceRequest::databasePwdIsSet() const
{
    return databasePwdIsSet_;
}

void SupabaseExistingInstanceRequest::unsetdatabasePwd()
{
    databasePwdIsSet_ = false;
}

}
}
}
}
}


