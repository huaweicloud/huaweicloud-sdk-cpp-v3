

#include "huaweicloud/drs/v5/model/DeleteUserJdbcDriverRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DeleteUserJdbcDriverRequest::DeleteUserJdbcDriverRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteUserJdbcDriverRequest::~DeleteUserJdbcDriverRequest() = default;

void DeleteUserJdbcDriverRequest::validate()
{
}

web::json::value DeleteUserJdbcDriverRequest::toJson() const
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
bool DeleteUserJdbcDriverRequest::fromJson(const web::json::value& val)
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
            DeleteUserDriverReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteUserJdbcDriverRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteUserJdbcDriverRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteUserJdbcDriverRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteUserJdbcDriverRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

DeleteUserDriverReq DeleteUserJdbcDriverRequest::getBody() const
{
    return body_;
}

void DeleteUserJdbcDriverRequest::setBody(const DeleteUserDriverReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteUserJdbcDriverRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteUserJdbcDriverRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


