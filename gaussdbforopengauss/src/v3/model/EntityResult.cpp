

#include "huaweicloud/gaussdbforopengauss/v3/model/EntityResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




EntityResult::EntityResult()
{
    entityId_ = "";
    entityIdIsSet_ = false;
    entityName_ = "";
    entityNameIsSet_ = false;
}

EntityResult::~EntityResult() = default;

void EntityResult::validate()
{
}

web::json::value EntityResult::toJson() const
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
bool EntityResult::fromJson(const web::json::value& val)
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


std::string EntityResult::getEntityId() const
{
    return entityId_;
}

void EntityResult::setEntityId(const std::string& value)
{
    entityId_ = value;
    entityIdIsSet_ = true;
}

bool EntityResult::entityIdIsSet() const
{
    return entityIdIsSet_;
}

void EntityResult::unsetentityId()
{
    entityIdIsSet_ = false;
}

std::string EntityResult::getEntityName() const
{
    return entityName_;
}

void EntityResult::setEntityName(const std::string& value)
{
    entityName_ = value;
    entityNameIsSet_ = true;
}

bool EntityResult::entityNameIsSet() const
{
    return entityNameIsSet_;
}

void EntityResult::unsetentityName()
{
    entityNameIsSet_ = false;
}

}
}
}
}
}


