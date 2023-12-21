

#include "huaweicloud/vod/v1/model/UpdateStorageModeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UpdateStorageModeRequest::UpdateStorageModeRequest()
{
    bodyIsSet_ = false;
}

UpdateStorageModeRequest::~UpdateStorageModeRequest() = default;

void UpdateStorageModeRequest::validate()
{
}

web::json::value UpdateStorageModeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateStorageModeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateStorageModeReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


UpdateStorageModeReq UpdateStorageModeRequest::getBody() const
{
    return body_;
}

void UpdateStorageModeRequest::setBody(const UpdateStorageModeReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateStorageModeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateStorageModeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


