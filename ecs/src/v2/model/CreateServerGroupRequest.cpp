

#include "huaweicloud/ecs/v2/model/CreateServerGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




CreateServerGroupRequest::CreateServerGroupRequest()
{
    bodyIsSet_ = false;
}

CreateServerGroupRequest::~CreateServerGroupRequest() = default;

void CreateServerGroupRequest::validate()
{
}

web::json::value CreateServerGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateServerGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateServerGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateServerGroupRequestBody CreateServerGroupRequest::getBody() const
{
    return body_;
}

void CreateServerGroupRequest::setBody(const CreateServerGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateServerGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateServerGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


