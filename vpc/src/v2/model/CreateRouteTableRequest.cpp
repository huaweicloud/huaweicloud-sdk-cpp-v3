

#include "huaweicloud/vpc/v2/model/CreateRouteTableRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateRouteTableRequest::CreateRouteTableRequest()
{
    bodyIsSet_ = false;
}

CreateRouteTableRequest::~CreateRouteTableRequest() = default;

void CreateRouteTableRequest::validate()
{
}

web::json::value CreateRouteTableRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateRouteTableRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateRoutetableReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateRoutetableReqBody CreateRouteTableRequest::getBody() const
{
    return body_;
}

void CreateRouteTableRequest::setBody(const CreateRoutetableReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRouteTableRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRouteTableRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


