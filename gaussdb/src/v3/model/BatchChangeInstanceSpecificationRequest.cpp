

#include "huaweicloud/gaussdb/v3/model/BatchChangeInstanceSpecificationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




BatchChangeInstanceSpecificationRequest::BatchChangeInstanceSpecificationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchChangeInstanceSpecificationRequest::~BatchChangeInstanceSpecificationRequest() = default;

void BatchChangeInstanceSpecificationRequest::validate()
{
}

web::json::value BatchChangeInstanceSpecificationRequest::toJson() const
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
bool BatchChangeInstanceSpecificationRequest::fromJson(const web::json::value& val)
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
            BatchChangeInstanceSpecificationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchChangeInstanceSpecificationRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchChangeInstanceSpecificationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchChangeInstanceSpecificationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchChangeInstanceSpecificationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchChangeInstanceSpecificationRequestBody BatchChangeInstanceSpecificationRequest::getBody() const
{
    return body_;
}

void BatchChangeInstanceSpecificationRequest::setBody(const BatchChangeInstanceSpecificationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchChangeInstanceSpecificationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchChangeInstanceSpecificationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


