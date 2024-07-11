

#include "huaweicloud/gaussdbforopengauss/v3/model/ResumePluginExtensionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ResumePluginExtensionsResponse::ResumePluginExtensionsResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

ResumePluginExtensionsResponse::~ResumePluginExtensionsResponse() = default;

void ResumePluginExtensionsResponse::validate()
{
}

web::json::value ResumePluginExtensionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ResumePluginExtensionsResponse::fromJson(const web::json::value& val)
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


std::string ResumePluginExtensionsResponse::getBody() const
{
    return body_;
}

void ResumePluginExtensionsResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResumePluginExtensionsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResumePluginExtensionsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


