

#include "huaweicloud/geip/v3/model/UpdateGlobalEipSegmentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




UpdateGlobalEipSegmentRequest::UpdateGlobalEipSegmentRequest()
{
    globalEipSegmentId_ = "";
    globalEipSegmentIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateGlobalEipSegmentRequest::~UpdateGlobalEipSegmentRequest() = default;

void UpdateGlobalEipSegmentRequest::validate()
{
}

web::json::value UpdateGlobalEipSegmentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(globalEipSegmentIdIsSet_) {
        val[utility::conversions::to_string_t("global_eip_segment_id")] = ModelBase::toJson(globalEipSegmentId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateGlobalEipSegmentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("global_eip_segment_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip_segment_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEipSegmentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateGlobalEipSegmentRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateGlobalEipSegmentRequest::getGlobalEipSegmentId() const
{
    return globalEipSegmentId_;
}

void UpdateGlobalEipSegmentRequest::setGlobalEipSegmentId(const std::string& value)
{
    globalEipSegmentId_ = value;
    globalEipSegmentIdIsSet_ = true;
}

bool UpdateGlobalEipSegmentRequest::globalEipSegmentIdIsSet() const
{
    return globalEipSegmentIdIsSet_;
}

void UpdateGlobalEipSegmentRequest::unsetglobalEipSegmentId()
{
    globalEipSegmentIdIsSet_ = false;
}

UpdateGlobalEipSegmentRequestBody UpdateGlobalEipSegmentRequest::getBody() const
{
    return body_;
}

void UpdateGlobalEipSegmentRequest::setBody(const UpdateGlobalEipSegmentRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateGlobalEipSegmentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateGlobalEipSegmentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


