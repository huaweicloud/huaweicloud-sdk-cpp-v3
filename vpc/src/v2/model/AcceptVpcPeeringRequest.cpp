

#include "huaweicloud/vpc/v2/model/AcceptVpcPeeringRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




AcceptVpcPeeringRequest::AcceptVpcPeeringRequest()
{
    peeringId_ = "";
    peeringIdIsSet_ = false;
}

AcceptVpcPeeringRequest::~AcceptVpcPeeringRequest() = default;

void AcceptVpcPeeringRequest::validate()
{
}

web::json::value AcceptVpcPeeringRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(peeringIdIsSet_) {
        val[utility::conversions::to_string_t("peering_id")] = ModelBase::toJson(peeringId_);
    }

    return val;
}

bool AcceptVpcPeeringRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string AcceptVpcPeeringRequest::getPeeringId() const
{
    return peeringId_;
}

void AcceptVpcPeeringRequest::setPeeringId(const std::string& value)
{
    peeringId_ = value;
    peeringIdIsSet_ = true;
}

bool AcceptVpcPeeringRequest::peeringIdIsSet() const
{
    return peeringIdIsSet_;
}

void AcceptVpcPeeringRequest::unsetpeeringId()
{
    peeringIdIsSet_ = false;
}

}
}
}
}
}


