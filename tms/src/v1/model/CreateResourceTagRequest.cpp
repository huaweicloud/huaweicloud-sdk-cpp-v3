

#include "huaweicloud/tms/v1/model/CreateResourceTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




CreateResourceTagRequest::CreateResourceTagRequest()
{
    bodyIsSet_ = false;
}

CreateResourceTagRequest::~CreateResourceTagRequest() = default;

void CreateResourceTagRequest::validate()
{
}

web::json::value CreateResourceTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateResourceTagRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ReqCreateTag refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ReqCreateTag CreateResourceTagRequest::getBody() const
{
    return body_;
}

void CreateResourceTagRequest::setBody(const ReqCreateTag& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateResourceTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateResourceTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


