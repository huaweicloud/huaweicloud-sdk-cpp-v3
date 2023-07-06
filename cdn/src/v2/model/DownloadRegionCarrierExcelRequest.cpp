

#include "huaweicloud/cdn/v2/model/DownloadRegionCarrierExcelRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




DownloadRegionCarrierExcelRequest::DownloadRegionCarrierExcelRequest()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    interval_ = 0L;
    intervalIsSet_ = false;
    country_ = "";
    countryIsSet_ = false;
    excelLanguage_ = "";
    excelLanguageIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    excelType_ = "";
    excelTypeIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    carrier_ = "";
    carrierIsSet_ = false;
}

DownloadRegionCarrierExcelRequest::~DownloadRegionCarrierExcelRequest() = default;

void DownloadRegionCarrierExcelRequest::validate()
{
}

web::json::value DownloadRegionCarrierExcelRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(intervalIsSet_) {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(interval_);
    }
    if(countryIsSet_) {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(country_);
    }
    if(excelLanguageIsSet_) {
        val[utility::conversions::to_string_t("excel_language")] = ModelBase::toJson(excelLanguage_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(excelTypeIsSet_) {
        val[utility::conversions::to_string_t("excel_type")] = ModelBase::toJson(excelType_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(carrierIsSet_) {
        val[utility::conversions::to_string_t("carrier")] = ModelBase::toJson(carrier_);
    }

    return val;
}

bool DownloadRegionCarrierExcelRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interval"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("country"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("country"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCountry(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("excel_language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("excel_language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcelLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("excel_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("excel_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcelType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("carrier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("carrier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCarrier(refVal);
        }
    }
    return ok;
}

int64_t DownloadRegionCarrierExcelRequest::getStartTime() const
{
    return startTime_;
}

void DownloadRegionCarrierExcelRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool DownloadRegionCarrierExcelRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void DownloadRegionCarrierExcelRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t DownloadRegionCarrierExcelRequest::getEndTime() const
{
    return endTime_;
}

void DownloadRegionCarrierExcelRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool DownloadRegionCarrierExcelRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void DownloadRegionCarrierExcelRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string DownloadRegionCarrierExcelRequest::getDomainName() const
{
    return domainName_;
}

void DownloadRegionCarrierExcelRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool DownloadRegionCarrierExcelRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void DownloadRegionCarrierExcelRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

int64_t DownloadRegionCarrierExcelRequest::getInterval() const
{
    return interval_;
}

void DownloadRegionCarrierExcelRequest::setInterval(int64_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool DownloadRegionCarrierExcelRequest::intervalIsSet() const
{
    return intervalIsSet_;
}

void DownloadRegionCarrierExcelRequest::unsetinterval()
{
    intervalIsSet_ = false;
}

std::string DownloadRegionCarrierExcelRequest::getCountry() const
{
    return country_;
}

void DownloadRegionCarrierExcelRequest::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool DownloadRegionCarrierExcelRequest::countryIsSet() const
{
    return countryIsSet_;
}

void DownloadRegionCarrierExcelRequest::unsetcountry()
{
    countryIsSet_ = false;
}

std::string DownloadRegionCarrierExcelRequest::getExcelLanguage() const
{
    return excelLanguage_;
}

void DownloadRegionCarrierExcelRequest::setExcelLanguage(const std::string& value)
{
    excelLanguage_ = value;
    excelLanguageIsSet_ = true;
}

bool DownloadRegionCarrierExcelRequest::excelLanguageIsSet() const
{
    return excelLanguageIsSet_;
}

void DownloadRegionCarrierExcelRequest::unsetexcelLanguage()
{
    excelLanguageIsSet_ = false;
}

std::string DownloadRegionCarrierExcelRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DownloadRegionCarrierExcelRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DownloadRegionCarrierExcelRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DownloadRegionCarrierExcelRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string DownloadRegionCarrierExcelRequest::getExcelType() const
{
    return excelType_;
}

void DownloadRegionCarrierExcelRequest::setExcelType(const std::string& value)
{
    excelType_ = value;
    excelTypeIsSet_ = true;
}

bool DownloadRegionCarrierExcelRequest::excelTypeIsSet() const
{
    return excelTypeIsSet_;
}

void DownloadRegionCarrierExcelRequest::unsetexcelType()
{
    excelTypeIsSet_ = false;
}

std::string DownloadRegionCarrierExcelRequest::getRegion() const
{
    return region_;
}

void DownloadRegionCarrierExcelRequest::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool DownloadRegionCarrierExcelRequest::regionIsSet() const
{
    return regionIsSet_;
}

void DownloadRegionCarrierExcelRequest::unsetregion()
{
    regionIsSet_ = false;
}

std::string DownloadRegionCarrierExcelRequest::getCarrier() const
{
    return carrier_;
}

void DownloadRegionCarrierExcelRequest::setCarrier(const std::string& value)
{
    carrier_ = value;
    carrierIsSet_ = true;
}

bool DownloadRegionCarrierExcelRequest::carrierIsSet() const
{
    return carrierIsSet_;
}

void DownloadRegionCarrierExcelRequest::unsetcarrier()
{
    carrierIsSet_ = false;
}

}
}
}
}
}


