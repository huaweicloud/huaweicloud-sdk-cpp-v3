

#include "huaweicloud/cloudtest/v1/model/PopUpInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




PopUpInfo::PopUpInfo()
{
    popup_ = false;
    popupIsSet_ = false;
    timeLimitIsSet_ = false;
}

PopUpInfo::~PopUpInfo() = default;

void PopUpInfo::validate()
{
}

web::json::value PopUpInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(popupIsSet_) {
        val[utility::conversions::to_string_t("popup")] = ModelBase::toJson(popup_);
    }
    if(timeLimitIsSet_) {
        val[utility::conversions::to_string_t("time_limit")] = ModelBase::toJson(timeLimit_);
    }

    return val;
}
bool PopUpInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("popup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("popup"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPopup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_limit"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeLimit(refVal);
        }
    }
    return ok;
}


bool PopUpInfo::isPopup() const
{
    return popup_;
}

void PopUpInfo::setPopup(bool value)
{
    popup_ = value;
    popupIsSet_ = true;
}

bool PopUpInfo::popupIsSet() const
{
    return popupIsSet_;
}

void PopUpInfo::unsetpopup()
{
    popupIsSet_ = false;
}

Object PopUpInfo::getTimeLimit() const
{
    return timeLimit_;
}

void PopUpInfo::setTimeLimit(const Object& value)
{
    timeLimit_ = value;
    timeLimitIsSet_ = true;
}

bool PopUpInfo::timeLimitIsSet() const
{
    return timeLimitIsSet_;
}

void PopUpInfo::unsettimeLimit()
{
    timeLimitIsSet_ = false;
}

}
}
}
}
}


