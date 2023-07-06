

#include "huaweicloud/ecs/v2/model/NovaServerSchedulerHints.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaServerSchedulerHints::NovaServerSchedulerHints()
{
    tenancyIsSet_ = false;
    dedicatedHostIdIsSet_ = false;
}

NovaServerSchedulerHints::~NovaServerSchedulerHints() = default;

void NovaServerSchedulerHints::validate()
{
}

web::json::value NovaServerSchedulerHints::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenancyIsSet_) {
        val[utility::conversions::to_string_t("tenancy")] = ModelBase::toJson(tenancy_);
    }
    if(dedicatedHostIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_host_id")] = ModelBase::toJson(dedicatedHostId_);
    }

    return val;
}

bool NovaServerSchedulerHints::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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

std::vector<std::string>& NovaServerSchedulerHints::getTenancy()
{
    return tenancy_;
}

void NovaServerSchedulerHints::setTenancy(const std::vector<std::string>& value)
{
    tenancy_ = value;
    tenancyIsSet_ = true;
}

bool NovaServerSchedulerHints::tenancyIsSet() const
{
    return tenancyIsSet_;
}

void NovaServerSchedulerHints::unsettenancy()
{
    tenancyIsSet_ = false;
}

std::vector<std::string>& NovaServerSchedulerHints::getDedicatedHostId()
{
    return dedicatedHostId_;
}

void NovaServerSchedulerHints::setDedicatedHostId(const std::vector<std::string>& value)
{
    dedicatedHostId_ = value;
    dedicatedHostIdIsSet_ = true;
}

bool NovaServerSchedulerHints::dedicatedHostIdIsSet() const
{
    return dedicatedHostIdIsSet_;
}

void NovaServerSchedulerHints::unsetdedicatedHostId()
{
    dedicatedHostIdIsSet_ = false;
}

}
}
}
}
}


