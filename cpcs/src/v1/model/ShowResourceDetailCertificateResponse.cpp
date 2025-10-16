

#include "huaweicloud/cpcs/v1/model/ShowResourceDetailCertificateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowResourceDetailCertificateResponse::ShowResourceDetailCertificateResponse()
{
    metricName_ = "";
    metricNameIsSet_ = false;
    certificateListIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    expiredCount_ = 0;
    expiredCountIsSet_ = false;
    expiringCount_ = 0;
    expiringCountIsSet_ = false;
}

ShowResourceDetailCertificateResponse::~ShowResourceDetailCertificateResponse() = default;

void ShowResourceDetailCertificateResponse::validate()
{
}

web::json::value ShowResourceDetailCertificateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metricNameIsSet_) {
        val[utility::conversions::to_string_t("metric_name")] = ModelBase::toJson(metricName_);
    }
    if(certificateListIsSet_) {
        val[utility::conversions::to_string_t("certificate_list")] = ModelBase::toJson(certificateList_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(expiredCountIsSet_) {
        val[utility::conversions::to_string_t("expired_count")] = ModelBase::toJson(expiredCount_);
    }
    if(expiringCountIsSet_) {
        val[utility::conversions::to_string_t("expiring_count")] = ModelBase::toJson(expiringCount_);
    }

    return val;
}
bool ShowResourceDetailCertificateResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("certificate_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowResourceDetailCertificateResponseBody_certificate_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expired_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expired_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiredCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiring_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiring_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiringCount(refVal);
        }
    }
    return ok;
}


std::string ShowResourceDetailCertificateResponse::getMetricName() const
{
    return metricName_;
}

void ShowResourceDetailCertificateResponse::setMetricName(const std::string& value)
{
    metricName_ = value;
    metricNameIsSet_ = true;
}

bool ShowResourceDetailCertificateResponse::metricNameIsSet() const
{
    return metricNameIsSet_;
}

void ShowResourceDetailCertificateResponse::unsetmetricName()
{
    metricNameIsSet_ = false;
}

std::vector<ShowResourceDetailCertificateResponseBody_certificate_list>& ShowResourceDetailCertificateResponse::getCertificateList()
{
    return certificateList_;
}

void ShowResourceDetailCertificateResponse::setCertificateList(const std::vector<ShowResourceDetailCertificateResponseBody_certificate_list>& value)
{
    certificateList_ = value;
    certificateListIsSet_ = true;
}

bool ShowResourceDetailCertificateResponse::certificateListIsSet() const
{
    return certificateListIsSet_;
}

void ShowResourceDetailCertificateResponse::unsetcertificateList()
{
    certificateListIsSet_ = false;
}

int32_t ShowResourceDetailCertificateResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowResourceDetailCertificateResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowResourceDetailCertificateResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowResourceDetailCertificateResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

int32_t ShowResourceDetailCertificateResponse::getExpiredCount() const
{
    return expiredCount_;
}

void ShowResourceDetailCertificateResponse::setExpiredCount(int32_t value)
{
    expiredCount_ = value;
    expiredCountIsSet_ = true;
}

bool ShowResourceDetailCertificateResponse::expiredCountIsSet() const
{
    return expiredCountIsSet_;
}

void ShowResourceDetailCertificateResponse::unsetexpiredCount()
{
    expiredCountIsSet_ = false;
}

int32_t ShowResourceDetailCertificateResponse::getExpiringCount() const
{
    return expiringCount_;
}

void ShowResourceDetailCertificateResponse::setExpiringCount(int32_t value)
{
    expiringCount_ = value;
    expiringCountIsSet_ = true;
}

bool ShowResourceDetailCertificateResponse::expiringCountIsSet() const
{
    return expiringCountIsSet_;
}

void ShowResourceDetailCertificateResponse::unsetexpiringCount()
{
    expiringCountIsSet_ = false;
}

}
}
}
}
}


