

#include "huaweicloud/evs/v2/model/RetypeVolumeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




RetypeVolumeRequestBody::RetypeVolumeRequestBody()
{
    bssParamIsSet_ = false;
    osRetypeIsSet_ = false;
}

RetypeVolumeRequestBody::~RetypeVolumeRequestBody() = default;

void RetypeVolumeRequestBody::validate()
{
}

web::json::value RetypeVolumeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bssParamIsSet_) {
        val[utility::conversions::to_string_t("bssParam")] = ModelBase::toJson(bssParam_);
    }
    if(osRetypeIsSet_) {
        val[utility::conversions::to_string_t("os-retype")] = ModelBase::toJson(osRetype_);
    }

    return val;
}
bool RetypeVolumeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bssParam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bssParam"));
        if(!fieldValue.is_null())
        {
            BssParamForRetypeVolume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBssParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os-retype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-retype"));
        if(!fieldValue.is_null())
        {
            RetypeVolume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsRetype(refVal);
        }
    }
    return ok;
}


BssParamForRetypeVolume RetypeVolumeRequestBody::getBssParam() const
{
    return bssParam_;
}

void RetypeVolumeRequestBody::setBssParam(const BssParamForRetypeVolume& value)
{
    bssParam_ = value;
    bssParamIsSet_ = true;
}

bool RetypeVolumeRequestBody::bssParamIsSet() const
{
    return bssParamIsSet_;
}

void RetypeVolumeRequestBody::unsetbssParam()
{
    bssParamIsSet_ = false;
}

RetypeVolume RetypeVolumeRequestBody::getOsRetype() const
{
    return osRetype_;
}

void RetypeVolumeRequestBody::setOsRetype(const RetypeVolume& value)
{
    osRetype_ = value;
    osRetypeIsSet_ = true;
}

bool RetypeVolumeRequestBody::osRetypeIsSet() const
{
    return osRetypeIsSet_;
}

void RetypeVolumeRequestBody::unsetosRetype()
{
    osRetypeIsSet_ = false;
}

}
}
}
}
}


