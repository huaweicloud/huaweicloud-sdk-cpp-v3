

#include "huaweicloud/frs/v2/model/DetectLiveFaceByFileRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectLiveFaceByFileRequest::DetectLiveFaceByFileRequest()
{
    bodyIsSet_ = false;
}

DetectLiveFaceByFileRequest::~DetectLiveFaceByFileRequest() = default;

void DetectLiveFaceByFileRequest::validate()
{
}

web::json::value DetectLiveFaceByFileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool DetectLiveFaceByFileRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DetectLiveFaceByFileRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DetectLiveFaceByFileRequestBody DetectLiveFaceByFileRequest::getBody() const
{
    return body_;
}

void DetectLiveFaceByFileRequest::setBody(const DetectLiveFaceByFileRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectLiveFaceByFileRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectLiveFaceByFileRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


