

#include "huaweicloud/cbr/v1/model/ProtectablesResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ProtectablesResp::ProtectablesResp()
{
    childrenIsSet_ = false;
    detailIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    protectableIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ProtectablesResp::~ProtectablesResp() = default;

void ProtectablesResp::validate()
{
}

web::json::value ProtectablesResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(childrenIsSet_) {
        val[utility::conversions::to_string_t("children")] = ModelBase::toJson(children_);
    }
    if(detailIsSet_) {
        val[utility::conversions::to_string_t("detail")] = ModelBase::toJson(detail_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(protectableIsSet_) {
        val[utility::conversions::to_string_t("protectable")] = ModelBase::toJson(protectable_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ProtectablesResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("children"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("children"));
        if(!fieldValue.is_null())
        {
            std::vector<Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildren(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetail(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("protectable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protectable"));
        if(!fieldValue.is_null())
        {
            ProtectableResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
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
    return ok;
}


std::vector<Object>& ProtectablesResp::getChildren()
{
    return children_;
}

void ProtectablesResp::setChildren(const std::vector<Object>& value)
{
    children_ = value;
    childrenIsSet_ = true;
}

bool ProtectablesResp::childrenIsSet() const
{
    return childrenIsSet_;
}

void ProtectablesResp::unsetchildren()
{
    childrenIsSet_ = false;
}

Object ProtectablesResp::getDetail() const
{
    return detail_;
}

void ProtectablesResp::setDetail(const Object& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool ProtectablesResp::detailIsSet() const
{
    return detailIsSet_;
}

void ProtectablesResp::unsetdetail()
{
    detailIsSet_ = false;
}

std::string ProtectablesResp::getId() const
{
    return id_;
}

void ProtectablesResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProtectablesResp::idIsSet() const
{
    return idIsSet_;
}

void ProtectablesResp::unsetid()
{
    idIsSet_ = false;
}

std::string ProtectablesResp::getName() const
{
    return name_;
}

void ProtectablesResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProtectablesResp::nameIsSet() const
{
    return nameIsSet_;
}

void ProtectablesResp::unsetname()
{
    nameIsSet_ = false;
}

ProtectableResult ProtectablesResp::getProtectable() const
{
    return protectable_;
}

void ProtectablesResp::setProtectable(const ProtectableResult& value)
{
    protectable_ = value;
    protectableIsSet_ = true;
}

bool ProtectablesResp::protectableIsSet() const
{
    return protectableIsSet_;
}

void ProtectablesResp::unsetprotectable()
{
    protectableIsSet_ = false;
}

int32_t ProtectablesResp::getSize() const
{
    return size_;
}

void ProtectablesResp::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ProtectablesResp::sizeIsSet() const
{
    return sizeIsSet_;
}

void ProtectablesResp::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ProtectablesResp::getStatus() const
{
    return status_;
}

void ProtectablesResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ProtectablesResp::statusIsSet() const
{
    return statusIsSet_;
}

void ProtectablesResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ProtectablesResp::getType() const
{
    return type_;
}

void ProtectablesResp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ProtectablesResp::typeIsSet() const
{
    return typeIsSet_;
}

void ProtectablesResp::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


