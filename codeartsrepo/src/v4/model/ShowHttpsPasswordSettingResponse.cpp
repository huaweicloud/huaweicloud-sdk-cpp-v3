

#include "huaweicloud/codeartsrepo/v4/model/ShowHttpsPasswordSettingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowHttpsPasswordSettingResponse::ShowHttpsPasswordSettingResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

ShowHttpsPasswordSettingResponse::~ShowHttpsPasswordSettingResponse() = default;

void ShowHttpsPasswordSettingResponse::validate()
{
}

web::json::value ShowHttpsPasswordSettingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowHttpsPasswordSettingResponse::fromJson(const web::json::value& val)
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


std::string ShowHttpsPasswordSettingResponse::getBody() const
{
    return body_;
}

void ShowHttpsPasswordSettingResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowHttpsPasswordSettingResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowHttpsPasswordSettingResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


