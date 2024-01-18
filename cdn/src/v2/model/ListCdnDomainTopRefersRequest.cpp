

#include "huaweicloud/cdn/v2/model/ListCdnDomainTopRefersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListCdnDomainTopRefersRequest::ListCdnDomainTopRefersRequest()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    statType_ = "";
    statTypeIsSet_ = false;
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    includeRatio_ = false;
    includeRatioIsSet_ = false;
}

ListCdnDomainTopRefersRequest::~ListCdnDomainTopRefersRequest() = default;

void ListCdnDomainTopRefersRequest::validate()
{
}

web::json::value ListCdnDomainTopRefersRequest::toJson() const
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
    if(statTypeIsSet_) {
        val[utility::conversions::to_string_t("stat_type")] = ModelBase::toJson(statType_);
    }
    if(serviceAreaIsSet_) {
        val[utility::conversions::to_string_t("service_area")] = ModelBase::toJson(serviceArea_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(includeRatioIsSet_) {
        val[utility::conversions::to_string_t("include_ratio")] = ModelBase::toJson(includeRatio_);
    }

    return val;
}
bool ListCdnDomainTopRefersRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("stat_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stat_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("include_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include_ratio"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeRatio(refVal);
        }
    }
    return ok;
}


int64_t ListCdnDomainTopRefersRequest::getStartTime() const
{
    return startTime_;
}

void ListCdnDomainTopRefersRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListCdnDomainTopRefersRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListCdnDomainTopRefersRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListCdnDomainTopRefersRequest::getEndTime() const
{
    return endTime_;
}

void ListCdnDomainTopRefersRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListCdnDomainTopRefersRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListCdnDomainTopRefersRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListCdnDomainTopRefersRequest::getDomainName() const
{
    return domainName_;
}

void ListCdnDomainTopRefersRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ListCdnDomainTopRefersRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ListCdnDomainTopRefersRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ListCdnDomainTopRefersRequest::getStatType() const
{
    return statType_;
}

void ListCdnDomainTopRefersRequest::setStatType(const std::string& value)
{
    statType_ = value;
    statTypeIsSet_ = true;
}

bool ListCdnDomainTopRefersRequest::statTypeIsSet() const
{
    return statTypeIsSet_;
}

void ListCdnDomainTopRefersRequest::unsetstatType()
{
    statTypeIsSet_ = false;
}

std::string ListCdnDomainTopRefersRequest::getServiceArea() const
{
    return serviceArea_;
}

void ListCdnDomainTopRefersRequest::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool ListCdnDomainTopRefersRequest::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void ListCdnDomainTopRefersRequest::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

std::string ListCdnDomainTopRefersRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListCdnDomainTopRefersRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListCdnDomainTopRefersRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListCdnDomainTopRefersRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool ListCdnDomainTopRefersRequest::isIncludeRatio() const
{
    return includeRatio_;
}

void ListCdnDomainTopRefersRequest::setIncludeRatio(bool value)
{
    includeRatio_ = value;
    includeRatioIsSet_ = true;
}

bool ListCdnDomainTopRefersRequest::includeRatioIsSet() const
{
    return includeRatioIsSet_;
}

void ListCdnDomainTopRefersRequest::unsetincludeRatio()
{
    includeRatioIsSet_ = false;
}

}
}
}
}
}


