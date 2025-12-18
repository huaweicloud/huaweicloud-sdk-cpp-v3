

#include "huaweicloud/meeting/v1/model/QueryResourceResultDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




QueryResourceResultDTO::QueryResourceResultDTO()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    typeId_ = "";
    typeIdIsSet_ = false;
    typeDesc_ = "";
    typeDescIsSet_ = false;
    vmrMode_ = 0;
    vmrModeIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    expireDate_ = 0L;
    expireDateIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    editable_ = false;
    editableIsSet_ = false;
}

QueryResourceResultDTO::~QueryResourceResultDTO() = default;

void QueryResourceResultDTO::validate()
{
}

web::json::value QueryResourceResultDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(typeIdIsSet_) {
        val[utility::conversions::to_string_t("typeId")] = ModelBase::toJson(typeId_);
    }
    if(typeDescIsSet_) {
        val[utility::conversions::to_string_t("typeDesc")] = ModelBase::toJson(typeDesc_);
    }
    if(vmrModeIsSet_) {
        val[utility::conversions::to_string_t("vmrMode")] = ModelBase::toJson(vmrMode_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(expireDateIsSet_) {
        val[utility::conversions::to_string_t("expireDate")] = ModelBase::toJson(expireDate_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("orderId")] = ModelBase::toJson(orderId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(editableIsSet_) {
        val[utility::conversions::to_string_t("editable")] = ModelBase::toJson(editable_);
    }

    return val;
}
bool QueryResourceResultDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("typeId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("typeId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTypeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("typeDesc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("typeDesc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTypeDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vmrMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrMode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expireDate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expireDate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("orderId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("orderId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("editable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("editable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEditable(refVal);
        }
    }
    return ok;
}


std::string QueryResourceResultDTO::getId() const
{
    return id_;
}

void QueryResourceResultDTO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QueryResourceResultDTO::idIsSet() const
{
    return idIsSet_;
}

void QueryResourceResultDTO::unsetid()
{
    idIsSet_ = false;
}

std::string QueryResourceResultDTO::getType() const
{
    return type_;
}

void QueryResourceResultDTO::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool QueryResourceResultDTO::typeIsSet() const
{
    return typeIsSet_;
}

void QueryResourceResultDTO::unsettype()
{
    typeIsSet_ = false;
}

std::string QueryResourceResultDTO::getTypeId() const
{
    return typeId_;
}

void QueryResourceResultDTO::setTypeId(const std::string& value)
{
    typeId_ = value;
    typeIdIsSet_ = true;
}

bool QueryResourceResultDTO::typeIdIsSet() const
{
    return typeIdIsSet_;
}

void QueryResourceResultDTO::unsettypeId()
{
    typeIdIsSet_ = false;
}

std::string QueryResourceResultDTO::getTypeDesc() const
{
    return typeDesc_;
}

void QueryResourceResultDTO::setTypeDesc(const std::string& value)
{
    typeDesc_ = value;
    typeDescIsSet_ = true;
}

bool QueryResourceResultDTO::typeDescIsSet() const
{
    return typeDescIsSet_;
}

void QueryResourceResultDTO::unsettypeDesc()
{
    typeDescIsSet_ = false;
}

int32_t QueryResourceResultDTO::getVmrMode() const
{
    return vmrMode_;
}

void QueryResourceResultDTO::setVmrMode(int32_t value)
{
    vmrMode_ = value;
    vmrModeIsSet_ = true;
}

bool QueryResourceResultDTO::vmrModeIsSet() const
{
    return vmrModeIsSet_;
}

void QueryResourceResultDTO::unsetvmrMode()
{
    vmrModeIsSet_ = false;
}

int32_t QueryResourceResultDTO::getCount() const
{
    return count_;
}

void QueryResourceResultDTO::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool QueryResourceResultDTO::countIsSet() const
{
    return countIsSet_;
}

void QueryResourceResultDTO::unsetcount()
{
    countIsSet_ = false;
}

int64_t QueryResourceResultDTO::getExpireDate() const
{
    return expireDate_;
}

void QueryResourceResultDTO::setExpireDate(int64_t value)
{
    expireDate_ = value;
    expireDateIsSet_ = true;
}

bool QueryResourceResultDTO::expireDateIsSet() const
{
    return expireDateIsSet_;
}

void QueryResourceResultDTO::unsetexpireDate()
{
    expireDateIsSet_ = false;
}

std::string QueryResourceResultDTO::getOrderId() const
{
    return orderId_;
}

void QueryResourceResultDTO::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool QueryResourceResultDTO::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void QueryResourceResultDTO::unsetorderId()
{
    orderIdIsSet_ = false;
}

int32_t QueryResourceResultDTO::getStatus() const
{
    return status_;
}

void QueryResourceResultDTO::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool QueryResourceResultDTO::statusIsSet() const
{
    return statusIsSet_;
}

void QueryResourceResultDTO::unsetstatus()
{
    statusIsSet_ = false;
}

bool QueryResourceResultDTO::isEditable() const
{
    return editable_;
}

void QueryResourceResultDTO::setEditable(bool value)
{
    editable_ = value;
    editableIsSet_ = true;
}

bool QueryResourceResultDTO::editableIsSet() const
{
    return editableIsSet_;
}

void QueryResourceResultDTO::unseteditable()
{
    editableIsSet_ = false;
}

}
}
}
}
}


