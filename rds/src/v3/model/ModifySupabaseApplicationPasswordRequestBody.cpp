

#include "huaweicloud/rds/v3/model/ModifySupabaseApplicationPasswordRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifySupabaseApplicationPasswordRequestBody::ModifySupabaseApplicationPasswordRequestBody()
{
    applicationPassword_ = "";
    applicationPasswordIsSet_ = false;
    instancePassword_ = "";
    instancePasswordIsSet_ = false;
}

ModifySupabaseApplicationPasswordRequestBody::~ModifySupabaseApplicationPasswordRequestBody() = default;

void ModifySupabaseApplicationPasswordRequestBody::validate()
{
}

web::json::value ModifySupabaseApplicationPasswordRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationPasswordIsSet_) {
        val[utility::conversions::to_string_t("application_password")] = ModelBase::toJson(applicationPassword_);
    }
    if(instancePasswordIsSet_) {
        val[utility::conversions::to_string_t("instance_password")] = ModelBase::toJson(instancePassword_);
    }

    return val;
}
bool ModifySupabaseApplicationPasswordRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstancePassword(refVal);
        }
    }
    return ok;
}


std::string ModifySupabaseApplicationPasswordRequestBody::getApplicationPassword() const
{
    return applicationPassword_;
}

void ModifySupabaseApplicationPasswordRequestBody::setApplicationPassword(const std::string& value)
{
    applicationPassword_ = value;
    applicationPasswordIsSet_ = true;
}

bool ModifySupabaseApplicationPasswordRequestBody::applicationPasswordIsSet() const
{
    return applicationPasswordIsSet_;
}

void ModifySupabaseApplicationPasswordRequestBody::unsetapplicationPassword()
{
    applicationPasswordIsSet_ = false;
}

std::string ModifySupabaseApplicationPasswordRequestBody::getInstancePassword() const
{
    return instancePassword_;
}

void ModifySupabaseApplicationPasswordRequestBody::setInstancePassword(const std::string& value)
{
    instancePassword_ = value;
    instancePasswordIsSet_ = true;
}

bool ModifySupabaseApplicationPasswordRequestBody::instancePasswordIsSet() const
{
    return instancePasswordIsSet_;
}

void ModifySupabaseApplicationPasswordRequestBody::unsetinstancePassword()
{
    instancePasswordIsSet_ = false;
}

}
}
}
}
}


