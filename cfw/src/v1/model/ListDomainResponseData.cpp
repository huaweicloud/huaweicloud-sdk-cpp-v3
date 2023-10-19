

#include "huaweicloud/cfw/v1/model/ListDomainResponseData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListDomainResponseData::ListDomainResponseData()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    recordsIsSet_ = false;
    setId_ = "";
    setIdIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListDomainResponseData::~ListDomainResponseData() = default;

void ListDomainResponseData::validate()
{
}

web::json::value ListDomainResponseData::toJson() const
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
    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }
    if(setIdIsSet_) {
        val[utility::conversions::to_string_t("set_id")] = ModelBase::toJson(setId_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListDomainResponseData::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<DomainInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetId(refVal);
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
    return ok;
}


int32_t ListDomainResponseData::getLimit() const
{
    return limit_;
}

void ListDomainResponseData::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDomainResponseData::limitIsSet() const
{
    return limitIsSet_;
}

void ListDomainResponseData::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListDomainResponseData::getOffset() const
{
    return offset_;
}

void ListDomainResponseData::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDomainResponseData::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDomainResponseData::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListDomainResponseData::getProjectId() const
{
    return projectId_;
}

void ListDomainResponseData::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListDomainResponseData::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListDomainResponseData::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<DomainInfo>& ListDomainResponseData::getRecords()
{
    return records_;
}

void ListDomainResponseData::setRecords(const std::vector<DomainInfo>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool ListDomainResponseData::recordsIsSet() const
{
    return recordsIsSet_;
}

void ListDomainResponseData::unsetrecords()
{
    recordsIsSet_ = false;
}

std::string ListDomainResponseData::getSetId() const
{
    return setId_;
}

void ListDomainResponseData::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool ListDomainResponseData::setIdIsSet() const
{
    return setIdIsSet_;
}

void ListDomainResponseData::unsetsetId()
{
    setIdIsSet_ = false;
}

int32_t ListDomainResponseData::getTotal() const
{
    return total_;
}

void ListDomainResponseData::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListDomainResponseData::totalIsSet() const
{
    return totalIsSet_;
}

void ListDomainResponseData::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


