

#include "huaweicloud/gaussdbforopengauss/v3/model/CnComponentInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CnComponentInfoResult::CnComponentInfoResult()
{
    nodeName_ = "";
    nodeNameIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    componentId_ = "";
    componentIdIsSet_ = false;
}

CnComponentInfoResult::~CnComponentInfoResult() = default;

void CnComponentInfoResult::validate()
{
}

web::json::value CnComponentInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("component_id")] = ModelBase::toJson(componentId_);
    }

    return val;
}
bool CnComponentInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("component_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentId(refVal);
        }
    }
    return ok;
}


std::string CnComponentInfoResult::getNodeName() const
{
    return nodeName_;
}

void CnComponentInfoResult::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool CnComponentInfoResult::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void CnComponentInfoResult::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string CnComponentInfoResult::getNodeId() const
{
    return nodeId_;
}

void CnComponentInfoResult::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool CnComponentInfoResult::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void CnComponentInfoResult::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string CnComponentInfoResult::getComponentId() const
{
    return componentId_;
}

void CnComponentInfoResult::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool CnComponentInfoResult::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void CnComponentInfoResult::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

}
}
}
}
}


