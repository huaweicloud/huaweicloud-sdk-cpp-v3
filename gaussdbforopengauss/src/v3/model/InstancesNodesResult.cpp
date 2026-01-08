

#include "huaweicloud/gaussdbforopengauss/v3/model/InstancesNodesResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




InstancesNodesResult::InstancesNodesResult()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    role_ = "";
    roleIsSet_ = false;
    componentIdsIsSet_ = false;
}

InstancesNodesResult::~InstancesNodesResult() = default;

void InstancesNodesResult::validate()
{
}

web::json::value InstancesNodesResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }
    if(componentIdsIsSet_) {
        val[utility::conversions::to_string_t("component_ids")] = ModelBase::toJson(componentIds_);
    }

    return val;
}
bool InstancesNodesResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("component_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentIds(refVal);
        }
    }
    return ok;
}


std::string InstancesNodesResult::getId() const
{
    return id_;
}

void InstancesNodesResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool InstancesNodesResult::idIsSet() const
{
    return idIsSet_;
}

void InstancesNodesResult::unsetid()
{
    idIsSet_ = false;
}

std::string InstancesNodesResult::getName() const
{
    return name_;
}

void InstancesNodesResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool InstancesNodesResult::nameIsSet() const
{
    return nameIsSet_;
}

void InstancesNodesResult::unsetname()
{
    nameIsSet_ = false;
}

std::string InstancesNodesResult::getRole() const
{
    return role_;
}

void InstancesNodesResult::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool InstancesNodesResult::roleIsSet() const
{
    return roleIsSet_;
}

void InstancesNodesResult::unsetrole()
{
    roleIsSet_ = false;
}

std::vector<std::string>& InstancesNodesResult::getComponentIds()
{
    return componentIds_;
}

void InstancesNodesResult::setComponentIds(const std::vector<std::string>& value)
{
    componentIds_ = value;
    componentIdsIsSet_ = true;
}

bool InstancesNodesResult::componentIdsIsSet() const
{
    return componentIdsIsSet_;
}

void InstancesNodesResult::unsetcomponentIds()
{
    componentIdsIsSet_ = false;
}

}
}
}
}
}


