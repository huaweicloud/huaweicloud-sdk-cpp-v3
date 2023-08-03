

#include "huaweicloud/gaussdb/v3/model/OpenMysqlProxyRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




OpenMysqlProxyRequestBody::OpenMysqlProxyRequestBody()
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
}

OpenMysqlProxyRequestBody::~OpenMysqlProxyRequestBody() = default;

void OpenMysqlProxyRequestBody::validate()
{
}

web::json::value OpenMysqlProxyRequestBody::toJson() const
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

    return val;
}

bool OpenMysqlProxyRequestBody::fromJson(const web::json::value& val)
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
            std::vector<NodesWeight> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodesReadWeight(refVal);
        }
    }
    return ok;
}

std::string OpenMysqlProxyRequestBody::getFlavorRef() const
{
    return flavorRef_;
}

void OpenMysqlProxyRequestBody::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool OpenMysqlProxyRequestBody::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void OpenMysqlProxyRequestBody::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

int32_t OpenMysqlProxyRequestBody::getNodeNum() const
{
    return nodeNum_;
}

void OpenMysqlProxyRequestBody::setNodeNum(int32_t value)
{
    nodeNum_ = value;
    nodeNumIsSet_ = true;
}

bool OpenMysqlProxyRequestBody::nodeNumIsSet() const
{
    return nodeNumIsSet_;
}

void OpenMysqlProxyRequestBody::unsetnodeNum()
{
    nodeNumIsSet_ = false;
}

std::string OpenMysqlProxyRequestBody::getProxyName() const
{
    return proxyName_;
}

void OpenMysqlProxyRequestBody::setProxyName(const std::string& value)
{
    proxyName_ = value;
    proxyNameIsSet_ = true;
}

bool OpenMysqlProxyRequestBody::proxyNameIsSet() const
{
    return proxyNameIsSet_;
}

void OpenMysqlProxyRequestBody::unsetproxyName()
{
    proxyNameIsSet_ = false;
}

std::string OpenMysqlProxyRequestBody::getProxyMode() const
{
    return proxyMode_;
}

void OpenMysqlProxyRequestBody::setProxyMode(const std::string& value)
{
    proxyMode_ = value;
    proxyModeIsSet_ = true;
}

bool OpenMysqlProxyRequestBody::proxyModeIsSet() const
{
    return proxyModeIsSet_;
}

void OpenMysqlProxyRequestBody::unsetproxyMode()
{
    proxyModeIsSet_ = false;
}

int32_t OpenMysqlProxyRequestBody::getRouteMode() const
{
    return routeMode_;
}

void OpenMysqlProxyRequestBody::setRouteMode(int32_t value)
{
    routeMode_ = value;
    routeModeIsSet_ = true;
}

bool OpenMysqlProxyRequestBody::routeModeIsSet() const
{
    return routeModeIsSet_;
}

void OpenMysqlProxyRequestBody::unsetrouteMode()
{
    routeModeIsSet_ = false;
}

std::vector<NodesWeight>& OpenMysqlProxyRequestBody::getNodesReadWeight()
{
    return nodesReadWeight_;
}

void OpenMysqlProxyRequestBody::setNodesReadWeight(const std::vector<NodesWeight>& value)
{
    nodesReadWeight_ = value;
    nodesReadWeightIsSet_ = true;
}

bool OpenMysqlProxyRequestBody::nodesReadWeightIsSet() const
{
    return nodesReadWeightIsSet_;
}

void OpenMysqlProxyRequestBody::unsetnodesReadWeight()
{
    nodesReadWeightIsSet_ = false;
}

}
}
}
}
}


