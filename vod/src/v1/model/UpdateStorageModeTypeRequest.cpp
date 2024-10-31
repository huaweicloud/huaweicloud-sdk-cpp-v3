

#include "huaweicloud/vod/v1/model/UpdateStorageModeTypeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UpdateStorageModeTypeRequest::UpdateStorageModeTypeRequest()
{
    bodyIsSet_ = false;
}

UpdateStorageModeTypeRequest::~UpdateStorageModeTypeRequest() = default;

void UpdateStorageModeTypeRequest::validate()
{
}

web::json::value UpdateStorageModeTypeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateStorageModeTypeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateStorageModeTypeReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


UpdateStorageModeTypeReq UpdateStorageModeTypeRequest::getBody() const
{
    return body_;
}

void UpdateStorageModeTypeRequest::setBody(const UpdateStorageModeTypeReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateStorageModeTypeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateStorageModeTypeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


