

#include "huaweicloud/cdn/v2/model/DownloadStatisticsExcelRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




DownloadStatisticsExcelRequest::DownloadStatisticsExcelRequest()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    excelLanguage_ = "";
    excelLanguageIsSet_ = false;
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
    interval_ = 0L;
    intervalIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    excelType_ = "";
    excelTypeIsSet_ = false;
}

DownloadStatisticsExcelRequest::~DownloadStatisticsExcelRequest() = default;

void DownloadStatisticsExcelRequest::validate()
{
}

web::json::value DownloadStatisticsExcelRequest::toJson() const
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
    if(excelLanguageIsSet_) {
        val[utility::conversions::to_string_t("excel_language")] = ModelBase::toJson(excelLanguage_);
    }
    if(serviceAreaIsSet_) {
        val[utility::conversions::to_string_t("service_area")] = ModelBase::toJson(serviceArea_);
    }
    if(intervalIsSet_) {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(interval_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(excelTypeIsSet_) {
        val[utility::conversions::to_string_t("excel_type")] = ModelBase::toJson(excelType_);
    }

    return val;
}
bool DownloadStatisticsExcelRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("excel_language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("excel_language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcelLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_area"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceArea(refVal);
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
    return ok;
}


int64_t DownloadStatisticsExcelRequest::getStartTime() const
{
    return startTime_;
}

void DownloadStatisticsExcelRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool DownloadStatisticsExcelRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void DownloadStatisticsExcelRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t DownloadStatisticsExcelRequest::getEndTime() const
{
    return endTime_;
}

void DownloadStatisticsExcelRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool DownloadStatisticsExcelRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void DownloadStatisticsExcelRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string DownloadStatisticsExcelRequest::getDomainName() const
{
    return domainName_;
}

void DownloadStatisticsExcelRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool DownloadStatisticsExcelRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void DownloadStatisticsExcelRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string DownloadStatisticsExcelRequest::getExcelLanguage() const
{
    return excelLanguage_;
}

void DownloadStatisticsExcelRequest::setExcelLanguage(const std::string& value)
{
    excelLanguage_ = value;
    excelLanguageIsSet_ = true;
}

bool DownloadStatisticsExcelRequest::excelLanguageIsSet() const
{
    return excelLanguageIsSet_;
}

void DownloadStatisticsExcelRequest::unsetexcelLanguage()
{
    excelLanguageIsSet_ = false;
}

std::string DownloadStatisticsExcelRequest::getServiceArea() const
{
    return serviceArea_;
}

void DownloadStatisticsExcelRequest::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool DownloadStatisticsExcelRequest::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void DownloadStatisticsExcelRequest::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

int64_t DownloadStatisticsExcelRequest::getInterval() const
{
    return interval_;
}

void DownloadStatisticsExcelRequest::setInterval(int64_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool DownloadStatisticsExcelRequest::intervalIsSet() const
{
    return intervalIsSet_;
}

void DownloadStatisticsExcelRequest::unsetinterval()
{
    intervalIsSet_ = false;
}

std::string DownloadStatisticsExcelRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DownloadStatisticsExcelRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DownloadStatisticsExcelRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DownloadStatisticsExcelRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string DownloadStatisticsExcelRequest::getExcelType() const
{
    return excelType_;
}

void DownloadStatisticsExcelRequest::setExcelType(const std::string& value)
{
    excelType_ = value;
    excelTypeIsSet_ = true;
}

bool DownloadStatisticsExcelRequest::excelTypeIsSet() const
{
    return excelTypeIsSet_;
}

void DownloadStatisticsExcelRequest::unsetexcelType()
{
    excelTypeIsSet_ = false;
}

}
}
}
}
}


