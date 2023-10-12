

#include "huaweicloud/dds/v3/model/ShowShardingBalancerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowShardingBalancerResponse::ShowShardingBalancerResponse()
{
    isOpen_ = false;
    isOpenIsSet_ = false;
    activeWindowIsSet_ = false;
}

ShowShardingBalancerResponse::~ShowShardingBalancerResponse() = default;

void ShowShardingBalancerResponse::validate()
{
}

web::json::value ShowShardingBalancerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isOpenIsSet_) {
        val[utility::conversions::to_string_t("is_open")] = ModelBase::toJson(isOpen_);
    }
    if(activeWindowIsSet_) {
        val[utility::conversions::to_string_t("active_window")] = ModelBase::toJson(activeWindow_);
    }

    return val;
}
bool ShowShardingBalancerResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_open"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_open"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOpen(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("active_window"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_window"));
        if(!fieldValue.is_null())
        {
            BalancerActiveWindow refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveWindow(refVal);
        }
    }
    return ok;
}


bool ShowShardingBalancerResponse::isIsOpen() const
{
    return isOpen_;
}

void ShowShardingBalancerResponse::setIsOpen(bool value)
{
    isOpen_ = value;
    isOpenIsSet_ = true;
}

bool ShowShardingBalancerResponse::isOpenIsSet() const
{
    return isOpenIsSet_;
}

void ShowShardingBalancerResponse::unsetisOpen()
{
    isOpenIsSet_ = false;
}

BalancerActiveWindow ShowShardingBalancerResponse::getActiveWindow() const
{
    return activeWindow_;
}

void ShowShardingBalancerResponse::setActiveWindow(const BalancerActiveWindow& value)
{
    activeWindow_ = value;
    activeWindowIsSet_ = true;
}

bool ShowShardingBalancerResponse::activeWindowIsSet() const
{
    return activeWindowIsSet_;
}

void ShowShardingBalancerResponse::unsetactiveWindow()
{
    activeWindowIsSet_ = false;
}

}
}
}
}
}


