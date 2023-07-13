

#include "huaweicloud/drs/v5/model/PrecheckFailSubJobResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




PrecheckFailSubJobResult::PrecheckFailSubJobResult()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    checkResult_ = "";
    checkResultIsSet_ = false;
}

PrecheckFailSubJobResult::~PrecheckFailSubJobResult() = default;

void PrecheckFailSubJobResult::validate()
{
}

web::json::value PrecheckFailSubJobResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(checkResultIsSet_) {
        val[utility::conversions::to_string_t("check_result")] = ModelBase::toJson(checkResult_);
    }

    return val;
}

bool PrecheckFailSubJobResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("check_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckResult(refVal);
        }
    }
    return ok;
}

std::string PrecheckFailSubJobResult::getId() const
{
    return id_;
}

void PrecheckFailSubJobResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PrecheckFailSubJobResult::idIsSet() const
{
    return idIsSet_;
}

void PrecheckFailSubJobResult::unsetid()
{
    idIsSet_ = false;
}

std::string PrecheckFailSubJobResult::getName() const
{
    return name_;
}

void PrecheckFailSubJobResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PrecheckFailSubJobResult::nameIsSet() const
{
    return nameIsSet_;
}

void PrecheckFailSubJobResult::unsetname()
{
    nameIsSet_ = false;
}

std::string PrecheckFailSubJobResult::getCheckResult() const
{
    return checkResult_;
}

void PrecheckFailSubJobResult::setCheckResult(const std::string& value)
{
    checkResult_ = value;
    checkResultIsSet_ = true;
}

bool PrecheckFailSubJobResult::checkResultIsSet() const
{
    return checkResultIsSet_;
}

void PrecheckFailSubJobResult::unsetcheckResult()
{
    checkResultIsSet_ = false;
}

}
}
}
}
}


