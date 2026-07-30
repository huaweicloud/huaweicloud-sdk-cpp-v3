

#include "huaweicloud/modelarts/v1/model/ListHyperinstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListHyperinstancesRequest::ListHyperinstancesRequest()
{
    sortDir_ = "";
    sortDirIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListHyperinstancesRequest::~ListHyperinstancesRequest() = default;

void ListHyperinstancesRequest::validate()
{
}

web::json::value ListHyperinstancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListHyperinstancesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
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
    return ok;
}


std::string ListHyperinstancesRequest::getSortDir() const
{
    return sortDir_;
}

void ListHyperinstancesRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListHyperinstancesRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListHyperinstancesRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListHyperinstancesRequest::getSortKey() const
{
    return sortKey_;
}

void ListHyperinstancesRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListHyperinstancesRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListHyperinstancesRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

int32_t ListHyperinstancesRequest::getLimit() const
{
    return limit_;
}

void ListHyperinstancesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListHyperinstancesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListHyperinstancesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListHyperinstancesRequest::getOffset() const
{
    return offset_;
}

void ListHyperinstancesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListHyperinstancesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListHyperinstancesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


