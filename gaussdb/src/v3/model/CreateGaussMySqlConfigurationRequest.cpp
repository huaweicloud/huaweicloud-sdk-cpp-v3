

#include "huaweicloud/gaussdb/v3/model/CreateGaussMySqlConfigurationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateGaussMySqlConfigurationRequest::CreateGaussMySqlConfigurationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateGaussMySqlConfigurationRequest::~CreateGaussMySqlConfigurationRequest() = default;

void CreateGaussMySqlConfigurationRequest::validate()
{
}

web::json::value CreateGaussMySqlConfigurationRequest::toJson() const
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

bool CreateGaussMySqlConfigurationRequest::fromJson(const web::json::value& val)
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
            CreateConfigurationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateGaussMySqlConfigurationRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateGaussMySqlConfigurationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateGaussMySqlConfigurationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateGaussMySqlConfigurationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CreateConfigurationRequestBody CreateGaussMySqlConfigurationRequest::getBody() const
{
    return body_;
}

void CreateGaussMySqlConfigurationRequest::setBody(const CreateConfigurationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateGaussMySqlConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateGaussMySqlConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


