

#include "huaweicloud/cbr/v1/model/CheckpointCreateSkippedResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CheckpointCreateSkippedResource::CheckpointCreateSkippedResource()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
}

CheckpointCreateSkippedResource::~CheckpointCreateSkippedResource() = default;

void CheckpointCreateSkippedResource::validate()
{
}

web::json::value CheckpointCreateSkippedResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }

    return val;
}
bool CheckpointCreateSkippedResource::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    return ok;
}


std::string CheckpointCreateSkippedResource::getId() const
{
    return id_;
}

void CheckpointCreateSkippedResource::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CheckpointCreateSkippedResource::idIsSet() const
{
    return idIsSet_;
}

void CheckpointCreateSkippedResource::unsetid()
{
    idIsSet_ = false;
}

std::string CheckpointCreateSkippedResource::getType() const
{
    return type_;
}

void CheckpointCreateSkippedResource::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CheckpointCreateSkippedResource::typeIsSet() const
{
    return typeIsSet_;
}

void CheckpointCreateSkippedResource::unsettype()
{
    typeIsSet_ = false;
}

std::string CheckpointCreateSkippedResource::getName() const
{
    return name_;
}

void CheckpointCreateSkippedResource::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CheckpointCreateSkippedResource::nameIsSet() const
{
    return nameIsSet_;
}

void CheckpointCreateSkippedResource::unsetname()
{
    nameIsSet_ = false;
}

std::string CheckpointCreateSkippedResource::getCode() const
{
    return code_;
}

void CheckpointCreateSkippedResource::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool CheckpointCreateSkippedResource::codeIsSet() const
{
    return codeIsSet_;
}

void CheckpointCreateSkippedResource::unsetcode()
{
    codeIsSet_ = false;
}

std::string CheckpointCreateSkippedResource::getReason() const
{
    return reason_;
}

void CheckpointCreateSkippedResource::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool CheckpointCreateSkippedResource::reasonIsSet() const
{
    return reasonIsSet_;
}

void CheckpointCreateSkippedResource::unsetreason()
{
    reasonIsSet_ = false;
}

}
}
}
}
}


