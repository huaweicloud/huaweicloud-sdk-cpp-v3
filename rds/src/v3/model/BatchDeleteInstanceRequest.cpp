

#include "huaweicloud/rds/v3/model/BatchDeleteInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchDeleteInstanceRequest::BatchDeleteInstanceRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteInstanceRequest::~BatchDeleteInstanceRequest() = default;

void BatchDeleteInstanceRequest::validate()
{
}

web::json::value BatchDeleteInstanceRequest::toJson() const
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
bool BatchDeleteInstanceRequest::fromJson(const web::json::value& val)
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
            MultipleDeleteInsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchDeleteInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchDeleteInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchDeleteInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

MultipleDeleteInsReq BatchDeleteInstanceRequest::getBody() const
{
    return body_;
}

void BatchDeleteInstanceRequest::setBody(const MultipleDeleteInsReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


