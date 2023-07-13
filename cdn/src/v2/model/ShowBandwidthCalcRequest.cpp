

#include "huaweicloud/cdn/v2/model/ShowBandwidthCalcRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowBandwidthCalcRequest::ShowBandwidthCalcRequest()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    calcType_ = "";
    calcTypeIsSet_ = false;
}

ShowBandwidthCalcRequest::~ShowBandwidthCalcRequest() = default;

void ShowBandwidthCalcRequest::validate()
{
}

web::json::value ShowBandwidthCalcRequest::toJson() const
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
    if(serviceAreaIsSet_) {
        val[utility::conversions::to_string_t("service_area")] = ModelBase::toJson(serviceArea_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(calcTypeIsSet_) {
        val[utility::conversions::to_string_t("calc_type")] = ModelBase::toJson(calcType_);
    }

    return val;
}

bool ShowBandwidthCalcRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("service_area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_area"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceArea(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("calc_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("calc_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCalcType(refVal);
        }
    }
    return ok;
}

int64_t ShowBandwidthCalcRequest::getStartTime() const
{
    return startTime_;
}

void ShowBandwidthCalcRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowBandwidthCalcRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowBandwidthCalcRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ShowBandwidthCalcRequest::getEndTime() const
{
    return endTime_;
}

void ShowBandwidthCalcRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowBandwidthCalcRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowBandwidthCalcRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowBandwidthCalcRequest::getDomainName() const
{
    return domainName_;
}

void ShowBandwidthCalcRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ShowBandwidthCalcRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ShowBandwidthCalcRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ShowBandwidthCalcRequest::getServiceArea() const
{
    return serviceArea_;
}

void ShowBandwidthCalcRequest::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool ShowBandwidthCalcRequest::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void ShowBandwidthCalcRequest::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

std::string ShowBandwidthCalcRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowBandwidthCalcRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowBandwidthCalcRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowBandwidthCalcRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ShowBandwidthCalcRequest::getCalcType() const
{
    return calcType_;
}

void ShowBandwidthCalcRequest::setCalcType(const std::string& value)
{
    calcType_ = value;
    calcTypeIsSet_ = true;
}

bool ShowBandwidthCalcRequest::calcTypeIsSet() const
{
    return calcTypeIsSet_;
}

void ShowBandwidthCalcRequest::unsetcalcType()
{
    calcTypeIsSet_ = false;
}

}
}
}
}
}


