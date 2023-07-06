

#include "huaweicloud/ecs/v2/model/PostPaidServerSchedulerHints.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PostPaidServerSchedulerHints::PostPaidServerSchedulerHints()
{
    group_ = "";
    groupIsSet_ = false;
    dedicatedHostId_ = "";
    dedicatedHostIdIsSet_ = false;
    tenancy_ = "";
    tenancyIsSet_ = false;
}

PostPaidServerSchedulerHints::~PostPaidServerSchedulerHints() = default;

void PostPaidServerSchedulerHints::validate()
{
}

web::json::value PostPaidServerSchedulerHints::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIsSet_) {
        val[utility::conversions::to_string_t("group")] = ModelBase::toJson(group_);
    }
    if(dedicatedHostIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_host_id")] = ModelBase::toJson(dedicatedHostId_);
    }
    if(tenancyIsSet_) {
        val[utility::conversions::to_string_t("tenancy")] = ModelBase::toJson(tenancy_);
    }

    return val;
}

bool PostPaidServerSchedulerHints::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dedicated_host_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicated_host_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedHostId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenancy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenancy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenancy(refVal);
        }
    }
    return ok;
}

std::string PostPaidServerSchedulerHints::getGroup() const
{
    return group_;
}

void PostPaidServerSchedulerHints::setGroup(const std::string& value)
{
    group_ = value;
    groupIsSet_ = true;
}

bool PostPaidServerSchedulerHints::groupIsSet() const
{
    return groupIsSet_;
}

void PostPaidServerSchedulerHints::unsetgroup()
{
    groupIsSet_ = false;
}

std::string PostPaidServerSchedulerHints::getDedicatedHostId() const
{
    return dedicatedHostId_;
}

void PostPaidServerSchedulerHints::setDedicatedHostId(const std::string& value)
{
    dedicatedHostId_ = value;
    dedicatedHostIdIsSet_ = true;
}

bool PostPaidServerSchedulerHints::dedicatedHostIdIsSet() const
{
    return dedicatedHostIdIsSet_;
}

void PostPaidServerSchedulerHints::unsetdedicatedHostId()
{
    dedicatedHostIdIsSet_ = false;
}

std::string PostPaidServerSchedulerHints::getTenancy() const
{
    return tenancy_;
}

void PostPaidServerSchedulerHints::setTenancy(const std::string& value)
{
    tenancy_ = value;
    tenancyIsSet_ = true;
}

bool PostPaidServerSchedulerHints::tenancyIsSet() const
{
    return tenancyIsSet_;
}

void PostPaidServerSchedulerHints::unsettenancy()
{
    tenancyIsSet_ = false;
}

}
}
}
}
}


