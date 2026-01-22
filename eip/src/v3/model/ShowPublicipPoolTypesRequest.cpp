

#include "huaweicloud/eip/v3/model/ShowPublicipPoolTypesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ShowPublicipPoolTypesRequest::ShowPublicipPoolTypesRequest()
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

ShowPublicipPoolTypesRequest::~ShowPublicipPoolTypesRequest() = default;

void ShowPublicipPoolTypesRequest::validate()
{
}

web::json::value ShowPublicipPoolTypesRequest::toJson() const
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
bool ShowPublicipPoolTypesRequest::fromJson(const web::json::value& val)
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


std::string ShowPublicipPoolTypesRequest::getMarker() const
{
    return marker_;
}

void ShowPublicipPoolTypesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ShowPublicipPoolTypesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ShowPublicipPoolTypesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ShowPublicipPoolTypesRequest::getLimit() const
{
    return limit_;
}

void ShowPublicipPoolTypesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowPublicipPoolTypesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowPublicipPoolTypesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowPublicipPoolTypesRequest::getFields() const
{
    return fields_;
}

void ShowPublicipPoolTypesRequest::setFields(const std::string& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ShowPublicipPoolTypesRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ShowPublicipPoolTypesRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

std::string ShowPublicipPoolTypesRequest::getSortKey() const
{
    return sortKey_;
}

void ShowPublicipPoolTypesRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ShowPublicipPoolTypesRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ShowPublicipPoolTypesRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ShowPublicipPoolTypesRequest::getSortDir() const
{
    return sortDir_;
}

void ShowPublicipPoolTypesRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ShowPublicipPoolTypesRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ShowPublicipPoolTypesRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ShowPublicipPoolTypesRequest::getId() const
{
    return id_;
}

void ShowPublicipPoolTypesRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowPublicipPoolTypesRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowPublicipPoolTypesRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ShowPublicipPoolTypesRequest::getName() const
{
    return name_;
}

void ShowPublicipPoolTypesRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowPublicipPoolTypesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ShowPublicipPoolTypesRequest::unsetname()
{
    nameIsSet_ = false;
}

int32_t ShowPublicipPoolTypesRequest::getSize() const
{
    return size_;
}

void ShowPublicipPoolTypesRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ShowPublicipPoolTypesRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ShowPublicipPoolTypesRequest::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ShowPublicipPoolTypesRequest::getStatus() const
{
    return status_;
}

void ShowPublicipPoolTypesRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowPublicipPoolTypesRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ShowPublicipPoolTypesRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowPublicipPoolTypesRequest::getType() const
{
    return type_;
}

void ShowPublicipPoolTypesRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowPublicipPoolTypesRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowPublicipPoolTypesRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowPublicipPoolTypesRequest::getDescription() const
{
    return description_;
}

void ShowPublicipPoolTypesRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowPublicipPoolTypesRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowPublicipPoolTypesRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowPublicipPoolTypesRequest::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void ShowPublicipPoolTypesRequest::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool ShowPublicipPoolTypesRequest::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void ShowPublicipPoolTypesRequest::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

}
}
}
}
}


