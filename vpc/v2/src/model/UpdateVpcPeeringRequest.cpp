

#include "huaweicloud/vpc/model/UpdateVpcPeeringRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdateVpcPeeringRequest::UpdateVpcPeeringRequest()
{
    peeringId_ = "";
    peeringIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateVpcPeeringRequest::~UpdateVpcPeeringRequest() = default;

void UpdateVpcPeeringRequest::validate()
{
}

web::json::value UpdateVpcPeeringRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(peeringIdIsSet_) {
        val[utility::conversions::to_string_t("peering_id")] = ModelBase::toJson(peeringId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateVpcPeeringRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("peering_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("peering_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeeringId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateVpcPeeringRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateVpcPeeringRequest::getPeeringId() const
{
    return peeringId_;
}

void UpdateVpcPeeringRequest::setPeeringId(const std::string& value)
{
    peeringId_ = value;
    peeringIdIsSet_ = true;
}

bool UpdateVpcPeeringRequest::peeringIdIsSet() const
{
    return peeringIdIsSet_;
}

void UpdateVpcPeeringRequest::unsetpeeringId()
{
    peeringIdIsSet_ = false;
}

UpdateVpcPeeringRequestBody UpdateVpcPeeringRequest::getBody() const
{
    return body_;
}

void UpdateVpcPeeringRequest::setBody(const UpdateVpcPeeringRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateVpcPeeringRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateVpcPeeringRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


