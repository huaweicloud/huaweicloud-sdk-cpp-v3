

#include "huaweicloud/cfw/v1/model/Overview.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




Overview::Overview()
{
    accessPoliciesIsSet_ = false;
    assetsIsSet_ = false;
    attackEventIsSet_ = false;
    trafficPeakIsSet_ = false;
}

Overview::~Overview() = default;

void Overview::validate()
{
}

web::json::value Overview::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessPoliciesIsSet_) {
        val[utility::conversions::to_string_t("access_policies")] = ModelBase::toJson(accessPolicies_);
    }
    if(assetsIsSet_) {
        val[utility::conversions::to_string_t("assets")] = ModelBase::toJson(assets_);
    }
    if(attackEventIsSet_) {
        val[utility::conversions::to_string_t("attack_event")] = ModelBase::toJson(attackEvent_);
    }
    if(trafficPeakIsSet_) {
        val[utility::conversions::to_string_t("traffic_peak")] = ModelBase::toJson(trafficPeak_);
    }

    return val;
}
bool Overview::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_policies"));
        if(!fieldValue.is_null())
        {
            AccessPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessPolicies(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assets"));
        if(!fieldValue.is_null())
        {
            ChangedVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attack_event"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_event"));
        if(!fieldValue.is_null())
        {
            AttackEvent refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackEvent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traffic_peak"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_peak"));
        if(!fieldValue.is_null())
        {
            TrendVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficPeak(refVal);
        }
    }
    return ok;
}


AccessPolicy Overview::getAccessPolicies() const
{
    return accessPolicies_;
}

void Overview::setAccessPolicies(const AccessPolicy& value)
{
    accessPolicies_ = value;
    accessPoliciesIsSet_ = true;
}

bool Overview::accessPoliciesIsSet() const
{
    return accessPoliciesIsSet_;
}

void Overview::unsetaccessPolicies()
{
    accessPoliciesIsSet_ = false;
}

ChangedVO Overview::getAssets() const
{
    return assets_;
}

void Overview::setAssets(const ChangedVO& value)
{
    assets_ = value;
    assetsIsSet_ = true;
}

bool Overview::assetsIsSet() const
{
    return assetsIsSet_;
}

void Overview::unsetassets()
{
    assetsIsSet_ = false;
}

AttackEvent Overview::getAttackEvent() const
{
    return attackEvent_;
}

void Overview::setAttackEvent(const AttackEvent& value)
{
    attackEvent_ = value;
    attackEventIsSet_ = true;
}

bool Overview::attackEventIsSet() const
{
    return attackEventIsSet_;
}

void Overview::unsetattackEvent()
{
    attackEventIsSet_ = false;
}

TrendVO Overview::getTrafficPeak() const
{
    return trafficPeak_;
}

void Overview::setTrafficPeak(const TrendVO& value)
{
    trafficPeak_ = value;
    trafficPeakIsSet_ = true;
}

bool Overview::trafficPeakIsSet() const
{
    return trafficPeakIsSet_;
}

void Overview::unsettrafficPeak()
{
    trafficPeakIsSet_ = false;
}

}
}
}
}
}


