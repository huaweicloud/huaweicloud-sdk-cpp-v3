

#include "huaweicloud/gaussdbforopengauss/v3/model/WaitEventTime.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




WaitEventTime::WaitEventTime()
{
    codeWaitEventTimeIsSet_ = false;
    resourceWaitEventTimeIsSet_ = false;
}

WaitEventTime::~WaitEventTime() = default;

void WaitEventTime::validate()
{
}

web::json::value WaitEventTime::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeWaitEventTimeIsSet_) {
        val[utility::conversions::to_string_t("code_wait_event_time")] = ModelBase::toJson(codeWaitEventTime_);
    }
    if(resourceWaitEventTimeIsSet_) {
        val[utility::conversions::to_string_t("resource_wait_event_time")] = ModelBase::toJson(resourceWaitEventTime_);
    }

    return val;
}
bool WaitEventTime::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code_wait_event_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_wait_event_time"));
        if(!fieldValue.is_null())
        {
            CodeWaitEventTime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeWaitEventTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_wait_event_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_wait_event_time"));
        if(!fieldValue.is_null())
        {
            ResourceWaitEventTime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceWaitEventTime(refVal);
        }
    }
    return ok;
}


CodeWaitEventTime WaitEventTime::getCodeWaitEventTime() const
{
    return codeWaitEventTime_;
}

void WaitEventTime::setCodeWaitEventTime(const CodeWaitEventTime& value)
{
    codeWaitEventTime_ = value;
    codeWaitEventTimeIsSet_ = true;
}

bool WaitEventTime::codeWaitEventTimeIsSet() const
{
    return codeWaitEventTimeIsSet_;
}

void WaitEventTime::unsetcodeWaitEventTime()
{
    codeWaitEventTimeIsSet_ = false;
}

ResourceWaitEventTime WaitEventTime::getResourceWaitEventTime() const
{
    return resourceWaitEventTime_;
}

void WaitEventTime::setResourceWaitEventTime(const ResourceWaitEventTime& value)
{
    resourceWaitEventTime_ = value;
    resourceWaitEventTimeIsSet_ = true;
}

bool WaitEventTime::resourceWaitEventTimeIsSet() const
{
    return resourceWaitEventTimeIsSet_;
}

void WaitEventTime::unsetresourceWaitEventTime()
{
    resourceWaitEventTimeIsSet_ = false;
}

}
}
}
}
}


