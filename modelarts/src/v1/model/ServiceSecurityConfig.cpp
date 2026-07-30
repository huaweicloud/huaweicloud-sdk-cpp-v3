

#include "huaweicloud/modelarts/v1/model/ServiceSecurityConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServiceSecurityConfig::ServiceSecurityConfig()
{
    userId_ = 0L;
    userIdIsSet_ = false;
    groupId_ = 0L;
    groupIdIsSet_ = false;
}

ServiceSecurityConfig::~ServiceSecurityConfig() = default;

void ServiceSecurityConfig::validate()
{
}

web::json::value ServiceSecurityConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool ServiceSecurityConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    return ok;
}


int64_t ServiceSecurityConfig::getUserId() const
{
    return userId_;
}

void ServiceSecurityConfig::setUserId(int64_t value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ServiceSecurityConfig::userIdIsSet() const
{
    return userIdIsSet_;
}

void ServiceSecurityConfig::unsetuserId()
{
    userIdIsSet_ = false;
}

int64_t ServiceSecurityConfig::getGroupId() const
{
    return groupId_;
}

void ServiceSecurityConfig::setGroupId(int64_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ServiceSecurityConfig::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ServiceSecurityConfig::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


