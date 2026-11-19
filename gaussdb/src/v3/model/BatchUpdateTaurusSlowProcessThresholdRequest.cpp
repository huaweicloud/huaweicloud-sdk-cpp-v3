

#include "huaweicloud/gaussdb/v3/model/BatchUpdateTaurusSlowProcessThresholdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




BatchUpdateTaurusSlowProcessThresholdRequest::BatchUpdateTaurusSlowProcessThresholdRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchUpdateTaurusSlowProcessThresholdRequest::~BatchUpdateTaurusSlowProcessThresholdRequest() = default;

void BatchUpdateTaurusSlowProcessThresholdRequest::validate()
{
}

web::json::value BatchUpdateTaurusSlowProcessThresholdRequest::toJson() const
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
bool BatchUpdateTaurusSlowProcessThresholdRequest::fromJson(const web::json::value& val)
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
            BatchModifySlowProcessThresholdRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchUpdateTaurusSlowProcessThresholdRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchUpdateTaurusSlowProcessThresholdRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchUpdateTaurusSlowProcessThresholdRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchUpdateTaurusSlowProcessThresholdRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchModifySlowProcessThresholdRequestBody BatchUpdateTaurusSlowProcessThresholdRequest::getBody() const
{
    return body_;
}

void BatchUpdateTaurusSlowProcessThresholdRequest::setBody(const BatchModifySlowProcessThresholdRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateTaurusSlowProcessThresholdRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateTaurusSlowProcessThresholdRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


