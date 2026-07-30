

#include "huaweicloud/modelarts/v1/model/ListDevServersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListDevServersRequest::ListDevServersRequest()
{
    owner_ = "";
    ownerIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListDevServersRequest::~ListDevServersRequest() = default;

void ListDevServersRequest::validate()
{
}

web::json::value ListDevServersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
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
bool ListDevServersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
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


std::string ListDevServersRequest::getOwner() const
{
    return owner_;
}

void ListDevServersRequest::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool ListDevServersRequest::ownerIsSet() const
{
    return ownerIsSet_;
}

void ListDevServersRequest::unsetowner()
{
    ownerIsSet_ = false;
}

std::string ListDevServersRequest::getSortDir() const
{
    return sortDir_;
}

void ListDevServersRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListDevServersRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListDevServersRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListDevServersRequest::getSortKey() const
{
    return sortKey_;
}

void ListDevServersRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListDevServersRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListDevServersRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

int32_t ListDevServersRequest::getLimit() const
{
    return limit_;
}

void ListDevServersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDevServersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDevServersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListDevServersRequest::getOffset() const
{
    return offset_;
}

void ListDevServersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDevServersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDevServersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


