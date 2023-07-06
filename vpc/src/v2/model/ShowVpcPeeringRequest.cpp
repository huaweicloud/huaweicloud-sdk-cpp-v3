

#include "huaweicloud/vpc/v2/model/ShowVpcPeeringRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowVpcPeeringRequest::ShowVpcPeeringRequest()
{
    peeringId_ = "";
    peeringIdIsSet_ = false;
}

ShowVpcPeeringRequest::~ShowVpcPeeringRequest() = default;

void ShowVpcPeeringRequest::validate()
{
}

web::json::value ShowVpcPeeringRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(peeringIdIsSet_) {
        val[utility::conversions::to_string_t("peering_id")] = ModelBase::toJson(peeringId_);
    }

    return val;
}

bool ShowVpcPeeringRequest::fromJson(const web::json::value& val)
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

std::string ShowVpcPeeringRequest::getPeeringId() const
{
    return peeringId_;
}

void ShowVpcPeeringRequest::setPeeringId(const std::string& value)
{
    peeringId_ = value;
    peeringIdIsSet_ = true;
}

bool ShowVpcPeeringRequest::peeringIdIsSet() const
{
    return peeringIdIsSet_;
}

void ShowVpcPeeringRequest::unsetpeeringId()
{
    peeringIdIsSet_ = false;
}

}
}
}
}
}


