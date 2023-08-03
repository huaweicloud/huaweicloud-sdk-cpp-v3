

#include "huaweicloud/rds/v3/model/BatchDeleteManualBackupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchDeleteManualBackupRequest::BatchDeleteManualBackupRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteManualBackupRequest::~BatchDeleteManualBackupRequest() = default;

void BatchDeleteManualBackupRequest::validate()
{
}

web::json::value BatchDeleteManualBackupRequest::toJson() const
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

bool BatchDeleteManualBackupRequest::fromJson(const web::json::value& val)
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

std::string BatchDeleteManualBackupRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchDeleteManualBackupRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchDeleteManualBackupRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchDeleteManualBackupRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchDeleteBackupRequestBody BatchDeleteManualBackupRequest::getBody() const
{
    return body_;
}

void BatchDeleteManualBackupRequest::setBody(const BatchDeleteBackupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteManualBackupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteManualBackupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


