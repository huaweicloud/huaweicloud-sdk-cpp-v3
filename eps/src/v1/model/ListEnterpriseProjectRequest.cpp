

#include "huaweicloud/eps/v1/model/ListEnterpriseProjectRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




ListEnterpriseProjectRequest::ListEnterpriseProjectRequest()
{
    id_ = "";
    idIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ListEnterpriseProjectRequest::~ListEnterpriseProjectRequest() = default;

void ListEnterpriseProjectRequest::validate()
{
}

web::json::value ListEnterpriseProjectRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ListEnterpriseProjectRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    return ok;
}


std::string ListEnterpriseProjectRequest::getId() const
{
    return id_;
}

void ListEnterpriseProjectRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListEnterpriseProjectRequest::idIsSet() const
{
    return idIsSet_;
}

void ListEnterpriseProjectRequest::unsetid()
{
    idIsSet_ = false;
}

int32_t ListEnterpriseProjectRequest::getLimit() const
{
    return limit_;
}

void ListEnterpriseProjectRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListEnterpriseProjectRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListEnterpriseProjectRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListEnterpriseProjectRequest::getName() const
{
    return name_;
}

void ListEnterpriseProjectRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListEnterpriseProjectRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListEnterpriseProjectRequest::unsetname()
{
    nameIsSet_ = false;
}

int32_t ListEnterpriseProjectRequest::getOffset() const
{
    return offset_;
}

void ListEnterpriseProjectRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListEnterpriseProjectRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListEnterpriseProjectRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListEnterpriseProjectRequest::getSortDir() const
{
    return sortDir_;
}

void ListEnterpriseProjectRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListEnterpriseProjectRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListEnterpriseProjectRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListEnterpriseProjectRequest::getSortKey() const
{
    return sortKey_;
}

void ListEnterpriseProjectRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListEnterpriseProjectRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListEnterpriseProjectRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

int32_t ListEnterpriseProjectRequest::getStatus() const
{
    return status_;
}

void ListEnterpriseProjectRequest::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListEnterpriseProjectRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListEnterpriseProjectRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListEnterpriseProjectRequest::getType() const
{
    return type_;
}

void ListEnterpriseProjectRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListEnterpriseProjectRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListEnterpriseProjectRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


