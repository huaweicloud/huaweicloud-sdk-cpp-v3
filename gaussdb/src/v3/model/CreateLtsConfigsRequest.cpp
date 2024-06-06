

#include "huaweicloud/gaussdb/v3/model/CreateLtsConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateLtsConfigsRequest::CreateLtsConfigsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateLtsConfigsRequest::~CreateLtsConfigsRequest() = default;

void CreateLtsConfigsRequest::validate()
{
}

web::json::value CreateLtsConfigsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateLtsConfigsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateLtsConfigs refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateLtsConfigsRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateLtsConfigsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateLtsConfigsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateLtsConfigsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CreateLtsConfigs CreateLtsConfigsRequest::getBody() const
{
    return body_;
}

void CreateLtsConfigsRequest::setBody(const CreateLtsConfigs& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateLtsConfigsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateLtsConfigsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


