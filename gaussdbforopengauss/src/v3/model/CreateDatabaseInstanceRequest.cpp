

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateDatabaseInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateDatabaseInstanceRequest::CreateDatabaseInstanceRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDatabaseInstanceRequest::~CreateDatabaseInstanceRequest() = default;

void CreateDatabaseInstanceRequest::validate()
{
}

web::json::value CreateDatabaseInstanceRequest::toJson() const
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
bool CreateDatabaseInstanceRequest::fromJson(const web::json::value& val)
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
            CreateDatabaseInstanceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDatabaseInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateDatabaseInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateDatabaseInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateDatabaseInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CreateDatabaseInstanceRequestBody CreateDatabaseInstanceRequest::getBody() const
{
    return body_;
}

void CreateDatabaseInstanceRequest::setBody(const CreateDatabaseInstanceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDatabaseInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDatabaseInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


