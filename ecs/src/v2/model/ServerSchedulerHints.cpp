

#include "huaweicloud/ecs/v2/model/ServerSchedulerHints.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ServerSchedulerHints::ServerSchedulerHints()
{
    groupIsSet_ = false;
    tenancyIsSet_ = false;
    dedicatedHostIdIsSet_ = false;
}

ServerSchedulerHints::~ServerSchedulerHints() = default;

void ServerSchedulerHints::validate()
{
}

web::json::value ServerSchedulerHints::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIsSet_) {
        val[utility::conversions::to_string_t("group")] = ModelBase::toJson(group_);
    }
    if(tenancyIsSet_) {
        val[utility::conversions::to_string_t("tenancy")] = ModelBase::toJson(tenancy_);
    }
    if(dedicatedHostIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_host_id")] = ModelBase::toJson(dedicatedHostId_);
    }

    return val;
}
bool ServerSchedulerHints::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenancy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenancy"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenancy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dedicated_host_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicated_host_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedHostId(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ServerSchedulerHints::getGroup()
{
    return group_;
}

void ServerSchedulerHints::setGroup(const std::vector<std::string>& value)
{
    group_ = value;
    groupIsSet_ = true;
}

bool ServerSchedulerHints::groupIsSet() const
{
    return groupIsSet_;
}

void ServerSchedulerHints::unsetgroup()
{
    groupIsSet_ = false;
}

std::vector<std::string>& ServerSchedulerHints::getTenancy()
{
    return tenancy_;
}

void ServerSchedulerHints::setTenancy(const std::vector<std::string>& value)
{
    tenancy_ = value;
    tenancyIsSet_ = true;
}

bool ServerSchedulerHints::tenancyIsSet() const
{
    return tenancyIsSet_;
}

void ServerSchedulerHints::unsettenancy()
{
    tenancyIsSet_ = false;
}

std::vector<std::string>& ServerSchedulerHints::getDedicatedHostId()
{
    return dedicatedHostId_;
}

void ServerSchedulerHints::setDedicatedHostId(const std::vector<std::string>& value)
{
    dedicatedHostId_ = value;
    dedicatedHostIdIsSet_ = true;
}

bool ServerSchedulerHints::dedicatedHostIdIsSet() const
{
    return dedicatedHostIdIsSet_;
}

void ServerSchedulerHints::unsetdedicatedHostId()
{
    dedicatedHostIdIsSet_ = false;
}

}
}
}
}
}


