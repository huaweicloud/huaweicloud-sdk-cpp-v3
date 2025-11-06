

#include "huaweicloud/codeartsrepo/v4/model/UpdateHttpsPasswordSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateHttpsPasswordSettingRequest::UpdateHttpsPasswordSettingRequest()
{
    bodyIsSet_ = false;
}

UpdateHttpsPasswordSettingRequest::~UpdateHttpsPasswordSettingRequest() = default;

void UpdateHttpsPasswordSettingRequest::validate()
{
}

web::json::value UpdateHttpsPasswordSettingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateHttpsPasswordSettingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateHttpsPasswordSetting refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


UpdateHttpsPasswordSetting UpdateHttpsPasswordSettingRequest::getBody() const
{
    return body_;
}

void UpdateHttpsPasswordSettingRequest::setBody(const UpdateHttpsPasswordSetting& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateHttpsPasswordSettingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateHttpsPasswordSettingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


