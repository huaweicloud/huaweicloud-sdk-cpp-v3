

#include "huaweicloud/cloudtest/v1/model/DomainVisibleServiceVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DomainVisibleServiceVo::DomainVisibleServiceVo()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
    executeType_ = 0;
    executeTypeIsSet_ = false;
}

DomainVisibleServiceVo::~DomainVisibleServiceVo() = default;

void DomainVisibleServiceVo::validate()
{
}

web::json::value DomainVisibleServiceVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(executeTypeIsSet_) {
        val[utility::conversions::to_string_t("execute_type")] = ModelBase::toJson(executeType_);
    }

    return val;
}
bool DomainVisibleServiceVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteType(refVal);
        }
    }
    return ok;
}


std::string DomainVisibleServiceVo::getName() const
{
    return name_;
}

void DomainVisibleServiceVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DomainVisibleServiceVo::nameIsSet() const
{
    return nameIsSet_;
}

void DomainVisibleServiceVo::unsetname()
{
    nameIsSet_ = false;
}

int32_t DomainVisibleServiceVo::getType() const
{
    return type_;
}

void DomainVisibleServiceVo::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DomainVisibleServiceVo::typeIsSet() const
{
    return typeIsSet_;
}

void DomainVisibleServiceVo::unsettype()
{
    typeIsSet_ = false;
}

int32_t DomainVisibleServiceVo::getExecuteType() const
{
    return executeType_;
}

void DomainVisibleServiceVo::setExecuteType(int32_t value)
{
    executeType_ = value;
    executeTypeIsSet_ = true;
}

bool DomainVisibleServiceVo::executeTypeIsSet() const
{
    return executeTypeIsSet_;
}

void DomainVisibleServiceVo::unsetexecuteType()
{
    executeTypeIsSet_ = false;
}

}
}
}
}
}


