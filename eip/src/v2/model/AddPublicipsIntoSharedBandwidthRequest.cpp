

#include "huaweicloud/eip/v2/model/AddPublicipsIntoSharedBandwidthRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




AddPublicipsIntoSharedBandwidthRequest::AddPublicipsIntoSharedBandwidthRequest()
{
    bandwidthId_ = "";
    bandwidthIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddPublicipsIntoSharedBandwidthRequest::~AddPublicipsIntoSharedBandwidthRequest() = default;

void AddPublicipsIntoSharedBandwidthRequest::validate()
{
}

web::json::value AddPublicipsIntoSharedBandwidthRequest::toJson() const
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
bool AddPublicipsIntoSharedBandwidthRequest::fromJson(const web::json::value& val)
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
            AddPublicipsIntoSharedBandwidthRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddPublicipsIntoSharedBandwidthRequest::getBandwidthId() const
{
    return bandwidthId_;
}

void AddPublicipsIntoSharedBandwidthRequest::setBandwidthId(const std::string& value)
{
    bandwidthId_ = value;
    bandwidthIdIsSet_ = true;
}

bool AddPublicipsIntoSharedBandwidthRequest::bandwidthIdIsSet() const
{
    return bandwidthIdIsSet_;
}

void AddPublicipsIntoSharedBandwidthRequest::unsetbandwidthId()
{
    bandwidthIdIsSet_ = false;
}

AddPublicipsIntoSharedBandwidthRequestBody AddPublicipsIntoSharedBandwidthRequest::getBody() const
{
    return body_;
}

void AddPublicipsIntoSharedBandwidthRequest::setBody(const AddPublicipsIntoSharedBandwidthRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddPublicipsIntoSharedBandwidthRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddPublicipsIntoSharedBandwidthRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


