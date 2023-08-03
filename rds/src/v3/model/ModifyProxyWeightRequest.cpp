

#include "huaweicloud/rds/v3/model/ModifyProxyWeightRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifyProxyWeightRequest::ModifyProxyWeightRequest()
{
    masterWeight_ = "";
    masterWeightIsSet_ = false;
    readonlyInstancesIsSet_ = false;
}

ModifyProxyWeightRequest::~ModifyProxyWeightRequest() = default;

void ModifyProxyWeightRequest::validate()
{
}

web::json::value ModifyProxyWeightRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(masterWeightIsSet_) {
        val[utility::conversions::to_string_t("master_weight")] = ModelBase::toJson(masterWeight_);
    }
    if(readonlyInstancesIsSet_) {
        val[utility::conversions::to_string_t("readonly_instances")] = ModelBase::toJson(readonlyInstances_);
    }

    return val;
}

bool ModifyProxyWeightRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("master_weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_weight"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterWeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("readonly_instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readonly_instances"));
        if(!fieldValue.is_null())
        {
            std::vector<ProxyReadonlyInstances> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadonlyInstances(refVal);
        }
    }
    return ok;
}

std::string ModifyProxyWeightRequest::getMasterWeight() const
{
    return masterWeight_;
}

void ModifyProxyWeightRequest::setMasterWeight(const std::string& value)
{
    masterWeight_ = value;
    masterWeightIsSet_ = true;
}

bool ModifyProxyWeightRequest::masterWeightIsSet() const
{
    return masterWeightIsSet_;
}

void ModifyProxyWeightRequest::unsetmasterWeight()
{
    masterWeightIsSet_ = false;
}

std::vector<ProxyReadonlyInstances>& ModifyProxyWeightRequest::getReadonlyInstances()
{
    return readonlyInstances_;
}

void ModifyProxyWeightRequest::setReadonlyInstances(const std::vector<ProxyReadonlyInstances>& value)
{
    readonlyInstances_ = value;
    readonlyInstancesIsSet_ = true;
}

bool ModifyProxyWeightRequest::readonlyInstancesIsSet() const
{
    return readonlyInstancesIsSet_;
}

void ModifyProxyWeightRequest::unsetreadonlyInstances()
{
    readonlyInstancesIsSet_ = false;
}

}
}
}
}
}


