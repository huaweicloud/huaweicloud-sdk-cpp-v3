

#include "huaweicloud/gaussdb/v3/model/ChInstancesInfoRsponse_instance_groups.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChInstancesInfoRsponse_instance_groups::ChInstancesInfoRsponse_instance_groups()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    groupTypeName_ = "";
    groupTypeNameIsSet_ = false;
    nodesIsSet_ = false;
}

ChInstancesInfoRsponse_instance_groups::~ChInstancesInfoRsponse_instance_groups() = default;

void ChInstancesInfoRsponse_instance_groups::validate()
{
}

web::json::value ChInstancesInfoRsponse_instance_groups::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(groupTypeNameIsSet_) {
        val[utility::conversions::to_string_t("group_type_name")] = ModelBase::toJson(groupTypeName_);
    }
    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }

    return val;
}
bool ChInstancesInfoRsponse_instance_groups::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_type_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_type_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupTypeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<ClickHouseNodeInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodes(refVal);
        }
    }
    return ok;
}


std::string ChInstancesInfoRsponse_instance_groups::getId() const
{
    return id_;
}

void ChInstancesInfoRsponse_instance_groups::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance_groups::idIsSet() const
{
    return idIsSet_;
}

void ChInstancesInfoRsponse_instance_groups::unsetid()
{
    idIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance_groups::getName() const
{
    return name_;
}

void ChInstancesInfoRsponse_instance_groups::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance_groups::nameIsSet() const
{
    return nameIsSet_;
}

void ChInstancesInfoRsponse_instance_groups::unsetname()
{
    nameIsSet_ = false;
}

std::string ChInstancesInfoRsponse_instance_groups::getGroupTypeName() const
{
    return groupTypeName_;
}

void ChInstancesInfoRsponse_instance_groups::setGroupTypeName(const std::string& value)
{
    groupTypeName_ = value;
    groupTypeNameIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance_groups::groupTypeNameIsSet() const
{
    return groupTypeNameIsSet_;
}

void ChInstancesInfoRsponse_instance_groups::unsetgroupTypeName()
{
    groupTypeNameIsSet_ = false;
}

std::vector<ClickHouseNodeInfo>& ChInstancesInfoRsponse_instance_groups::getNodes()
{
    return nodes_;
}

void ChInstancesInfoRsponse_instance_groups::setNodes(const std::vector<ClickHouseNodeInfo>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool ChInstancesInfoRsponse_instance_groups::nodesIsSet() const
{
    return nodesIsSet_;
}

void ChInstancesInfoRsponse_instance_groups::unsetnodes()
{
    nodesIsSet_ = false;
}

}
}
}
}
}


