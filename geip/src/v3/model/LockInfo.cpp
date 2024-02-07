

#include "huaweicloud/geip/v3/model/LockInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




LockInfo::LockInfo()
{
    id_ = "";
    idIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    scene_ = "";
    sceneIsSet_ = false;
    sourceType_ = "";
    sourceTypeIsSet_ = false;
    sourceId_ = "";
    sourceIdIsSet_ = false;
    checkUrl_ = "";
    checkUrlIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

LockInfo::~LockInfo() = default;

void LockInfo::validate()
{
}

web::json::value LockInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(sceneIsSet_) {
        val[utility::conversions::to_string_t("scene")] = ModelBase::toJson(scene_);
    }
    if(sourceTypeIsSet_) {
        val[utility::conversions::to_string_t("source_type")] = ModelBase::toJson(sourceType_);
    }
    if(sourceIdIsSet_) {
        val[utility::conversions::to_string_t("source_id")] = ModelBase::toJson(sourceId_);
    }
    if(checkUrlIsSet_) {
        val[utility::conversions::to_string_t("check_url")] = ModelBase::toJson(checkUrl_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool LockInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scene"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScene(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("check_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}


std::string LockInfo::getId() const
{
    return id_;
}

void LockInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool LockInfo::idIsSet() const
{
    return idIsSet_;
}

void LockInfo::unsetid()
{
    idIsSet_ = false;
}

std::string LockInfo::getResourceType() const
{
    return resourceType_;
}

void LockInfo::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool LockInfo::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void LockInfo::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string LockInfo::getResourceId() const
{
    return resourceId_;
}

void LockInfo::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool LockInfo::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void LockInfo::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string LockInfo::getScene() const
{
    return scene_;
}

void LockInfo::setScene(const std::string& value)
{
    scene_ = value;
    sceneIsSet_ = true;
}

bool LockInfo::sceneIsSet() const
{
    return sceneIsSet_;
}

void LockInfo::unsetscene()
{
    sceneIsSet_ = false;
}

std::string LockInfo::getSourceType() const
{
    return sourceType_;
}

void LockInfo::setSourceType(const std::string& value)
{
    sourceType_ = value;
    sourceTypeIsSet_ = true;
}

bool LockInfo::sourceTypeIsSet() const
{
    return sourceTypeIsSet_;
}

void LockInfo::unsetsourceType()
{
    sourceTypeIsSet_ = false;
}

std::string LockInfo::getSourceId() const
{
    return sourceId_;
}

void LockInfo::setSourceId(const std::string& value)
{
    sourceId_ = value;
    sourceIdIsSet_ = true;
}

bool LockInfo::sourceIdIsSet() const
{
    return sourceIdIsSet_;
}

void LockInfo::unsetsourceId()
{
    sourceIdIsSet_ = false;
}

std::string LockInfo::getCheckUrl() const
{
    return checkUrl_;
}

void LockInfo::setCheckUrl(const std::string& value)
{
    checkUrl_ = value;
    checkUrlIsSet_ = true;
}

bool LockInfo::checkUrlIsSet() const
{
    return checkUrlIsSet_;
}

void LockInfo::unsetcheckUrl()
{
    checkUrlIsSet_ = false;
}

std::string LockInfo::getAction() const
{
    return action_;
}

void LockInfo::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool LockInfo::actionIsSet() const
{
    return actionIsSet_;
}

void LockInfo::unsetaction()
{
    actionIsSet_ = false;
}

utility::datetime LockInfo::getCreatedAt() const
{
    return createdAt_;
}

void LockInfo::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool LockInfo::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void LockInfo::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime LockInfo::getUpdatedAt() const
{
    return updatedAt_;
}

void LockInfo::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool LockInfo::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void LockInfo::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


