

#include "huaweicloud/codeartspipeline/v2/model/Rule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




Rule::Rule()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    operator_ = "";
    operatorIsSet_ = false;
    operateTime_ = 0L;
    operateTimeIsSet_ = false;
}

Rule::~Rule() = default;

void Rule::validate()
{
}

web::json::value Rule::toJson() const
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
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }
    if(operateTimeIsSet_) {
        val[utility::conversions::to_string_t("operate_time")] = ModelBase::toJson(operateTime_);
    }

    return val;
}
bool Rule::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateTime(refVal);
        }
    }
    return ok;
}


std::string Rule::getId() const
{
    return id_;
}

void Rule::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Rule::idIsSet() const
{
    return idIsSet_;
}

void Rule::unsetid()
{
    idIsSet_ = false;
}

std::string Rule::getType() const
{
    return type_;
}

void Rule::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Rule::typeIsSet() const
{
    return typeIsSet_;
}

void Rule::unsettype()
{
    typeIsSet_ = false;
}

std::string Rule::getName() const
{
    return name_;
}

void Rule::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Rule::nameIsSet() const
{
    return nameIsSet_;
}

void Rule::unsetname()
{
    nameIsSet_ = false;
}

std::string Rule::getVersion() const
{
    return version_;
}

void Rule::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool Rule::versionIsSet() const
{
    return versionIsSet_;
}

void Rule::unsetversion()
{
    versionIsSet_ = false;
}

std::string Rule::getOperator() const
{
    return operator_;
}

void Rule::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool Rule::operatorIsSet() const
{
    return operatorIsSet_;
}

void Rule::unsetoperator()
{
    operatorIsSet_ = false;
}

int64_t Rule::getOperateTime() const
{
    return operateTime_;
}

void Rule::setOperateTime(int64_t value)
{
    operateTime_ = value;
    operateTimeIsSet_ = true;
}

bool Rule::operateTimeIsSet() const
{
    return operateTimeIsSet_;
}

void Rule::unsetoperateTime()
{
    operateTimeIsSet_ = false;
}

}
}
}
}
}


