

#include "huaweicloud/eip/v2/model/UpdatePrePaidBandwidthRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




UpdatePrePaidBandwidthRequest::UpdatePrePaidBandwidthRequest()
{
    bandwidthId_ = "";
    bandwidthIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePrePaidBandwidthRequest::~UpdatePrePaidBandwidthRequest() = default;

void UpdatePrePaidBandwidthRequest::validate()
{
}

web::json::value UpdatePrePaidBandwidthRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIdIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_id")] = ModelBase::toJson(bandwidthId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdatePrePaidBandwidthRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdatePrePaidBandwidthRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePrePaidBandwidthRequest::getBandwidthId() const
{
    return bandwidthId_;
}

void UpdatePrePaidBandwidthRequest::setBandwidthId(const std::string& value)
{
    bandwidthId_ = value;
    bandwidthIdIsSet_ = true;
}

bool UpdatePrePaidBandwidthRequest::bandwidthIdIsSet() const
{
    return bandwidthIdIsSet_;
}

void UpdatePrePaidBandwidthRequest::unsetbandwidthId()
{
    bandwidthIdIsSet_ = false;
}

UpdatePrePaidBandwidthRequestBody UpdatePrePaidBandwidthRequest::getBody() const
{
    return body_;
}

void UpdatePrePaidBandwidthRequest::setBody(const UpdatePrePaidBandwidthRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePrePaidBandwidthRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePrePaidBandwidthRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


