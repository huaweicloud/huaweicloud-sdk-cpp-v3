

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateManualBackupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateManualBackupRequest::CreateManualBackupRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateManualBackupRequest::~CreateManualBackupRequest() = default;

void CreateManualBackupRequest::validate()
{
}

web::json::value CreateManualBackupRequest::toJson() const
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

bool CreateManualBackupRequest::fromJson(const web::json::value& val)
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
            CreateManualBackupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateManualBackupRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateManualBackupRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateManualBackupRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateManualBackupRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CreateManualBackupRequestBody CreateManualBackupRequest::getBody() const
{
    return body_;
}

void CreateManualBackupRequest::setBody(const CreateManualBackupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateManualBackupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateManualBackupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


