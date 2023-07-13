

#include "huaweicloud/eip/v2/model/UpdateBandwidthRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




UpdateBandwidthRequest::UpdateBandwidthRequest()
{
    bandwidthId_ = "";
    bandwidthIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateBandwidthRequest::~UpdateBandwidthRequest() = default;

void UpdateBandwidthRequest::validate()
{
}

web::json::value UpdateBandwidthRequest::toJson() const
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

bool UpdateBandwidthRequest::fromJson(const web::json::value& val)
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
            UpdateBandwidthRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateBandwidthRequest::getBandwidthId() const
{
    return bandwidthId_;
}

void UpdateBandwidthRequest::setBandwidthId(const std::string& value)
{
    bandwidthId_ = value;
    bandwidthIdIsSet_ = true;
}

bool UpdateBandwidthRequest::bandwidthIdIsSet() const
{
    return bandwidthIdIsSet_;
}

void UpdateBandwidthRequest::unsetbandwidthId()
{
    bandwidthIdIsSet_ = false;
}

UpdateBandwidthRequestBody UpdateBandwidthRequest::getBody() const
{
    return body_;
}

void UpdateBandwidthRequest::setBody(const UpdateBandwidthRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateBandwidthRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateBandwidthRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


