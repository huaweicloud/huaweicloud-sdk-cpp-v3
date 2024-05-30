

#include "huaweicloud/organizations/v1/model/TargetDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




TargetDto::TargetDto()
{
    type_ = "";
    typeIsSet_ = false;
    entity_ = "";
    entityIsSet_ = false;
}

TargetDto::~TargetDto() = default;

void TargetDto::validate()
{
}

web::json::value TargetDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(entityIsSet_) {
        val[utility::conversions::to_string_t("entity")] = ModelBase::toJson(entity_);
    }

    return val;
}
bool TargetDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("entity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntity(refVal);
        }
    }
    return ok;
}


std::string TargetDto::getType() const
{
    return type_;
}

void TargetDto::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TargetDto::typeIsSet() const
{
    return typeIsSet_;
}

void TargetDto::unsettype()
{
    typeIsSet_ = false;
}

std::string TargetDto::getEntity() const
{
    return entity_;
}

void TargetDto::setEntity(const std::string& value)
{
    entity_ = value;
    entityIsSet_ = true;
}

bool TargetDto::entityIsSet() const
{
    return entityIsSet_;
}

void TargetDto::unsetentity()
{
    entityIsSet_ = false;
}

}
}
}
}
}


