

#include "huaweicloud/gaussdb/v3/model/ShowIntelligentDiagnosisInstanceInfosPerMetricRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowIntelligentDiagnosisInstanceInfosPerMetricRequest::ShowIntelligentDiagnosisInstanceInfosPerMetricRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    metricName_ = "";
    metricNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowIntelligentDiagnosisInstanceInfosPerMetricRequest::~ShowIntelligentDiagnosisInstanceInfosPerMetricRequest() = default;

void ShowIntelligentDiagnosisInstanceInfosPerMetricRequest::validate()
{
}

web::json::value ShowIntelligentDiagnosisInstanceInfosPerMetricRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(metricNameIsSet_) {
        val[utility::conversions::to_string_t("metric_name")] = ModelBase::toJson(metricName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowIntelligentDiagnosisInstanceInfosPerMetricRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("metric_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricName(refVal);
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


std::string ShowIntelligentDiagnosisInstanceInfosPerMetricRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowIntelligentDiagnosisInstanceInfosPerMetricRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowIntelligentDiagnosisInstanceInfosPerMetricRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowIntelligentDiagnosisInstanceInfosPerMetricRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowIntelligentDiagnosisInstanceInfosPerMetricRequest::getMetricName() const
{
    return metricName_;
}

void ShowIntelligentDiagnosisInstanceInfosPerMetricRequest::setMetricName(const std::string& value)
{
    metricName_ = value;
    metricNameIsSet_ = true;
}

bool ShowIntelligentDiagnosisInstanceInfosPerMetricRequest::metricNameIsSet() const
{
    return metricNameIsSet_;
}

void ShowIntelligentDiagnosisInstanceInfosPerMetricRequest::unsetmetricName()
{
    metricNameIsSet_ = false;
}

int32_t ShowIntelligentDiagnosisInstanceInfosPerMetricRequest::getOffset() const
{
    return offset_;
}

void ShowIntelligentDiagnosisInstanceInfosPerMetricRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowIntelligentDiagnosisInstanceInfosPerMetricRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowIntelligentDiagnosisInstanceInfosPerMetricRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowIntelligentDiagnosisInstanceInfosPerMetricRequest::getLimit() const
{
    return limit_;
}

void ShowIntelligentDiagnosisInstanceInfosPerMetricRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowIntelligentDiagnosisInstanceInfosPerMetricRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowIntelligentDiagnosisInstanceInfosPerMetricRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


