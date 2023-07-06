

#include "huaweicloud/ims/v2/model/CreateWholeImageRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




CreateWholeImageRequest::CreateWholeImageRequest()
{
    bodyIsSet_ = false;
}

CreateWholeImageRequest::~CreateWholeImageRequest() = default;

void CreateWholeImageRequest::validate()
{
}

web::json::value CreateWholeImageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateWholeImageRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateWholeImageRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CreateWholeImageRequestBody CreateWholeImageRequest::getBody() const
{
    return body_;
}

void CreateWholeImageRequest::setBody(const CreateWholeImageRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateWholeImageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateWholeImageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


