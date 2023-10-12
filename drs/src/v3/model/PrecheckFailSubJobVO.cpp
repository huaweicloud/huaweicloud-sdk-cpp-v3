

#include "huaweicloud/drs/v3/model/PrecheckFailSubJobVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




PrecheckFailSubJobVO::PrecheckFailSubJobVO()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    checkResult_ = "";
    checkResultIsSet_ = false;
}

PrecheckFailSubJobVO::~PrecheckFailSubJobVO() = default;

void PrecheckFailSubJobVO::validate()
{
}

web::json::value PrecheckFailSubJobVO::toJson() const
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
bool PrecheckFailSubJobVO::fromJson(const web::json::value& val)
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


std::string PrecheckFailSubJobVO::getId() const
{
    return id_;
}

void PrecheckFailSubJobVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PrecheckFailSubJobVO::idIsSet() const
{
    return idIsSet_;
}

void PrecheckFailSubJobVO::unsetid()
{
    idIsSet_ = false;
}

std::string PrecheckFailSubJobVO::getName() const
{
    return name_;
}

void PrecheckFailSubJobVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PrecheckFailSubJobVO::nameIsSet() const
{
    return nameIsSet_;
}

void PrecheckFailSubJobVO::unsetname()
{
    nameIsSet_ = false;
}

std::string PrecheckFailSubJobVO::getCheckResult() const
{
    return checkResult_;
}

void PrecheckFailSubJobVO::setCheckResult(const std::string& value)
{
    checkResult_ = value;
    checkResultIsSet_ = true;
}

bool PrecheckFailSubJobVO::checkResultIsSet() const
{
    return checkResultIsSet_;
}

void PrecheckFailSubJobVO::unsetcheckResult()
{
    checkResultIsSet_ = false;
}

}
}
}
}
}


