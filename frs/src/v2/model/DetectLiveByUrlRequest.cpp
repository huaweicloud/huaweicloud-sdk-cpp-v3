

#include "huaweicloud/frs/v2/model/DetectLiveByUrlRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectLiveByUrlRequest::DetectLiveByUrlRequest()
{
    bodyIsSet_ = false;
}

DetectLiveByUrlRequest::~DetectLiveByUrlRequest() = default;

void DetectLiveByUrlRequest::validate()
{
}

web::json::value DetectLiveByUrlRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool DetectLiveByUrlRequest::fromJson(const web::json::value& val)
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


LiveDetectUrlReq DetectLiveByUrlRequest::getBody() const
{
    return body_;
}

void DetectLiveByUrlRequest::setBody(const LiveDetectUrlReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectLiveByUrlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectLiveByUrlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


