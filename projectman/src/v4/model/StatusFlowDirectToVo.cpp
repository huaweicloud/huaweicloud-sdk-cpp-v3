

#include "huaweicloud/projectman/v4/model/StatusFlowDirectToVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




StatusFlowDirectToVo::StatusFlowDirectToVo()
{
    parentName_ = "";
    parentNameIsSet_ = false;
    parentType_ = "";
    parentTypeIsSet_ = false;
    statusId_ = "";
    statusIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    statusType_ = "";
    statusTypeIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
}

StatusFlowDirectToVo::~StatusFlowDirectToVo() = default;

void StatusFlowDirectToVo::validate()
{
}

web::json::value StatusFlowDirectToVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parentNameIsSet_) {
        val[utility::conversions::to_string_t("parent_name")] = ModelBase::toJson(parentName_);
    }
    if(parentTypeIsSet_) {
        val[utility::conversions::to_string_t("parent_type")] = ModelBase::toJson(parentType_);
    }
    if(statusIdIsSet_) {
        val[utility::conversions::to_string_t("status_id")] = ModelBase::toJson(statusId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusTypeIsSet_) {
        val[utility::conversions::to_string_t("status_type")] = ModelBase::toJson(statusType_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }

    return val;
}
bool StatusFlowDirectToVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parent_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("status_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    return ok;
}


std::string StatusFlowDirectToVo::getParentName() const
{
    return parentName_;
}

void StatusFlowDirectToVo::setParentName(const std::string& value)
{
    parentName_ = value;
    parentNameIsSet_ = true;
}

bool StatusFlowDirectToVo::parentNameIsSet() const
{
    return parentNameIsSet_;
}

void StatusFlowDirectToVo::unsetparentName()
{
    parentNameIsSet_ = false;
}

std::string StatusFlowDirectToVo::getParentType() const
{
    return parentType_;
}

void StatusFlowDirectToVo::setParentType(const std::string& value)
{
    parentType_ = value;
    parentTypeIsSet_ = true;
}

bool StatusFlowDirectToVo::parentTypeIsSet() const
{
    return parentTypeIsSet_;
}

void StatusFlowDirectToVo::unsetparentType()
{
    parentTypeIsSet_ = false;
}

std::string StatusFlowDirectToVo::getStatusId() const
{
    return statusId_;
}

void StatusFlowDirectToVo::setStatusId(const std::string& value)
{
    statusId_ = value;
    statusIdIsSet_ = true;
}

bool StatusFlowDirectToVo::statusIdIsSet() const
{
    return statusIdIsSet_;
}

void StatusFlowDirectToVo::unsetstatusId()
{
    statusIdIsSet_ = false;
}

std::string StatusFlowDirectToVo::getName() const
{
    return name_;
}

void StatusFlowDirectToVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StatusFlowDirectToVo::nameIsSet() const
{
    return nameIsSet_;
}

void StatusFlowDirectToVo::unsetname()
{
    nameIsSet_ = false;
}

std::string StatusFlowDirectToVo::getStatusType() const
{
    return statusType_;
}

void StatusFlowDirectToVo::setStatusType(const std::string& value)
{
    statusType_ = value;
    statusTypeIsSet_ = true;
}

bool StatusFlowDirectToVo::statusTypeIsSet() const
{
    return statusTypeIsSet_;
}

void StatusFlowDirectToVo::unsetstatusType()
{
    statusTypeIsSet_ = false;
}

bool StatusFlowDirectToVo::isEnabled() const
{
    return enabled_;
}

void StatusFlowDirectToVo::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool StatusFlowDirectToVo::enabledIsSet() const
{
    return enabledIsSet_;
}

void StatusFlowDirectToVo::unsetenabled()
{
    enabledIsSet_ = false;
}

std::string StatusFlowDirectToVo::getParentId() const
{
    return parentId_;
}

void StatusFlowDirectToVo::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool StatusFlowDirectToVo::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void StatusFlowDirectToVo::unsetparentId()
{
    parentIdIsSet_ = false;
}

}
}
}
}
}


