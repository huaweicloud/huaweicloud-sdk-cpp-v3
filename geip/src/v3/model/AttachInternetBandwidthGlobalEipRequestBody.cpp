

#include "huaweicloud/geip/v3/model/AttachInternetBandwidthGlobalEipRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




AttachInternetBandwidthGlobalEipRequestBody::AttachInternetBandwidthGlobalEipRequestBody()
{
    dryRun_ = false;
    dryRunIsSet_ = false;
    globalEipIsSet_ = false;
}

AttachInternetBandwidthGlobalEipRequestBody::~AttachInternetBandwidthGlobalEipRequestBody() = default;

void AttachInternetBandwidthGlobalEipRequestBody::validate()
{
}

web::json::value AttachInternetBandwidthGlobalEipRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dryRunIsSet_) {
        val[utility::conversions::to_string_t("dry_run")] = ModelBase::toJson(dryRun_);
    }
    if(globalEipIsSet_) {
        val[utility::conversions::to_string_t("global_eip")] = ModelBase::toJson(globalEip_);
    }

    return val;
}
bool AttachInternetBandwidthGlobalEipRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dry_run"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dry_run"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDryRun(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("global_eip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip"));
        if(!fieldValue.is_null())
        {
            AttachInternetBandwidthGlobalEipRequestBody_global_eip refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEip(refVal);
        }
    }
    return ok;
}


bool AttachInternetBandwidthGlobalEipRequestBody::isDryRun() const
{
    return dryRun_;
}

void AttachInternetBandwidthGlobalEipRequestBody::setDryRun(bool value)
{
    dryRun_ = value;
    dryRunIsSet_ = true;
}

bool AttachInternetBandwidthGlobalEipRequestBody::dryRunIsSet() const
{
    return dryRunIsSet_;
}

void AttachInternetBandwidthGlobalEipRequestBody::unsetdryRun()
{
    dryRunIsSet_ = false;
}

AttachInternetBandwidthGlobalEipRequestBody_global_eip AttachInternetBandwidthGlobalEipRequestBody::getGlobalEip() const
{
    return globalEip_;
}

void AttachInternetBandwidthGlobalEipRequestBody::setGlobalEip(const AttachInternetBandwidthGlobalEipRequestBody_global_eip& value)
{
    globalEip_ = value;
    globalEipIsSet_ = true;
}

bool AttachInternetBandwidthGlobalEipRequestBody::globalEipIsSet() const
{
    return globalEipIsSet_;
}

void AttachInternetBandwidthGlobalEipRequestBody::unsetglobalEip()
{
    globalEipIsSet_ = false;
}

}
}
}
}
}


