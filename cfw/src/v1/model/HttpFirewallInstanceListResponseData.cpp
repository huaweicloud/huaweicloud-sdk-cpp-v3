

#include "huaweicloud/cfw/v1/model/HttpFirewallInstanceListResponseData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




HttpFirewallInstanceListResponseData::HttpFirewallInstanceListResponseData()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    recordsIsSet_ = false;
}

HttpFirewallInstanceListResponseData::~HttpFirewallInstanceListResponseData() = default;

void HttpFirewallInstanceListResponseData::validate()
{
}

web::json::value HttpFirewallInstanceListResponseData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }

    return val;
}
bool HttpFirewallInstanceListResponseData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<FirewallInstanceVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    return ok;
}


int32_t HttpFirewallInstanceListResponseData::getLimit() const
{
    return limit_;
}

void HttpFirewallInstanceListResponseData::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool HttpFirewallInstanceListResponseData::limitIsSet() const
{
    return limitIsSet_;
}

void HttpFirewallInstanceListResponseData::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t HttpFirewallInstanceListResponseData::getOffset() const
{
    return offset_;
}

void HttpFirewallInstanceListResponseData::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool HttpFirewallInstanceListResponseData::offsetIsSet() const
{
    return offsetIsSet_;
}

void HttpFirewallInstanceListResponseData::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string HttpFirewallInstanceListResponseData::getProjectId() const
{
    return projectId_;
}

void HttpFirewallInstanceListResponseData::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool HttpFirewallInstanceListResponseData::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void HttpFirewallInstanceListResponseData::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t HttpFirewallInstanceListResponseData::getTotal() const
{
    return total_;
}

void HttpFirewallInstanceListResponseData::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool HttpFirewallInstanceListResponseData::totalIsSet() const
{
    return totalIsSet_;
}

void HttpFirewallInstanceListResponseData::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<FirewallInstanceVO>& HttpFirewallInstanceListResponseData::getRecords()
{
    return records_;
}

void HttpFirewallInstanceListResponseData::setRecords(const std::vector<FirewallInstanceVO>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool HttpFirewallInstanceListResponseData::recordsIsSet() const
{
    return recordsIsSet_;
}

void HttpFirewallInstanceListResponseData::unsetrecords()
{
    recordsIsSet_ = false;
}

}
}
}
}
}


