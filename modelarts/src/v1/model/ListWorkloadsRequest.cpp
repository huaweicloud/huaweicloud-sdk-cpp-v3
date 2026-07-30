

#include "huaweicloud/modelarts/v1/model/ListWorkloadsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListWorkloadsRequest::ListWorkloadsRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    hostipIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    ascend_ = false;
    ascendIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListWorkloadsRequest::~ListWorkloadsRequest() = default;

void ListWorkloadsRequest::validate()
{
}

web::json::value ListWorkloadsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(poolNameIsSet_) {
        val[utility::conversions::to_string_t("pool_name")] = ModelBase::toJson(poolName_);
    }
    if(hostipIsSet_) {
        val[utility::conversions::to_string_t("hostip")] = ModelBase::toJson(hostip_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(ascendIsSet_) {
        val[utility::conversions::to_string_t("ascend")] = ModelBase::toJson(ascend_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListWorkloadsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pool_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hostip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hostip"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ascend"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ascend"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAscend(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListWorkloadsRequest::getPoolName() const
{
    return poolName_;
}

void ListWorkloadsRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool ListWorkloadsRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void ListWorkloadsRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

std::vector<std::string>& ListWorkloadsRequest::getHostip()
{
    return hostip_;
}

void ListWorkloadsRequest::setHostip(const std::vector<std::string>& value)
{
    hostip_ = value;
    hostipIsSet_ = true;
}

bool ListWorkloadsRequest::hostipIsSet() const
{
    return hostipIsSet_;
}

void ListWorkloadsRequest::unsethostip()
{
    hostipIsSet_ = false;
}

std::string ListWorkloadsRequest::getType() const
{
    return type_;
}

void ListWorkloadsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListWorkloadsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListWorkloadsRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListWorkloadsRequest::getStatus() const
{
    return status_;
}

void ListWorkloadsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListWorkloadsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListWorkloadsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListWorkloadsRequest::getSort() const
{
    return sort_;
}

void ListWorkloadsRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListWorkloadsRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListWorkloadsRequest::unsetsort()
{
    sortIsSet_ = false;
}

bool ListWorkloadsRequest::isAscend() const
{
    return ascend_;
}

void ListWorkloadsRequest::setAscend(bool value)
{
    ascend_ = value;
    ascendIsSet_ = true;
}

bool ListWorkloadsRequest::ascendIsSet() const
{
    return ascendIsSet_;
}

void ListWorkloadsRequest::unsetascend()
{
    ascendIsSet_ = false;
}

std::string ListWorkloadsRequest::getOffset() const
{
    return offset_;
}

void ListWorkloadsRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListWorkloadsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListWorkloadsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListWorkloadsRequest::getLimit() const
{
    return limit_;
}

void ListWorkloadsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListWorkloadsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListWorkloadsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


