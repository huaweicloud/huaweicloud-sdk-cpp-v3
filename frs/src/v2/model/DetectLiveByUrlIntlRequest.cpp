

#include "huaweicloud/frs/v2/model/DetectLiveByUrlIntlRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectLiveByUrlIntlRequest::DetectLiveByUrlIntlRequest()
{
    bodyIsSet_ = false;
}

DetectLiveByUrlIntlRequest::~DetectLiveByUrlIntlRequest() = default;

void DetectLiveByUrlIntlRequest::validate()
{
}

web::json::value DetectLiveByUrlIntlRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool DetectLiveByUrlIntlRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            LiveDetectUrlReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


LiveDetectUrlReq DetectLiveByUrlIntlRequest::getBody() const
{
    return body_;
}

void DetectLiveByUrlIntlRequest::setBody(const LiveDetectUrlReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectLiveByUrlIntlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectLiveByUrlIntlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


