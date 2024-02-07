

#include "huaweicloud/geip/v3/model/DetachInternetBandwidthRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




DetachInternetBandwidthRequest::DetachInternetBandwidthRequest()
{
    globalEipId_ = "";
    globalEipIdIsSet_ = false;
    forceUnbind_ = false;
    forceUnbindIsSet_ = false;
}

DetachInternetBandwidthRequest::~DetachInternetBandwidthRequest() = default;

void DetachInternetBandwidthRequest::validate()
{
}

web::json::value DetachInternetBandwidthRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(globalEipIdIsSet_) {
        val[utility::conversions::to_string_t("global_eip_id")] = ModelBase::toJson(globalEipId_);
    }
    if(forceUnbindIsSet_) {
        val[utility::conversions::to_string_t("force_unbind")] = ModelBase::toJson(forceUnbind_);
    }

    return val;
}
bool DetachInternetBandwidthRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("global_eip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEipId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("force_unbind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force_unbind"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForceUnbind(refVal);
        }
    }
    return ok;
}


std::string DetachInternetBandwidthRequest::getGlobalEipId() const
{
    return globalEipId_;
}

void DetachInternetBandwidthRequest::setGlobalEipId(const std::string& value)
{
    globalEipId_ = value;
    globalEipIdIsSet_ = true;
}

bool DetachInternetBandwidthRequest::globalEipIdIsSet() const
{
    return globalEipIdIsSet_;
}

void DetachInternetBandwidthRequest::unsetglobalEipId()
{
    globalEipIdIsSet_ = false;
}

bool DetachInternetBandwidthRequest::isForceUnbind() const
{
    return forceUnbind_;
}

void DetachInternetBandwidthRequest::setForceUnbind(bool value)
{
    forceUnbind_ = value;
    forceUnbindIsSet_ = true;
}

bool DetachInternetBandwidthRequest::forceUnbindIsSet() const
{
    return forceUnbindIsSet_;
}

void DetachInternetBandwidthRequest::unsetforceUnbind()
{
    forceUnbindIsSet_ = false;
}

}
}
}
}
}


