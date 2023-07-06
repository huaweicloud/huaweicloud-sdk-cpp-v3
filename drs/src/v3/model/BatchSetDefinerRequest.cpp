

#include "huaweicloud/drs/v3/model/BatchSetDefinerRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchSetDefinerRequest::BatchSetDefinerRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchSetDefinerRequest::~BatchSetDefinerRequest() = default;

void BatchSetDefinerRequest::validate()
{
}

web::json::value BatchSetDefinerRequest::toJson() const
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

bool BatchSetDefinerRequest::fromJson(const web::json::value& val)
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
            BatchReplaceDefinerReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string BatchSetDefinerRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchSetDefinerRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchSetDefinerRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchSetDefinerRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchReplaceDefinerReq BatchSetDefinerRequest::getBody() const
{
    return body_;
}

void BatchSetDefinerRequest::setBody(const BatchReplaceDefinerReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchSetDefinerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchSetDefinerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


