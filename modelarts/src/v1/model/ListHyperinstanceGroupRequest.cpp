

#include "huaweicloud/modelarts/v1/model/ListHyperinstanceGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListHyperinstanceGroupRequest::ListHyperinstanceGroupRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
}

ListHyperinstanceGroupRequest::~ListHyperinstanceGroupRequest() = default;

void ListHyperinstanceGroupRequest::validate()
{
}

web::json::value ListHyperinstanceGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }

    return val;
}
bool ListHyperinstanceGroupRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    return ok;
}


int32_t ListHyperinstanceGroupRequest::getLimit() const
{
    return limit_;
}

void ListHyperinstanceGroupRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListHyperinstanceGroupRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListHyperinstanceGroupRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListHyperinstanceGroupRequest::getOffset() const
{
    return offset_;
}

void ListHyperinstanceGroupRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListHyperinstanceGroupRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListHyperinstanceGroupRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListHyperinstanceGroupRequest::getSortKey() const
{
    return sortKey_;
}

void ListHyperinstanceGroupRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListHyperinstanceGroupRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListHyperinstanceGroupRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListHyperinstanceGroupRequest::getSortDir() const
{
    return sortDir_;
}

void ListHyperinstanceGroupRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListHyperinstanceGroupRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListHyperinstanceGroupRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

}
}
}
}
}


