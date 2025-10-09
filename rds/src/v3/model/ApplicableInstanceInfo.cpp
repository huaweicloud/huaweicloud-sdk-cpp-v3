

#include "huaweicloud/rds/v3/model/ApplicableInstanceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ApplicableInstanceInfo::ApplicableInstanceInfo()
{
    entityId_ = "";
    entityIdIsSet_ = false;
    entityName_ = "";
    entityNameIsSet_ = false;
}

ApplicableInstanceInfo::~ApplicableInstanceInfo() = default;

void ApplicableInstanceInfo::validate()
{
}

web::json::value ApplicableInstanceInfo::toJson() const
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
bool ApplicableInstanceInfo::fromJson(const web::json::value& val)
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


std::string ApplicableInstanceInfo::getEntityId() const
{
    return entityId_;
}

void ApplicableInstanceInfo::setEntityId(const std::string& value)
{
    entityId_ = value;
    entityIdIsSet_ = true;
}

bool ApplicableInstanceInfo::entityIdIsSet() const
{
    return entityIdIsSet_;
}

void ApplicableInstanceInfo::unsetentityId()
{
    entityIdIsSet_ = false;
}

std::string ApplicableInstanceInfo::getEntityName() const
{
    return entityName_;
}

void ApplicableInstanceInfo::setEntityName(const std::string& value)
{
    entityName_ = value;
    entityNameIsSet_ = true;
}

bool ApplicableInstanceInfo::entityNameIsSet() const
{
    return entityNameIsSet_;
}

void ApplicableInstanceInfo::unsetentityName()
{
    entityNameIsSet_ = false;
}

}
}
}
}
}


