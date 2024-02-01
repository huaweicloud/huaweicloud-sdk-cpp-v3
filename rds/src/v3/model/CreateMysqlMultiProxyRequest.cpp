

#include "huaweicloud/rds/v3/model/CreateMysqlMultiProxyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateMysqlMultiProxyRequest::CreateMysqlMultiProxyRequest()
{
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    nodeNum_ = 0;
    nodeNumIsSet_ = false;
    proxyName_ = "";
    proxyNameIsSet_ = false;
    proxyMode_ = "";
    proxyModeIsSet_ = false;
    routeMode_ = 0;
    routeModeIsSet_ = false;
    nodesReadWeightIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
}

CreateMysqlMultiProxyRequest::~CreateMysqlMultiProxyRequest() = default;

void CreateMysqlMultiProxyRequest::validate()
{
}

web::json::value CreateMysqlMultiProxyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavor_ref")] = ModelBase::toJson(flavorRef_);
    }
    if(nodeNumIsSet_) {
        val[utility::conversions::to_string_t("node_num")] = ModelBase::toJson(nodeNum_);
    }
    if(proxyNameIsSet_) {
        val[utility::conversions::to_string_t("proxy_name")] = ModelBase::toJson(proxyName_);
    }
    if(proxyModeIsSet_) {
        val[utility::conversions::to_string_t("proxy_mode")] = ModelBase::toJson(proxyMode_);
    }
    if(routeModeIsSet_) {
        val[utility::conversions::to_string_t("route_mode")] = ModelBase::toJson(routeMode_);
    }
    if(nodesReadWeightIsSet_) {
        val[utility::conversions::to_string_t("nodes_read_weight")] = ModelBase::toJson(nodesReadWeight_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }

    return val;
}
bool CreateMysqlMultiProxyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("route_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("route_mode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRouteMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodes_read_weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodes_read_weight"));
        if(!fieldValue.is_null())
        {
            std::vector<InstancesWeight> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodesReadWeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    return ok;
}


std::string CreateMysqlMultiProxyRequest::getFlavorRef() const
{
    return flavorRef_;
}

void CreateMysqlMultiProxyRequest::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool CreateMysqlMultiProxyRequest::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void CreateMysqlMultiProxyRequest::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

int32_t CreateMysqlMultiProxyRequest::getNodeNum() const
{
    return nodeNum_;
}

void CreateMysqlMultiProxyRequest::setNodeNum(int32_t value)
{
    nodeNum_ = value;
    nodeNumIsSet_ = true;
}

bool CreateMysqlMultiProxyRequest::nodeNumIsSet() const
{
    return nodeNumIsSet_;
}

void CreateMysqlMultiProxyRequest::unsetnodeNum()
{
    nodeNumIsSet_ = false;
}

std::string CreateMysqlMultiProxyRequest::getProxyName() const
{
    return proxyName_;
}

void CreateMysqlMultiProxyRequest::setProxyName(const std::string& value)
{
    proxyName_ = value;
    proxyNameIsSet_ = true;
}

bool CreateMysqlMultiProxyRequest::proxyNameIsSet() const
{
    return proxyNameIsSet_;
}

void CreateMysqlMultiProxyRequest::unsetproxyName()
{
    proxyNameIsSet_ = false;
}

std::string CreateMysqlMultiProxyRequest::getProxyMode() const
{
    return proxyMode_;
}

void CreateMysqlMultiProxyRequest::setProxyMode(const std::string& value)
{
    proxyMode_ = value;
    proxyModeIsSet_ = true;
}

bool CreateMysqlMultiProxyRequest::proxyModeIsSet() const
{
    return proxyModeIsSet_;
}

void CreateMysqlMultiProxyRequest::unsetproxyMode()
{
    proxyModeIsSet_ = false;
}

int32_t CreateMysqlMultiProxyRequest::getRouteMode() const
{
    return routeMode_;
}

void CreateMysqlMultiProxyRequest::setRouteMode(int32_t value)
{
    routeMode_ = value;
    routeModeIsSet_ = true;
}

bool CreateMysqlMultiProxyRequest::routeModeIsSet() const
{
    return routeModeIsSet_;
}

void CreateMysqlMultiProxyRequest::unsetrouteMode()
{
    routeModeIsSet_ = false;
}

std::vector<InstancesWeight>& CreateMysqlMultiProxyRequest::getNodesReadWeight()
{
    return nodesReadWeight_;
}

void CreateMysqlMultiProxyRequest::setNodesReadWeight(const std::vector<InstancesWeight>& value)
{
    nodesReadWeight_ = value;
    nodesReadWeightIsSet_ = true;
}

bool CreateMysqlMultiProxyRequest::nodesReadWeightIsSet() const
{
    return nodesReadWeightIsSet_;
}

void CreateMysqlMultiProxyRequest::unsetnodesReadWeight()
{
    nodesReadWeightIsSet_ = false;
}

std::string CreateMysqlMultiProxyRequest::getSubnetId() const
{
    return subnetId_;
}

void CreateMysqlMultiProxyRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool CreateMysqlMultiProxyRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void CreateMysqlMultiProxyRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

}
}
}
}
}


