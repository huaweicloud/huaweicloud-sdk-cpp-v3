

#include "huaweicloud/dds/v3/model/GroupResponseItem.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




GroupResponseItem::GroupResponseItem()
{
    type_ = "";
    typeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    volumeIsSet_ = false;
    nodesIsSet_ = false;
}

GroupResponseItem::~GroupResponseItem() = default;

void GroupResponseItem::validate()
{
}

web::json::value GroupResponseItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }
    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }

    return val;
}

bool GroupResponseItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            Volume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<NodeItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodes(refVal);
        }
    }
    return ok;
}

std::string GroupResponseItem::getType() const
{
    return type_;
}

void GroupResponseItem::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool GroupResponseItem::typeIsSet() const
{
    return typeIsSet_;
}

void GroupResponseItem::unsettype()
{
    typeIsSet_ = false;
}

std::string GroupResponseItem::getId() const
{
    return id_;
}

void GroupResponseItem::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GroupResponseItem::idIsSet() const
{
    return idIsSet_;
}

void GroupResponseItem::unsetid()
{
    idIsSet_ = false;
}

std::string GroupResponseItem::getName() const
{
    return name_;
}

void GroupResponseItem::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GroupResponseItem::nameIsSet() const
{
    return nameIsSet_;
}

void GroupResponseItem::unsetname()
{
    nameIsSet_ = false;
}

std::string GroupResponseItem::getStatus() const
{
    return status_;
}

void GroupResponseItem::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GroupResponseItem::statusIsSet() const
{
    return statusIsSet_;
}

void GroupResponseItem::unsetstatus()
{
    statusIsSet_ = false;
}

Volume GroupResponseItem::getVolume() const
{
    return volume_;
}

void GroupResponseItem::setVolume(const Volume& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool GroupResponseItem::volumeIsSet() const
{
    return volumeIsSet_;
}

void GroupResponseItem::unsetvolume()
{
    volumeIsSet_ = false;
}

std::vector<NodeItem>& GroupResponseItem::getNodes()
{
    return nodes_;
}

void GroupResponseItem::setNodes(const std::vector<NodeItem>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool GroupResponseItem::nodesIsSet() const
{
    return nodesIsSet_;
}

void GroupResponseItem::unsetnodes()
{
    nodesIsSet_ = false;
}

}
}
}
}
}


