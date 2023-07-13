

#include "huaweicloud/eip/v3/model/ListPublicipPoolRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ListPublicipPoolRequest::ListPublicipPoolRequest()
{
    marker_ = "";
    markerIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    fields_ = "";
    fieldsIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    publicBorderGroup_ = "";
    publicBorderGroupIsSet_ = false;
}

ListPublicipPoolRequest::~ListPublicipPoolRequest() = default;

void ListPublicipPoolRequest::validate()
{
}

web::json::value ListPublicipPoolRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("public_border_group")] = ModelBase::toJson(publicBorderGroup_);
    }

    return val;
}

bool ListPublicipPoolRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_border_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_border_group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicBorderGroup(refVal);
        }
    }
    return ok;
}

std::string ListPublicipPoolRequest::getMarker() const
{
    return marker_;
}

void ListPublicipPoolRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListPublicipPoolRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListPublicipPoolRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListPublicipPoolRequest::getLimit() const
{
    return limit_;
}

void ListPublicipPoolRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPublicipPoolRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPublicipPoolRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListPublicipPoolRequest::getFields() const
{
    return fields_;
}

void ListPublicipPoolRequest::setFields(const std::string& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ListPublicipPoolRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ListPublicipPoolRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

std::string ListPublicipPoolRequest::getSortKey() const
{
    return sortKey_;
}

void ListPublicipPoolRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListPublicipPoolRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListPublicipPoolRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListPublicipPoolRequest::getSortDir() const
{
    return sortDir_;
}

void ListPublicipPoolRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListPublicipPoolRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListPublicipPoolRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListPublicipPoolRequest::getId() const
{
    return id_;
}

void ListPublicipPoolRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListPublicipPoolRequest::idIsSet() const
{
    return idIsSet_;
}

void ListPublicipPoolRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListPublicipPoolRequest::getName() const
{
    return name_;
}

void ListPublicipPoolRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListPublicipPoolRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListPublicipPoolRequest::unsetname()
{
    nameIsSet_ = false;
}

int32_t ListPublicipPoolRequest::getSize() const
{
    return size_;
}

void ListPublicipPoolRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListPublicipPoolRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListPublicipPoolRequest::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ListPublicipPoolRequest::getStatus() const
{
    return status_;
}

void ListPublicipPoolRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListPublicipPoolRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListPublicipPoolRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListPublicipPoolRequest::getType() const
{
    return type_;
}

void ListPublicipPoolRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListPublicipPoolRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListPublicipPoolRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListPublicipPoolRequest::getDescription() const
{
    return description_;
}

void ListPublicipPoolRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListPublicipPoolRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListPublicipPoolRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ListPublicipPoolRequest::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void ListPublicipPoolRequest::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool ListPublicipPoolRequest::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void ListPublicipPoolRequest::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

}
}
}
}
}


