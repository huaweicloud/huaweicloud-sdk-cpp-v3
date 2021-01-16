

#include "huaweicloud/ims/v2/model/CreateDataImageRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




CreateDataImageRequest::CreateDataImageRequest()
{
    bodyIsSet_ = false;
}

CreateDataImageRequest::~CreateDataImageRequest() = default;

void CreateDataImageRequest::validate()
{
}

web::json::value CreateDataImageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateDataImageRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateDataImageRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateDataImageRequestBody CreateDataImageRequest::getBody() const
{
    return body_;
}

void CreateDataImageRequest::setBody(const CreateDataImageRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDataImageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDataImageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


