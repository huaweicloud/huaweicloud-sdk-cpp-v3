

#include "huaweicloud/drs/v3/model/BatchSetSmnRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchSetSmnRequest::BatchSetSmnRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchSetSmnRequest::~BatchSetSmnRequest() = default;

void BatchSetSmnRequest::validate()
{
}

web::json::value BatchSetSmnRequest::toJson() const
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

bool BatchSetSmnRequest::fromJson(const web::json::value& val)
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
            BatchImportSmnInfoReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string BatchSetSmnRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchSetSmnRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchSetSmnRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchSetSmnRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchImportSmnInfoReq BatchSetSmnRequest::getBody() const
{
    return body_;
}

void BatchSetSmnRequest::setBody(const BatchImportSmnInfoReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchSetSmnRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchSetSmnRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


