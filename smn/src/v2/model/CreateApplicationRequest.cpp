

#include "huaweicloud/smn/v2/model/CreateApplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CreateApplicationRequest::CreateApplicationRequest()
{
    bodyIsSet_ = false;
}

CreateApplicationRequest::~CreateApplicationRequest() = default;

void CreateApplicationRequest::validate()
{
}

web::json::value CreateApplicationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateApplicationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateApplicationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateApplicationRequestBody CreateApplicationRequest::getBody() const
{
    return body_;
}

void CreateApplicationRequest::setBody(const CreateApplicationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateApplicationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateApplicationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


