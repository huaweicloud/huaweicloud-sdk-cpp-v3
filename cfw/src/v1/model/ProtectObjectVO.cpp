

#include "huaweicloud/cfw/v1/model/ProtectObjectVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ProtectObjectVO::ProtectObjectVO()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    objectName_ = "";
    objectNameIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
}

ProtectObjectVO::~ProtectObjectVO() = default;

void ProtectObjectVO::validate()
{
}

web::json::value ProtectObjectVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(objectNameIsSet_) {
        val[utility::conversions::to_string_t("object_name")] = ModelBase::toJson(objectName_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ProtectObjectVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ProtectObjectVO::getObjectId() const
{
    return objectId_;
}

void ProtectObjectVO::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ProtectObjectVO::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ProtectObjectVO::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string ProtectObjectVO::getObjectName() const
{
    return objectName_;
}

void ProtectObjectVO::setObjectName(const std::string& value)
{
    objectName_ = value;
    objectNameIsSet_ = true;
}

bool ProtectObjectVO::objectNameIsSet() const
{
    return objectNameIsSet_;
}

void ProtectObjectVO::unsetobjectName()
{
    objectNameIsSet_ = false;
}

int32_t ProtectObjectVO::getType() const
{
    return type_;
}

void ProtectObjectVO::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ProtectObjectVO::typeIsSet() const
{
    return typeIsSet_;
}

void ProtectObjectVO::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


