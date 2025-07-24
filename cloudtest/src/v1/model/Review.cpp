

#include "huaweicloud/cloudtest/v1/model/Review.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




Review::Review()
{
    charger_ = "";
    chargerIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    creator_ = "";
    creatorIsSet_ = false;
    deleted_ = "";
    deletedIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    mindmapId_ = "";
    mindmapIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    nodeValue_ = "";
    nodeValueIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

Review::~Review() = default;

void Review::validate()
{
}

web::json::value Review::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chargerIsSet_) {
        val[utility::conversions::to_string_t("charger")] = ModelBase::toJson(charger_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(deletedIsSet_) {
        val[utility::conversions::to_string_t("deleted")] = ModelBase::toJson(deleted_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(mindmapIdIsSet_) {
        val[utility::conversions::to_string_t("mindmap_id")] = ModelBase::toJson(mindmapId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(nodeValueIsSet_) {
        val[utility::conversions::to_string_t("node_value")] = ModelBase::toJson(nodeValue_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool Review::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("charger"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charger"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCharger(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleted(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mindmap_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mindmap_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMindmapId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeValue(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string Review::getCharger() const
{
    return charger_;
}

void Review::setCharger(const std::string& value)
{
    charger_ = value;
    chargerIsSet_ = true;
}

bool Review::chargerIsSet() const
{
    return chargerIsSet_;
}

void Review::unsetcharger()
{
    chargerIsSet_ = false;
}

std::string Review::getCreateTime() const
{
    return createTime_;
}

void Review::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool Review::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void Review::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string Review::getCreator() const
{
    return creator_;
}

void Review::setCreator(const std::string& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool Review::creatorIsSet() const
{
    return creatorIsSet_;
}

void Review::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string Review::getDeleted() const
{
    return deleted_;
}

void Review::setDeleted(const std::string& value)
{
    deleted_ = value;
    deletedIsSet_ = true;
}

bool Review::deletedIsSet() const
{
    return deletedIsSet_;
}

void Review::unsetdeleted()
{
    deletedIsSet_ = false;
}

std::string Review::getDescription() const
{
    return description_;
}

void Review::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool Review::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void Review::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string Review::getId() const
{
    return id_;
}

void Review::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Review::idIsSet() const
{
    return idIsSet_;
}

void Review::unsetid()
{
    idIsSet_ = false;
}

std::string Review::getMindmapId() const
{
    return mindmapId_;
}

void Review::setMindmapId(const std::string& value)
{
    mindmapId_ = value;
    mindmapIdIsSet_ = true;
}

bool Review::mindmapIdIsSet() const
{
    return mindmapIdIsSet_;
}

void Review::unsetmindmapId()
{
    mindmapIdIsSet_ = false;
}

std::string Review::getNodeId() const
{
    return nodeId_;
}

void Review::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool Review::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void Review::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string Review::getNodeValue() const
{
    return nodeValue_;
}

void Review::setNodeValue(const std::string& value)
{
    nodeValue_ = value;
    nodeValueIsSet_ = true;
}

bool Review::nodeValueIsSet() const
{
    return nodeValueIsSet_;
}

void Review::unsetnodeValue()
{
    nodeValueIsSet_ = false;
}

std::string Review::getStatus() const
{
    return status_;
}

void Review::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Review::statusIsSet() const
{
    return statusIsSet_;
}

void Review::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Review::getType() const
{
    return type_;
}

void Review::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Review::typeIsSet() const
{
    return typeIsSet_;
}

void Review::unsettype()
{
    typeIsSet_ = false;
}

std::string Review::getUpdateTime() const
{
    return updateTime_;
}

void Review::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool Review::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void Review::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


