

#include "huaweicloud/vpc/model/CreateVpcPeeringRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateVpcPeeringRequest::CreateVpcPeeringRequest()
{
    bodyIsSet_ = false;
}

CreateVpcPeeringRequest::~CreateVpcPeeringRequest() = default;

void CreateVpcPeeringRequest::validate()
{
}

web::json::value CreateVpcPeeringRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateVpcPeeringRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateVpcPeeringRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateVpcPeeringRequestBody CreateVpcPeeringRequest::getBody() const
{
    return body_;
}

void CreateVpcPeeringRequest::setBody(const CreateVpcPeeringRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateVpcPeeringRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateVpcPeeringRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


