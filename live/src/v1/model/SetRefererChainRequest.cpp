

#include "huaweicloud/live/v1/model/SetRefererChainRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




SetRefererChainRequest::SetRefererChainRequest()
{
    bodyIsSet_ = false;
}

SetRefererChainRequest::~SetRefererChainRequest() = default;

void SetRefererChainRequest::validate()
{
}

web::json::value SetRefererChainRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetRefererChainRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SetRefererChainInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


SetRefererChainInfo SetRefererChainRequest::getBody() const
{
    return body_;
}

void SetRefererChainRequest::setBody(const SetRefererChainInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetRefererChainRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetRefererChainRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


