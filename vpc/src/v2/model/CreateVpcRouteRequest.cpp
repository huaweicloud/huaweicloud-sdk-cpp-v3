

#include "huaweicloud/vpc/v2/model/CreateVpcRouteRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateVpcRouteRequest::CreateVpcRouteRequest()
{
    bodyIsSet_ = false;
}

CreateVpcRouteRequest::~CreateVpcRouteRequest() = default;

void CreateVpcRouteRequest::validate()
{
}

web::json::value CreateVpcRouteRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateVpcRouteRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateVpcRouteRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateVpcRouteRequestBody CreateVpcRouteRequest::getBody() const
{
    return body_;
}

void CreateVpcRouteRequest::setBody(const CreateVpcRouteRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateVpcRouteRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateVpcRouteRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


