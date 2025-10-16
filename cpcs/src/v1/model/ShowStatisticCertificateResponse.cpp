

#include "huaweicloud/cpcs/v1/model/ShowStatisticCertificateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowStatisticCertificateResponse::ShowStatisticCertificateResponse()
{
    metricName_ = "";
    metricNameIsSet_ = false;
    certificateClassifiedCountsIsSet_ = false;
    certificateCountsByServerTypeIsSet_ = false;
}

ShowStatisticCertificateResponse::~ShowStatisticCertificateResponse() = default;

void ShowStatisticCertificateResponse::validate()
{
}

web::json::value ShowStatisticCertificateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metricNameIsSet_) {
        val[utility::conversions::to_string_t("metric_name")] = ModelBase::toJson(metricName_);
    }
    if(certificateClassifiedCountsIsSet_) {
        val[utility::conversions::to_string_t("certificate_classified_counts")] = ModelBase::toJson(certificateClassifiedCounts_);
    }
    if(certificateCountsByServerTypeIsSet_) {
        val[utility::conversions::to_string_t("certificate_counts_by_server_type")] = ModelBase::toJson(certificateCountsByServerType_);
    }

    return val;
}
bool ShowStatisticCertificateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metric_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_classified_counts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_classified_counts"));
        if(!fieldValue.is_null())
        {
            std::vector<VendorCertificateStatistic> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateClassifiedCounts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_counts_by_server_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_counts_by_server_type"));
        if(!fieldValue.is_null())
        {
            std::vector<VendorCertificateStatistic> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateCountsByServerType(refVal);
        }
    }
    return ok;
}


std::string ShowStatisticCertificateResponse::getMetricName() const
{
    return metricName_;
}

void ShowStatisticCertificateResponse::setMetricName(const std::string& value)
{
    metricName_ = value;
    metricNameIsSet_ = true;
}

bool ShowStatisticCertificateResponse::metricNameIsSet() const
{
    return metricNameIsSet_;
}

void ShowStatisticCertificateResponse::unsetmetricName()
{
    metricNameIsSet_ = false;
}

std::vector<VendorCertificateStatistic>& ShowStatisticCertificateResponse::getCertificateClassifiedCounts()
{
    return certificateClassifiedCounts_;
}

void ShowStatisticCertificateResponse::setCertificateClassifiedCounts(const std::vector<VendorCertificateStatistic>& value)
{
    certificateClassifiedCounts_ = value;
    certificateClassifiedCountsIsSet_ = true;
}

bool ShowStatisticCertificateResponse::certificateClassifiedCountsIsSet() const
{
    return certificateClassifiedCountsIsSet_;
}

void ShowStatisticCertificateResponse::unsetcertificateClassifiedCounts()
{
    certificateClassifiedCountsIsSet_ = false;
}

std::vector<VendorCertificateStatistic>& ShowStatisticCertificateResponse::getCertificateCountsByServerType()
{
    return certificateCountsByServerType_;
}

void ShowStatisticCertificateResponse::setCertificateCountsByServerType(const std::vector<VendorCertificateStatistic>& value)
{
    certificateCountsByServerType_ = value;
    certificateCountsByServerTypeIsSet_ = true;
}

bool ShowStatisticCertificateResponse::certificateCountsByServerTypeIsSet() const
{
    return certificateCountsByServerTypeIsSet_;
}

void ShowStatisticCertificateResponse::unsetcertificateCountsByServerType()
{
    certificateCountsByServerTypeIsSet_ = false;
}

}
}
}
}
}


