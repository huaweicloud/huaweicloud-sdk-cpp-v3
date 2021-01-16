

#include "huaweicloud/vpc/v2/model/RejectVpcPeeringRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




RejectVpcPeeringRequest::RejectVpcPeeringRequest()
{
    peeringId_ = "";
    peeringIdIsSet_ = false;
}

RejectVpcPeeringRequest::~RejectVpcPeeringRequest() = default;

void RejectVpcPeeringRequest::validate()
{
}

web::json::value RejectVpcPeeringRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(peeringIdIsSet_) {
        val[utility::conversions::to_string_t("peering_id")] = ModelBase::toJson(peeringId_);
    }

    return val;
}

bool RejectVpcPeeringRequest::fromJson(const web::json::value& val)
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


std::string RejectVpcPeeringRequest::getPeeringId() const
{
    return peeringId_;
}

void RejectVpcPeeringRequest::setPeeringId(const std::string& value)
{
    peeringId_ = value;
    peeringIdIsSet_ = true;
}

bool RejectVpcPeeringRequest::peeringIdIsSet() const
{
    return peeringIdIsSet_;
}

void RejectVpcPeeringRequest::unsetpeeringId()
{
    peeringIdIsSet_ = false;
}

}
}
}
}
}


