

#include "huaweicloud/codeartsrepo/v4/model/UpdateHttpsPasswordSettingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateHttpsPasswordSettingResponse::UpdateHttpsPasswordSettingResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

UpdateHttpsPasswordSettingResponse::~UpdateHttpsPasswordSettingResponse() = default;

void UpdateHttpsPasswordSettingResponse::validate()
{
}

web::json::value UpdateHttpsPasswordSettingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateHttpsPasswordSettingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateHttpsPasswordSettingResponse::getBody() const
{
    return body_;
}

void UpdateHttpsPasswordSettingResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateHttpsPasswordSettingResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateHttpsPasswordSettingResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


