

#include "huaweicloud/frs/v2/model/DetectLiveFaceByBase64Request.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectLiveFaceByBase64Request::DetectLiveFaceByBase64Request()
{
    bodyIsSet_ = false;
}

DetectLiveFaceByBase64Request::~DetectLiveFaceByBase64Request() = default;

void DetectLiveFaceByBase64Request::validate()
{
}

web::json::value DetectLiveFaceByBase64Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool DetectLiveFaceByBase64Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            LiveDetectFaceBase64Req refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


LiveDetectFaceBase64Req DetectLiveFaceByBase64Request::getBody() const
{
    return body_;
}

void DetectLiveFaceByBase64Request::setBody(const LiveDetectFaceBase64Req& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectLiveFaceByBase64Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectLiveFaceByBase64Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


