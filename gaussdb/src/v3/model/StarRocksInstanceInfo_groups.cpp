

#include "huaweicloud/gaussdb/v3/model/StarRocksInstanceInfo_groups.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




StarRocksInstanceInfo_groups::StarRocksInstanceInfo_groups()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nodesIsSet_ = false;
    groupTypeName_ = "";
    groupTypeNameIsSet_ = false;
    groupNodeType_ = "";
    groupNodeTypeIsSet_ = false;
}

StarRocksInstanceInfo_groups::~StarRocksInstanceInfo_groups() = default;

void StarRocksInstanceInfo_groups::validate()
{
}

web::json::value StarRocksInstanceInfo_groups::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }
    if(groupTypeNameIsSet_) {
        val[utility::conversions::to_string_t("group_type_name")] = ModelBase::toJson(groupTypeName_);
    }
    if(groupNodeTypeIsSet_) {
        val[utility::conversions::to_string_t("group_node_type")] = ModelBase::toJson(groupNodeType_);
    }

    return val;
}
bool StarRocksInstanceInfo_groups::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<StarRocksInstanceInfo_nodes> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodes(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("group_node_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_node_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupNodeType(refVal);
        }
    }
    return ok;
}


std::string StarRocksInstanceInfo_groups::getId() const
{
    return id_;
}

void StarRocksInstanceInfo_groups::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StarRocksInstanceInfo_groups::idIsSet() const
{
    return idIsSet_;
}

void StarRocksInstanceInfo_groups::unsetid()
{
    idIsSet_ = false;
}

std::string StarRocksInstanceInfo_groups::getName() const
{
    return name_;
}

void StarRocksInstanceInfo_groups::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StarRocksInstanceInfo_groups::nameIsSet() const
{
    return nameIsSet_;
}

void StarRocksInstanceInfo_groups::unsetname()
{
    nameIsSet_ = false;
}

std::vector<StarRocksInstanceInfo_nodes>& StarRocksInstanceInfo_groups::getNodes()
{
    return nodes_;
}

void StarRocksInstanceInfo_groups::setNodes(const std::vector<StarRocksInstanceInfo_nodes>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool StarRocksInstanceInfo_groups::nodesIsSet() const
{
    return nodesIsSet_;
}

void StarRocksInstanceInfo_groups::unsetnodes()
{
    nodesIsSet_ = false;
}

std::string StarRocksInstanceInfo_groups::getGroupTypeName() const
{
    return groupTypeName_;
}

void StarRocksInstanceInfo_groups::setGroupTypeName(const std::string& value)
{
    groupTypeName_ = value;
    groupTypeNameIsSet_ = true;
}

bool StarRocksInstanceInfo_groups::groupTypeNameIsSet() const
{
    return groupTypeNameIsSet_;
}

void StarRocksInstanceInfo_groups::unsetgroupTypeName()
{
    groupTypeNameIsSet_ = false;
}

std::string StarRocksInstanceInfo_groups::getGroupNodeType() const
{
    return groupNodeType_;
}

void StarRocksInstanceInfo_groups::setGroupNodeType(const std::string& value)
{
    groupNodeType_ = value;
    groupNodeTypeIsSet_ = true;
}

bool StarRocksInstanceInfo_groups::groupNodeTypeIsSet() const
{
    return groupNodeTypeIsSet_;
}

void StarRocksInstanceInfo_groups::unsetgroupNodeType()
{
    groupNodeTypeIsSet_ = false;
}

}
}
}
}
}


