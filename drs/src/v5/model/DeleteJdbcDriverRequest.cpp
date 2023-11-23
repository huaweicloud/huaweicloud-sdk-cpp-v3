

#include "huaweicloud/drs/v5/model/DeleteJdbcDriverRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DeleteJdbcDriverRequest::DeleteJdbcDriverRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteJdbcDriverRequest::~DeleteJdbcDriverRequest() = default;

void DeleteJdbcDriverRequest::validate()
{
}

web::json::value DeleteJdbcDriverRequest::toJson() const
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
bool DeleteJdbcDriverRequest::fromJson(const web::json::value& val)
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
            DeleteDriverReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteJdbcDriverRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteJdbcDriverRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteJdbcDriverRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteJdbcDriverRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

DeleteDriverReq DeleteJdbcDriverRequest::getBody() const
{
    return body_;
}

void DeleteJdbcDriverRequest::setBody(const DeleteDriverReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteJdbcDriverRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteJdbcDriverRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


