

#include "huaweicloud/rds/v3/model/ModifyMySqlProxyRouteModeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifyMySqlProxyRouteModeRequest::ModifyMySqlProxyRouteModeRequest()
{
    masterWeight_ = 0;
    masterWeightIsSet_ = false;
    readonlyInstancesIsSet_ = false;
    routeMode_ = 0;
    routeModeIsSet_ = false;
}

ModifyMySqlProxyRouteModeRequest::~ModifyMySqlProxyRouteModeRequest() = default;

void ModifyMySqlProxyRouteModeRequest::validate()
{
}

web::json::value ModifyMySqlProxyRouteModeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(masterWeightIsSet_) {
        val[utility::conversions::to_string_t("master_weight")] = ModelBase::toJson(masterWeight_);
    }
    if(readonlyInstancesIsSet_) {
        val[utility::conversions::to_string_t("readonly_instances")] = ModelBase::toJson(readonlyInstances_);
    }
    if(routeModeIsSet_) {
        val[utility::conversions::to_string_t("route_mode")] = ModelBase::toJson(routeMode_);
    }

    return val;
}
bool ModifyMySqlProxyRouteModeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("master_weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_weight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterWeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("readonly_instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readonly_instances"));
        if(!fieldValue.is_null())
        {
            std::vector<InstancesWeight> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadonlyInstances(refVal);
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
    return ok;
}


int32_t ModifyMySqlProxyRouteModeRequest::getMasterWeight() const
{
    return masterWeight_;
}

void ModifyMySqlProxyRouteModeRequest::setMasterWeight(int32_t value)
{
    masterWeight_ = value;
    masterWeightIsSet_ = true;
}

bool ModifyMySqlProxyRouteModeRequest::masterWeightIsSet() const
{
    return masterWeightIsSet_;
}

void ModifyMySqlProxyRouteModeRequest::unsetmasterWeight()
{
    masterWeightIsSet_ = false;
}

std::vector<InstancesWeight>& ModifyMySqlProxyRouteModeRequest::getReadonlyInstances()
{
    return readonlyInstances_;
}

void ModifyMySqlProxyRouteModeRequest::setReadonlyInstances(const std::vector<InstancesWeight>& value)
{
    readonlyInstances_ = value;
    readonlyInstancesIsSet_ = true;
}

bool ModifyMySqlProxyRouteModeRequest::readonlyInstancesIsSet() const
{
    return readonlyInstancesIsSet_;
}

void ModifyMySqlProxyRouteModeRequest::unsetreadonlyInstances()
{
    readonlyInstancesIsSet_ = false;
}

int32_t ModifyMySqlProxyRouteModeRequest::getRouteMode() const
{
    return routeMode_;
}

void ModifyMySqlProxyRouteModeRequest::setRouteMode(int32_t value)
{
    routeMode_ = value;
    routeModeIsSet_ = true;
}

bool ModifyMySqlProxyRouteModeRequest::routeModeIsSet() const
{
    return routeModeIsSet_;
}

void ModifyMySqlProxyRouteModeRequest::unsetrouteMode()
{
    routeModeIsSet_ = false;
}

}
}
}
}
}


