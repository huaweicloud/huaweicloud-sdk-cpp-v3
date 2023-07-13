

#include "huaweicloud/vpc/v2/model/CreateVpcRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateVpcRequest::CreateVpcRequest()
{
    bodyIsSet_ = false;
}

CreateVpcRequest::~CreateVpcRequest() = default;

void CreateVpcRequest::validate()
{
}

web::json::value CreateVpcRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateVpcRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateVpcRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CreateVpcRequestBody CreateVpcRequest::getBody() const
{
    return body_;
}

void CreateVpcRequest::setBody(const CreateVpcRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateVpcRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateVpcRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


