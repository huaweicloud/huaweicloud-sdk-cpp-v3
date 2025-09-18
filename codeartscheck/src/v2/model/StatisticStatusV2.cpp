

#include "huaweicloud/codeartscheck/v2/model/StatisticStatusV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




StatisticStatusV2::StatisticStatusV2()
{
    unresolved_ = 0;
    unresolvedIsSet_ = false;
    resolved_ = 0;
    resolvedIsSet_ = false;
    dismissed_ = 0;
    dismissedIsSet_ = false;
}

StatisticStatusV2::~StatisticStatusV2() = default;

void StatisticStatusV2::validate()
{
}

web::json::value StatisticStatusV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(unresolvedIsSet_) {
        val[utility::conversions::to_string_t("unresolved")] = ModelBase::toJson(unresolved_);
    }
    if(resolvedIsSet_) {
        val[utility::conversions::to_string_t("resolved")] = ModelBase::toJson(resolved_);
    }
    if(dismissedIsSet_) {
        val[utility::conversions::to_string_t("dismissed")] = ModelBase::toJson(dismissed_);
    }

    return val;
}
bool StatisticStatusV2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("unresolved"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unresolved"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnresolved(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resolved"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resolved"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResolved(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dismissed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dismissed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDismissed(refVal);
        }
    }
    return ok;
}


int32_t StatisticStatusV2::getUnresolved() const
{
    return unresolved_;
}

void StatisticStatusV2::setUnresolved(int32_t value)
{
    unresolved_ = value;
    unresolvedIsSet_ = true;
}

bool StatisticStatusV2::unresolvedIsSet() const
{
    return unresolvedIsSet_;
}

void StatisticStatusV2::unsetunresolved()
{
    unresolvedIsSet_ = false;
}

int32_t StatisticStatusV2::getResolved() const
{
    return resolved_;
}

void StatisticStatusV2::setResolved(int32_t value)
{
    resolved_ = value;
    resolvedIsSet_ = true;
}

bool StatisticStatusV2::resolvedIsSet() const
{
    return resolvedIsSet_;
}

void StatisticStatusV2::unsetresolved()
{
    resolvedIsSet_ = false;
}

int32_t StatisticStatusV2::getDismissed() const
{
    return dismissed_;
}

void StatisticStatusV2::setDismissed(int32_t value)
{
    dismissed_ = value;
    dismissedIsSet_ = true;
}

bool StatisticStatusV2::dismissedIsSet() const
{
    return dismissedIsSet_;
}

void StatisticStatusV2::unsetdismissed()
{
    dismissedIsSet_ = false;
}

}
}
}
}
}


