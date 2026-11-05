

#include "huaweicloud/modelarts/v1/model/ListHyperinstanceServersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListHyperinstanceServersRequest::ListHyperinstanceServersRequest()
{
    id_ = "";
    idIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
}

ListHyperinstanceServersRequest::~ListHyperinstanceServersRequest() = default;

void ListHyperinstanceServersRequest::validate()
{
}

web::json::value ListHyperinstanceServersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
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
bool ListHyperinstanceServersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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


std::string ListHyperinstanceServersRequest::getId() const
{
    return id_;
}

void ListHyperinstanceServersRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListHyperinstanceServersRequest::idIsSet() const
{
    return idIsSet_;
}

void ListHyperinstanceServersRequest::unsetid()
{
    idIsSet_ = false;
}

int32_t ListHyperinstanceServersRequest::getLimit() const
{
    return limit_;
}

void ListHyperinstanceServersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListHyperinstanceServersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListHyperinstanceServersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListHyperinstanceServersRequest::getOffset() const
{
    return offset_;
}

void ListHyperinstanceServersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListHyperinstanceServersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListHyperinstanceServersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListHyperinstanceServersRequest::getSortKey() const
{
    return sortKey_;
}

void ListHyperinstanceServersRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListHyperinstanceServersRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListHyperinstanceServersRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListHyperinstanceServersRequest::getSortDir() const
{
    return sortDir_;
}

void ListHyperinstanceServersRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListHyperinstanceServersRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListHyperinstanceServersRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

}
}
}
}
}


