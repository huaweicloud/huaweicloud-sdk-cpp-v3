

#include "huaweicloud/vod/v1/model/CreateRealTimeClipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateRealTimeClipRequest::CreateRealTimeClipRequest()
{
    bodyIsSet_ = false;
}

CreateRealTimeClipRequest::~CreateRealTimeClipRequest() = default;

void CreateRealTimeClipRequest::validate()
{
}

web::json::value CreateRealTimeClipRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateRealTimeClipRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateRealTimeClipRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateRealTimeClipRequestBody CreateRealTimeClipRequest::getBody() const
{
    return body_;
}

void CreateRealTimeClipRequest::setBody(const CreateRealTimeClipRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRealTimeClipRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRealTimeClipRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


