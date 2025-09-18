

#include "huaweicloud/ga/v1/model/CreateIpGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateIpGroupRequest::CreateIpGroupRequest()
{
    bodyIsSet_ = false;
}

CreateIpGroupRequest::~CreateIpGroupRequest() = default;

void CreateIpGroupRequest::validate()
{
}

web::json::value CreateIpGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateIpGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateIpGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateIpGroupRequestBody CreateIpGroupRequest::getBody() const
{
    return body_;
}

void CreateIpGroupRequest::setBody(const CreateIpGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateIpGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateIpGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


