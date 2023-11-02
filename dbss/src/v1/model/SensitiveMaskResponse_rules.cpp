

#include "huaweicloud/dbss/v1/model/SensitiveMaskResponse_rules.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SensitiveMaskResponse_rules::SensitiveMaskResponse_rules()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    regex_ = "";
    regexIsSet_ = false;
    maskValue_ = "";
    maskValueIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    operateTime_ = "";
    operateTimeIsSet_ = false;
}

SensitiveMaskResponse_rules::~SensitiveMaskResponse_rules() = default;

void SensitiveMaskResponse_rules::validate()
{
}

web::json::value SensitiveMaskResponse_rules::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(regexIsSet_) {
        val[utility::conversions::to_string_t("regex")] = ModelBase::toJson(regex_);
    }
    if(maskValueIsSet_) {
        val[utility::conversions::to_string_t("mask_value")] = ModelBase::toJson(maskValue_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(operateTimeIsSet_) {
        val[utility::conversions::to_string_t("operate_time")] = ModelBase::toJson(operateTime_);
    }

    return val;
}
bool SensitiveMaskResponse_rules::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("regex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mask_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mask_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaskValue(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("operate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateTime(refVal);
        }
    }
    return ok;
}


std::string SensitiveMaskResponse_rules::getId() const
{
    return id_;
}

void SensitiveMaskResponse_rules::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SensitiveMaskResponse_rules::idIsSet() const
{
    return idIsSet_;
}

void SensitiveMaskResponse_rules::unsetid()
{
    idIsSet_ = false;
}

std::string SensitiveMaskResponse_rules::getName() const
{
    return name_;
}

void SensitiveMaskResponse_rules::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SensitiveMaskResponse_rules::nameIsSet() const
{
    return nameIsSet_;
}

void SensitiveMaskResponse_rules::unsetname()
{
    nameIsSet_ = false;
}

std::string SensitiveMaskResponse_rules::getType() const
{
    return type_;
}

void SensitiveMaskResponse_rules::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SensitiveMaskResponse_rules::typeIsSet() const
{
    return typeIsSet_;
}

void SensitiveMaskResponse_rules::unsettype()
{
    typeIsSet_ = false;
}

std::string SensitiveMaskResponse_rules::getRegex() const
{
    return regex_;
}

void SensitiveMaskResponse_rules::setRegex(const std::string& value)
{
    regex_ = value;
    regexIsSet_ = true;
}

bool SensitiveMaskResponse_rules::regexIsSet() const
{
    return regexIsSet_;
}

void SensitiveMaskResponse_rules::unsetregex()
{
    regexIsSet_ = false;
}

std::string SensitiveMaskResponse_rules::getMaskValue() const
{
    return maskValue_;
}

void SensitiveMaskResponse_rules::setMaskValue(const std::string& value)
{
    maskValue_ = value;
    maskValueIsSet_ = true;
}

bool SensitiveMaskResponse_rules::maskValueIsSet() const
{
    return maskValueIsSet_;
}

void SensitiveMaskResponse_rules::unsetmaskValue()
{
    maskValueIsSet_ = false;
}

std::string SensitiveMaskResponse_rules::getStatus() const
{
    return status_;
}

void SensitiveMaskResponse_rules::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SensitiveMaskResponse_rules::statusIsSet() const
{
    return statusIsSet_;
}

void SensitiveMaskResponse_rules::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SensitiveMaskResponse_rules::getOperateTime() const
{
    return operateTime_;
}

void SensitiveMaskResponse_rules::setOperateTime(const std::string& value)
{
    operateTime_ = value;
    operateTimeIsSet_ = true;
}

bool SensitiveMaskResponse_rules::operateTimeIsSet() const
{
    return operateTimeIsSet_;
}

void SensitiveMaskResponse_rules::unsetoperateTime()
{
    operateTimeIsSet_ = false;
}

}
}
}
}
}


