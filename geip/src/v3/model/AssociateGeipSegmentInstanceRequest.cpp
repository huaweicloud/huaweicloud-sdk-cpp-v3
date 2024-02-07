

#include "huaweicloud/geip/v3/model/AssociateGeipSegmentInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




AssociateGeipSegmentInstanceRequest::AssociateGeipSegmentInstanceRequest()
{
    globalEipSegmentId_ = "";
    globalEipSegmentIdIsSet_ = false;
    bodyIsSet_ = false;
}

AssociateGeipSegmentInstanceRequest::~AssociateGeipSegmentInstanceRequest() = default;

void AssociateGeipSegmentInstanceRequest::validate()
{
}

web::json::value AssociateGeipSegmentInstanceRequest::toJson() const
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
bool AssociateGeipSegmentInstanceRequest::fromJson(const web::json::value& val)
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
            AssociateInstanceGlobalEipSegmentRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AssociateGeipSegmentInstanceRequest::getGlobalEipSegmentId() const
{
    return globalEipSegmentId_;
}

void AssociateGeipSegmentInstanceRequest::setGlobalEipSegmentId(const std::string& value)
{
    globalEipSegmentId_ = value;
    globalEipSegmentIdIsSet_ = true;
}

bool AssociateGeipSegmentInstanceRequest::globalEipSegmentIdIsSet() const
{
    return globalEipSegmentIdIsSet_;
}

void AssociateGeipSegmentInstanceRequest::unsetglobalEipSegmentId()
{
    globalEipSegmentIdIsSet_ = false;
}

AssociateInstanceGlobalEipSegmentRequestBody AssociateGeipSegmentInstanceRequest::getBody() const
{
    return body_;
}

void AssociateGeipSegmentInstanceRequest::setBody(const AssociateInstanceGlobalEipSegmentRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AssociateGeipSegmentInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AssociateGeipSegmentInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


