

#include "huaweicloud/dds/v3/model/EntityInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




EntityInfo::EntityInfo()
{
    entityId_ = "";
    entityIdIsSet_ = false;
    entityName_ = "";
    entityNameIsSet_ = false;
}

EntityInfo::~EntityInfo() = default;

void EntityInfo::validate()
{
}

web::json::value EntityInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(entityIdIsSet_) {
        val[utility::conversions::to_string_t("entity_id")] = ModelBase::toJson(entityId_);
    }
    if(entityNameIsSet_) {
        val[utility::conversions::to_string_t("entity_name")] = ModelBase::toJson(entityName_);
    }

    return val;
}
bool EntityInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("entity_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entity_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntityId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("entity_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entity_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntityName(refVal);
        }
    }
    return ok;
}


std::string EntityInfo::getEntityId() const
{
    return entityId_;
}

void EntityInfo::setEntityId(const std::string& value)
{
    entityId_ = value;
    entityIdIsSet_ = true;
}

bool EntityInfo::entityIdIsSet() const
{
    return entityIdIsSet_;
}

void EntityInfo::unsetentityId()
{
    entityIdIsSet_ = false;
}

std::string EntityInfo::getEntityName() const
{
    return entityName_;
}

void EntityInfo::setEntityName(const std::string& value)
{
    entityName_ = value;
    entityNameIsSet_ = true;
}

bool EntityInfo::entityNameIsSet() const
{
    return entityNameIsSet_;
}

void EntityInfo::unsetentityName()
{
    entityNameIsSet_ = false;
}

}
}
}
}
}


