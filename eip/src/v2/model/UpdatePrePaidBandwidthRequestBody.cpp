

#include "huaweicloud/eip/v2/model/UpdatePrePaidBandwidthRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




UpdatePrePaidBandwidthRequestBody::UpdatePrePaidBandwidthRequestBody()
{
    bandwidthIsSet_ = false;
    extendParamIsSet_ = false;
}

UpdatePrePaidBandwidthRequestBody::~UpdatePrePaidBandwidthRequestBody() = default;

void UpdatePrePaidBandwidthRequestBody::validate()
{
}

web::json::value UpdatePrePaidBandwidthRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }
    if(extendParamIsSet_) {
        val[utility::conversions::to_string_t("extendParam")] = ModelBase::toJson(extendParam_);
    }

    return val;
}

bool UpdatePrePaidBandwidthRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            UpdatePrePaidBandwidthOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extendParam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendParam"));
        if(!fieldValue.is_null())
        {
            UpdatePrePaidBandwidthExtendParamOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendParam(refVal);
        }
    }
    return ok;
}


UpdatePrePaidBandwidthOption UpdatePrePaidBandwidthRequestBody::getBandwidth() const
{
    return bandwidth_;
}

void UpdatePrePaidBandwidthRequestBody::setBandwidth(const UpdatePrePaidBandwidthOption& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool UpdatePrePaidBandwidthRequestBody::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void UpdatePrePaidBandwidthRequestBody::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

UpdatePrePaidBandwidthExtendParamOption UpdatePrePaidBandwidthRequestBody::getExtendParam() const
{
    return extendParam_;
}

void UpdatePrePaidBandwidthRequestBody::setExtendParam(const UpdatePrePaidBandwidthExtendParamOption& value)
{
    extendParam_ = value;
    extendParamIsSet_ = true;
}

bool UpdatePrePaidBandwidthRequestBody::extendParamIsSet() const
{
    return extendParamIsSet_;
}

void UpdatePrePaidBandwidthRequestBody::unsetextendParam()
{
    extendParamIsSet_ = false;
}

}
}
}
}
}


