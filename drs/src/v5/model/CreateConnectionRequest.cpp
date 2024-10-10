

#include "huaweicloud/drs/v5/model/CreateConnectionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CreateConnectionRequest::CreateConnectionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateConnectionRequest::~CreateConnectionRequest() = default;

void CreateConnectionRequest::validate()
{
}

web::json::value CreateConnectionRequest::toJson() const
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
bool CreateConnectionRequest::fromJson(const web::json::value& val)
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
            CreateConnectionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateConnectionRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateConnectionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateConnectionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateConnectionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CreateConnectionReq CreateConnectionRequest::getBody() const
{
    return body_;
}

void CreateConnectionRequest::setBody(const CreateConnectionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateConnectionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateConnectionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


