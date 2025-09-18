

#include "huaweicloud/projectman/v4/model/ScrumStatusFlowDirectToVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ScrumStatusFlowDirectToVo::ScrumStatusFlowDirectToVo()
{
    id_ = "";
    idIsSet_ = false;
    statusId_ = 0;
    statusIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
}

ScrumStatusFlowDirectToVo::~ScrumStatusFlowDirectToVo() = default;

void ScrumStatusFlowDirectToVo::validate()
{
}

web::json::value ScrumStatusFlowDirectToVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIdIsSet_) {
        val[utility::conversions::to_string_t("status_id")] = ModelBase::toJson(statusId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }

    return val;
}
bool ScrumStatusFlowDirectToVo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    return ok;
}


std::string ScrumStatusFlowDirectToVo::getId() const
{
    return id_;
}

void ScrumStatusFlowDirectToVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ScrumStatusFlowDirectToVo::idIsSet() const
{
    return idIsSet_;
}

void ScrumStatusFlowDirectToVo::unsetid()
{
    idIsSet_ = false;
}

int32_t ScrumStatusFlowDirectToVo::getStatusId() const
{
    return statusId_;
}

void ScrumStatusFlowDirectToVo::setStatusId(int32_t value)
{
    statusId_ = value;
    statusIdIsSet_ = true;
}

bool ScrumStatusFlowDirectToVo::statusIdIsSet() const
{
    return statusIdIsSet_;
}

void ScrumStatusFlowDirectToVo::unsetstatusId()
{
    statusIdIsSet_ = false;
}

std::string ScrumStatusFlowDirectToVo::getName() const
{
    return name_;
}

void ScrumStatusFlowDirectToVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ScrumStatusFlowDirectToVo::nameIsSet() const
{
    return nameIsSet_;
}

void ScrumStatusFlowDirectToVo::unsetname()
{
    nameIsSet_ = false;
}

bool ScrumStatusFlowDirectToVo::isEnabled() const
{
    return enabled_;
}

void ScrumStatusFlowDirectToVo::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool ScrumStatusFlowDirectToVo::enabledIsSet() const
{
    return enabledIsSet_;
}

void ScrumStatusFlowDirectToVo::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


