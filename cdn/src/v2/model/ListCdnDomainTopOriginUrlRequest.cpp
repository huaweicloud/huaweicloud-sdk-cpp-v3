

#include "huaweicloud/cdn/v2/model/ListCdnDomainTopOriginUrlRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListCdnDomainTopOriginUrlRequest::ListCdnDomainTopOriginUrlRequest()
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
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    includeRatio_ = false;
    includeRatioIsSet_ = false;
}

ListCdnDomainTopOriginUrlRequest::~ListCdnDomainTopOriginUrlRequest() = default;

void ListCdnDomainTopOriginUrlRequest::validate()
{
}

web::json::value ListCdnDomainTopOriginUrlRequest::toJson() const
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
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(includeRatioIsSet_) {
        val[utility::conversions::to_string_t("include_ratio")] = ModelBase::toJson(includeRatio_);
    }

    return val;
}
bool ListCdnDomainTopOriginUrlRequest::fromJson(const web::json::value& val)
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


int64_t ListCdnDomainTopOriginUrlRequest::getStartTime() const
{
    return startTime_;
}

void ListCdnDomainTopOriginUrlRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListCdnDomainTopOriginUrlRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListCdnDomainTopOriginUrlRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListCdnDomainTopOriginUrlRequest::getEndTime() const
{
    return endTime_;
}

void ListCdnDomainTopOriginUrlRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListCdnDomainTopOriginUrlRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListCdnDomainTopOriginUrlRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListCdnDomainTopOriginUrlRequest::getDomainName() const
{
    return domainName_;
}

void ListCdnDomainTopOriginUrlRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ListCdnDomainTopOriginUrlRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ListCdnDomainTopOriginUrlRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ListCdnDomainTopOriginUrlRequest::getGroupBy() const
{
    return groupBy_;
}

void ListCdnDomainTopOriginUrlRequest::setGroupBy(const std::string& value)
{
    groupBy_ = value;
    groupByIsSet_ = true;
}

bool ListCdnDomainTopOriginUrlRequest::groupByIsSet() const
{
    return groupByIsSet_;
}

void ListCdnDomainTopOriginUrlRequest::unsetgroupBy()
{
    groupByIsSet_ = false;
}

std::string ListCdnDomainTopOriginUrlRequest::getStatType() const
{
    return statType_;
}

void ListCdnDomainTopOriginUrlRequest::setStatType(const std::string& value)
{
    statType_ = value;
    statTypeIsSet_ = true;
}

bool ListCdnDomainTopOriginUrlRequest::statTypeIsSet() const
{
    return statTypeIsSet_;
}

void ListCdnDomainTopOriginUrlRequest::unsetstatType()
{
    statTypeIsSet_ = false;
}

std::string ListCdnDomainTopOriginUrlRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListCdnDomainTopOriginUrlRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListCdnDomainTopOriginUrlRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListCdnDomainTopOriginUrlRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool ListCdnDomainTopOriginUrlRequest::isIncludeRatio() const
{
    return includeRatio_;
}

void ListCdnDomainTopOriginUrlRequest::setIncludeRatio(bool value)
{
    includeRatio_ = value;
    includeRatioIsSet_ = true;
}

bool ListCdnDomainTopOriginUrlRequest::includeRatioIsSet() const
{
    return includeRatioIsSet_;
}

void ListCdnDomainTopOriginUrlRequest::unsetincludeRatio()
{
    includeRatioIsSet_ = false;
}

}
}
}
}
}


