

#include "huaweicloud/vpc/v2/model/CreateSubnetRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateSubnetRequest::CreateSubnetRequest()
{
    bodyIsSet_ = false;
}

CreateSubnetRequest::~CreateSubnetRequest() = default;

void CreateSubnetRequest::validate()
{
}

web::json::value CreateSubnetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateSubnetRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateSubnetRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CreateSubnetRequestBody CreateSubnetRequest::getBody() const
{
    return body_;
}

void CreateSubnetRequest::setBody(const CreateSubnetRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSubnetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSubnetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


