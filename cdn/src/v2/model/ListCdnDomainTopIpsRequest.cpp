

#include "huaweicloud/cdn/v2/model/ListCdnDomainTopIpsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListCdnDomainTopIpsRequest::ListCdnDomainTopIpsRequest()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    groupBy_ = "";
    groupByIsSet_ = false;
    statType_ = "";
    statTypeIsSet_ = false;
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    includeRatio_ = false;
    includeRatioIsSet_ = false;
}

ListCdnDomainTopIpsRequest::~ListCdnDomainTopIpsRequest() = default;

void ListCdnDomainTopIpsRequest::validate()
{
}

web::json::value ListCdnDomainTopIpsRequest::toJson() const
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
    if(groupByIsSet_) {
        val[utility::conversions::to_string_t("group_by")] = ModelBase::toJson(groupBy_);
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
bool ListCdnDomainTopIpsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupBy(refVal);
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


int64_t ListCdnDomainTopIpsRequest::getStartTime() const
{
    return startTime_;
}

void ListCdnDomainTopIpsRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListCdnDomainTopIpsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListCdnDomainTopIpsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListCdnDomainTopIpsRequest::getEndTime() const
{
    return endTime_;
}

void ListCdnDomainTopIpsRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListCdnDomainTopIpsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListCdnDomainTopIpsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListCdnDomainTopIpsRequest::getDomainName() const
{
    return domainName_;
}

void ListCdnDomainTopIpsRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ListCdnDomainTopIpsRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ListCdnDomainTopIpsRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ListCdnDomainTopIpsRequest::getGroupBy() const
{
    return groupBy_;
}

void ListCdnDomainTopIpsRequest::setGroupBy(const std::string& value)
{
    groupBy_ = value;
    groupByIsSet_ = true;
}

bool ListCdnDomainTopIpsRequest::groupByIsSet() const
{
    return groupByIsSet_;
}

void ListCdnDomainTopIpsRequest::unsetgroupBy()
{
    groupByIsSet_ = false;
}

std::string ListCdnDomainTopIpsRequest::getStatType() const
{
    return statType_;
}

void ListCdnDomainTopIpsRequest::setStatType(const std::string& value)
{
    statType_ = value;
    statTypeIsSet_ = true;
}

bool ListCdnDomainTopIpsRequest::statTypeIsSet() const
{
    return statTypeIsSet_;
}

void ListCdnDomainTopIpsRequest::unsetstatType()
{
    statTypeIsSet_ = false;
}

std::string ListCdnDomainTopIpsRequest::getServiceArea() const
{
    return serviceArea_;
}

void ListCdnDomainTopIpsRequest::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool ListCdnDomainTopIpsRequest::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void ListCdnDomainTopIpsRequest::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

std::string ListCdnDomainTopIpsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListCdnDomainTopIpsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListCdnDomainTopIpsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListCdnDomainTopIpsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool ListCdnDomainTopIpsRequest::isIncludeRatio() const
{
    return includeRatio_;
}

void ListCdnDomainTopIpsRequest::setIncludeRatio(bool value)
{
    includeRatio_ = value;
    includeRatioIsSet_ = true;
}

bool ListCdnDomainTopIpsRequest::includeRatioIsSet() const
{
    return includeRatioIsSet_;
}

void ListCdnDomainTopIpsRequest::unsetincludeRatio()
{
    includeRatioIsSet_ = false;
}

}
}
}
}
}


