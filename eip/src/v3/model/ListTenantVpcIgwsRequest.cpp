

#include "huaweicloud/eip/v3/model/ListTenantVpcIgwsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ListTenantVpcIgwsRequest::ListTenantVpcIgwsRequest()
{
    fields_ = "";
    fieldsIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListTenantVpcIgwsRequest::~ListTenantVpcIgwsRequest() = default;

void ListTenantVpcIgwsRequest::validate()
{
}

web::json::value ListTenantVpcIgwsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListTenantVpcIgwsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    return ok;
}


std::string ListTenantVpcIgwsRequest::getFields() const
{
    return fields_;
}

void ListTenantVpcIgwsRequest::setFields(const std::string& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ListTenantVpcIgwsRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ListTenantVpcIgwsRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

std::string ListTenantVpcIgwsRequest::getId() const
{
    return id_;
}

void ListTenantVpcIgwsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListTenantVpcIgwsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListTenantVpcIgwsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListTenantVpcIgwsRequest::getVpcId() const
{
    return vpcId_;
}

void ListTenantVpcIgwsRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ListTenantVpcIgwsRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ListTenantVpcIgwsRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string ListTenantVpcIgwsRequest::getName() const
{
    return name_;
}

void ListTenantVpcIgwsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListTenantVpcIgwsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListTenantVpcIgwsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListTenantVpcIgwsRequest::getSortKey() const
{
    return sortKey_;
}

void ListTenantVpcIgwsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListTenantVpcIgwsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListTenantVpcIgwsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListTenantVpcIgwsRequest::getSortDir() const
{
    return sortDir_;
}

void ListTenantVpcIgwsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListTenantVpcIgwsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListTenantVpcIgwsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

int32_t ListTenantVpcIgwsRequest::getLimit() const
{
    return limit_;
}

void ListTenantVpcIgwsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTenantVpcIgwsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTenantVpcIgwsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListTenantVpcIgwsRequest::getOffset() const
{
    return offset_;
}

void ListTenantVpcIgwsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTenantVpcIgwsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTenantVpcIgwsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListTenantVpcIgwsRequest::getMarker() const
{
    return marker_;
}

void ListTenantVpcIgwsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListTenantVpcIgwsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListTenantVpcIgwsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


