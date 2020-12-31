

#include "huaweicloud/ecs/model/PrePaidServerSchedulerHints.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PrePaidServerSchedulerHints::PrePaidServerSchedulerHints()
{
    group_ = "";
    groupIsSet_ = false;
    tenancy_ = "";
    tenancyIsSet_ = false;
    dedicatedHostId_ = "";
    dedicatedHostIdIsSet_ = false;
}

PrePaidServerSchedulerHints::~PrePaidServerSchedulerHints() = default;

void PrePaidServerSchedulerHints::validate()
{
}

web::json::value PrePaidServerSchedulerHints::toJson() const
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

bool PrePaidServerSchedulerHints::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tenancy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenancy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenancy(refVal);
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
    return ok;
}


std::string PrePaidServerSchedulerHints::getGroup() const
{
    return group_;
}

void PrePaidServerSchedulerHints::setGroup(const std::string& value)
{
    group_ = value;
    groupIsSet_ = true;
}

bool PrePaidServerSchedulerHints::groupIsSet() const
{
    return groupIsSet_;
}

void PrePaidServerSchedulerHints::unsetgroup()
{
    groupIsSet_ = false;
}

std::string PrePaidServerSchedulerHints::getTenancy() const
{
    return tenancy_;
}

void PrePaidServerSchedulerHints::setTenancy(const std::string& value)
{
    tenancy_ = value;
    tenancyIsSet_ = true;
}

bool PrePaidServerSchedulerHints::tenancyIsSet() const
{
    return tenancyIsSet_;
}

void PrePaidServerSchedulerHints::unsettenancy()
{
    tenancyIsSet_ = false;
}

std::string PrePaidServerSchedulerHints::getDedicatedHostId() const
{
    return dedicatedHostId_;
}

void PrePaidServerSchedulerHints::setDedicatedHostId(const std::string& value)
{
    dedicatedHostId_ = value;
    dedicatedHostIdIsSet_ = true;
}

bool PrePaidServerSchedulerHints::dedicatedHostIdIsSet() const
{
    return dedicatedHostIdIsSet_;
}

void PrePaidServerSchedulerHints::unsetdedicatedHostId()
{
    dedicatedHostIdIsSet_ = false;
}

}
}
}
}
}


