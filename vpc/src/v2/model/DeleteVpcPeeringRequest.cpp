

#include "huaweicloud/vpc/v2/model/DeleteVpcPeeringRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




DeleteVpcPeeringRequest::DeleteVpcPeeringRequest()
{
    peeringId_ = "";
    peeringIdIsSet_ = false;
}

DeleteVpcPeeringRequest::~DeleteVpcPeeringRequest() = default;

void DeleteVpcPeeringRequest::validate()
{
}

web::json::value DeleteVpcPeeringRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(peeringIdIsSet_) {
        val[utility::conversions::to_string_t("peering_id")] = ModelBase::toJson(peeringId_);
    }

    return val;
}

bool DeleteVpcPeeringRequest::fromJson(const web::json::value& val)
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

std::string DeleteVpcPeeringRequest::getPeeringId() const
{
    return peeringId_;
}

void DeleteVpcPeeringRequest::setPeeringId(const std::string& value)
{
    peeringId_ = value;
    peeringIdIsSet_ = true;
}

bool DeleteVpcPeeringRequest::peeringIdIsSet() const
{
    return peeringIdIsSet_;
}

void DeleteVpcPeeringRequest::unsetpeeringId()
{
    peeringIdIsSet_ = false;
}

}
}
}
}
}


