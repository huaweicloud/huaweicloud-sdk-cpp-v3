

#include "huaweicloud/metastudio/v1/model/ShowVoiceTrainingQuotasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowVoiceTrainingQuotasRequest::ShowVoiceTrainingQuotasRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowVoiceTrainingQuotasRequest::~ShowVoiceTrainingQuotasRequest() = default;

void ShowVoiceTrainingQuotasRequest::validate()
{
}

web::json::value ShowVoiceTrainingQuotasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowVoiceTrainingQuotasRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ShowVoiceTrainingQuotasRequest::getAuthorization() const
{
    return authorization_;
}

void ShowVoiceTrainingQuotasRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowVoiceTrainingQuotasRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowVoiceTrainingQuotasRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowVoiceTrainingQuotasRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowVoiceTrainingQuotasRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowVoiceTrainingQuotasRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowVoiceTrainingQuotasRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

int32_t ShowVoiceTrainingQuotasRequest::getOffset() const
{
    return offset_;
}

void ShowVoiceTrainingQuotasRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowVoiceTrainingQuotasRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowVoiceTrainingQuotasRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowVoiceTrainingQuotasRequest::getLimit() const
{
    return limit_;
}

void ShowVoiceTrainingQuotasRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowVoiceTrainingQuotasRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowVoiceTrainingQuotasRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


