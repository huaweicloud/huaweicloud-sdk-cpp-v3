

#include "huaweicloud/geip/v3/model/CreateGlobalEipSegmentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CreateGlobalEipSegmentRequest::CreateGlobalEipSegmentRequest()
{
    bodyIsSet_ = false;
}

CreateGlobalEipSegmentRequest::~CreateGlobalEipSegmentRequest() = default;

void CreateGlobalEipSegmentRequest::validate()
{
}

web::json::value CreateGlobalEipSegmentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateGlobalEipSegmentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateGlobalEipSegmentRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateGlobalEipSegmentRequestBody CreateGlobalEipSegmentRequest::getBody() const
{
    return body_;
}

void CreateGlobalEipSegmentRequest::setBody(const CreateGlobalEipSegmentRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateGlobalEipSegmentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateGlobalEipSegmentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


