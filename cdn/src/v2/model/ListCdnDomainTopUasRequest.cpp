

#include "huaweicloud/cdn/v2/model/ListCdnDomainTopUasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListCdnDomainTopUasRequest::ListCdnDomainTopUasRequest()
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

ListCdnDomainTopUasRequest::~ListCdnDomainTopUasRequest() = default;

void ListCdnDomainTopUasRequest::validate()
{
}

web::json::value ListCdnDomainTopUasRequest::toJson() const
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
bool ListCdnDomainTopUasRequest::fromJson(const web::json::value& val)
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


int64_t ListCdnDomainTopUasRequest::getStartTime() const
{
    return startTime_;
}

void ListCdnDomainTopUasRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListCdnDomainTopUasRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListCdnDomainTopUasRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListCdnDomainTopUasRequest::getEndTime() const
{
    return endTime_;
}

void ListCdnDomainTopUasRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListCdnDomainTopUasRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListCdnDomainTopUasRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListCdnDomainTopUasRequest::getDomainName() const
{
    return domainName_;
}

void ListCdnDomainTopUasRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ListCdnDomainTopUasRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ListCdnDomainTopUasRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ListCdnDomainTopUasRequest::getGroupBy() const
{
    return groupBy_;
}

void ListCdnDomainTopUasRequest::setGroupBy(const std::string& value)
{
    groupBy_ = value;
    groupByIsSet_ = true;
}

bool ListCdnDomainTopUasRequest::groupByIsSet() const
{
    return groupByIsSet_;
}

void ListCdnDomainTopUasRequest::unsetgroupBy()
{
    groupByIsSet_ = false;
}

std::string ListCdnDomainTopUasRequest::getStatType() const
{
    return statType_;
}

void ListCdnDomainTopUasRequest::setStatType(const std::string& value)
{
    statType_ = value;
    statTypeIsSet_ = true;
}

bool ListCdnDomainTopUasRequest::statTypeIsSet() const
{
    return statTypeIsSet_;
}

void ListCdnDomainTopUasRequest::unsetstatType()
{
    statTypeIsSet_ = false;
}

std::string ListCdnDomainTopUasRequest::getServiceArea() const
{
    return serviceArea_;
}

void ListCdnDomainTopUasRequest::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool ListCdnDomainTopUasRequest::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void ListCdnDomainTopUasRequest::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

std::string ListCdnDomainTopUasRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListCdnDomainTopUasRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListCdnDomainTopUasRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListCdnDomainTopUasRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool ListCdnDomainTopUasRequest::isIncludeRatio() const
{
    return includeRatio_;
}

void ListCdnDomainTopUasRequest::setIncludeRatio(bool value)
{
    includeRatio_ = value;
    includeRatioIsSet_ = true;
}

bool ListCdnDomainTopUasRequest::includeRatioIsSet() const
{
    return includeRatioIsSet_;
}

void ListCdnDomainTopUasRequest::unsetincludeRatio()
{
    includeRatioIsSet_ = false;
}

}
}
}
}
}


