

#include "huaweicloud/gaussdb/v3/model/ModifyGaussMySqlProxyRouteModeRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyGaussMySqlProxyRouteModeRequestBody::ModifyGaussMySqlProxyRouteModeRequestBody()
{
    routeMode_ = 0;
    routeModeIsSet_ = false;
    masterWeight_ = 0;
    masterWeightIsSet_ = false;
    readonlyNodesIsSet_ = false;
}

ModifyGaussMySqlProxyRouteModeRequestBody::~ModifyGaussMySqlProxyRouteModeRequestBody() = default;

void ModifyGaussMySqlProxyRouteModeRequestBody::validate()
{
}

web::json::value ModifyGaussMySqlProxyRouteModeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routeModeIsSet_) {
        val[utility::conversions::to_string_t("route_mode")] = ModelBase::toJson(routeMode_);
    }
    if(masterWeightIsSet_) {
        val[utility::conversions::to_string_t("master_weight")] = ModelBase::toJson(masterWeight_);
    }
    if(readonlyNodesIsSet_) {
        val[utility::conversions::to_string_t("readonly_nodes")] = ModelBase::toJson(readonlyNodes_);
    }

    return val;
}

bool ModifyGaussMySqlProxyRouteModeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("route_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("route_mode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRouteMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("master_weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_weight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterWeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("readonly_nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readonly_nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<ModifyProxyRouteWeightReadonlyNode> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadonlyNodes(refVal);
        }
    }
    return ok;
}

int32_t ModifyGaussMySqlProxyRouteModeRequestBody::getRouteMode() const
{
    return routeMode_;
}

void ModifyGaussMySqlProxyRouteModeRequestBody::setRouteMode(int32_t value)
{
    routeMode_ = value;
    routeModeIsSet_ = true;
}

bool ModifyGaussMySqlProxyRouteModeRequestBody::routeModeIsSet() const
{
    return routeModeIsSet_;
}

void ModifyGaussMySqlProxyRouteModeRequestBody::unsetrouteMode()
{
    routeModeIsSet_ = false;
}

int32_t ModifyGaussMySqlProxyRouteModeRequestBody::getMasterWeight() const
{
    return masterWeight_;
}

void ModifyGaussMySqlProxyRouteModeRequestBody::setMasterWeight(int32_t value)
{
    masterWeight_ = value;
    masterWeightIsSet_ = true;
}

bool ModifyGaussMySqlProxyRouteModeRequestBody::masterWeightIsSet() const
{
    return masterWeightIsSet_;
}

void ModifyGaussMySqlProxyRouteModeRequestBody::unsetmasterWeight()
{
    masterWeightIsSet_ = false;
}

std::vector<ModifyProxyRouteWeightReadonlyNode>& ModifyGaussMySqlProxyRouteModeRequestBody::getReadonlyNodes()
{
    return readonlyNodes_;
}

void ModifyGaussMySqlProxyRouteModeRequestBody::setReadonlyNodes(const std::vector<ModifyProxyRouteWeightReadonlyNode>& value)
{
    readonlyNodes_ = value;
    readonlyNodesIsSet_ = true;
}

bool ModifyGaussMySqlProxyRouteModeRequestBody::readonlyNodesIsSet() const
{
    return readonlyNodesIsSet_;
}

void ModifyGaussMySqlProxyRouteModeRequestBody::unsetreadonlyNodes()
{
    readonlyNodesIsSet_ = false;
}

}
}
}
}
}


