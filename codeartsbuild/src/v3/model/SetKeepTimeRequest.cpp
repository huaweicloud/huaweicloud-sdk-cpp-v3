

#include "huaweicloud/codeartsbuild/v3/model/SetKeepTimeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




SetKeepTimeRequest::SetKeepTimeRequest()
{
    bodyIsSet_ = false;
}

SetKeepTimeRequest::~SetKeepTimeRequest() = default;

void SetKeepTimeRequest::validate()
{
}

web::json::value SetKeepTimeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetKeepTimeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SetKeepTimeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


SetKeepTimeRequestBody SetKeepTimeRequest::getBody() const
{
    return body_;
}

void SetKeepTimeRequest::setBody(const SetKeepTimeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetKeepTimeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetKeepTimeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


