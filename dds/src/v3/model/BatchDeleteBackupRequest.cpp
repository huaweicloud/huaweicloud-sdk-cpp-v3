

#include "huaweicloud/dds/v3/model/BatchDeleteBackupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




BatchDeleteBackupRequest::BatchDeleteBackupRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteBackupRequest::~BatchDeleteBackupRequest() = default;

void BatchDeleteBackupRequest::validate()
{
}

web::json::value BatchDeleteBackupRequest::toJson() const
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
bool BatchDeleteBackupRequest::fromJson(const web::json::value& val)
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
            BatchDeleteBackupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteBackupRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchDeleteBackupRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchDeleteBackupRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchDeleteBackupRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchDeleteBackupRequestBody BatchDeleteBackupRequest::getBody() const
{
    return body_;
}

void BatchDeleteBackupRequest::setBody(const BatchDeleteBackupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteBackupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteBackupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


