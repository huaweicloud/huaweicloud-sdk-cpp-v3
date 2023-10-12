

#include "huaweicloud/drs/v3/model/BatchChangeDataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchChangeDataRequest::BatchChangeDataRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchChangeDataRequest::~BatchChangeDataRequest() = default;

void BatchChangeDataRequest::validate()
{
}

web::json::value BatchChangeDataRequest::toJson() const
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
bool BatchChangeDataRequest::fromJson(const web::json::value& val)
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
            BatchDataTransformationReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchChangeDataRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchChangeDataRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchChangeDataRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchChangeDataRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchDataTransformationReq BatchChangeDataRequest::getBody() const
{
    return body_;
}

void BatchChangeDataRequest::setBody(const BatchDataTransformationReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchChangeDataRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchChangeDataRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


