

#include "huaweicloud/frs/v2/model/CompareFaceByFileRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




CompareFaceByFileRequest::CompareFaceByFileRequest()
{
    bodyIsSet_ = false;
}

CompareFaceByFileRequest::~CompareFaceByFileRequest() = default;

void CompareFaceByFileRequest::validate()
{
}

web::json::value CompareFaceByFileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CompareFaceByFileRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CompareFaceByFileRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CompareFaceByFileRequestBody CompareFaceByFileRequest::getBody() const
{
    return body_;
}

void CompareFaceByFileRequest::setBody(const CompareFaceByFileRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CompareFaceByFileRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CompareFaceByFileRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


