

#include "huaweicloud/modelarts/v1/model/IntranetConnectionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




IntranetConnectionRequest::IntranetConnectionRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    scene_ = "";
    sceneIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    poolId_ = "";
    poolIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    dispatcherGroupId_ = "";
    dispatcherGroupIdIsSet_ = false;
    customUrlsIsSet_ = false;
}

IntranetConnectionRequest::~IntranetConnectionRequest() = default;

void IntranetConnectionRequest::validate()
{
}

web::json::value IntranetConnectionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(sceneIsSet_) {
        val[utility::conversions::to_string_t("scene")] = ModelBase::toJson(scene_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(poolIdIsSet_) {
        val[utility::conversions::to_string_t("pool_id")] = ModelBase::toJson(poolId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(dispatcherGroupIdIsSet_) {
        val[utility::conversions::to_string_t("dispatcher_group_id")] = ModelBase::toJson(dispatcherGroupId_);
    }
    if(customUrlsIsSet_) {
        val[utility::conversions::to_string_t("custom_urls")] = ModelBase::toJson(customUrls_);
    }

    return val;
}
bool IntranetConnectionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scene"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScene(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dispatcher_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dispatcher_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDispatcherGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_urls"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomUrls(refVal);
        }
    }
    return ok;
}


std::string IntranetConnectionRequest::getServiceId() const
{
    return serviceId_;
}

void IntranetConnectionRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool IntranetConnectionRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void IntranetConnectionRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string IntranetConnectionRequest::getScene() const
{
    return scene_;
}

void IntranetConnectionRequest::setScene(const std::string& value)
{
    scene_ = value;
    sceneIsSet_ = true;
}

bool IntranetConnectionRequest::sceneIsSet() const
{
    return sceneIsSet_;
}

void IntranetConnectionRequest::unsetscene()
{
    sceneIsSet_ = false;
}

std::string IntranetConnectionRequest::getVpcId() const
{
    return vpcId_;
}

void IntranetConnectionRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool IntranetConnectionRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void IntranetConnectionRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string IntranetConnectionRequest::getSubnetId() const
{
    return subnetId_;
}

void IntranetConnectionRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool IntranetConnectionRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void IntranetConnectionRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string IntranetConnectionRequest::getPoolId() const
{
    return poolId_;
}

void IntranetConnectionRequest::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool IntranetConnectionRequest::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void IntranetConnectionRequest::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string IntranetConnectionRequest::getType() const
{
    return type_;
}

void IntranetConnectionRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool IntranetConnectionRequest::typeIsSet() const
{
    return typeIsSet_;
}

void IntranetConnectionRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string IntranetConnectionRequest::getDispatcherGroupId() const
{
    return dispatcherGroupId_;
}

void IntranetConnectionRequest::setDispatcherGroupId(const std::string& value)
{
    dispatcherGroupId_ = value;
    dispatcherGroupIdIsSet_ = true;
}

bool IntranetConnectionRequest::dispatcherGroupIdIsSet() const
{
    return dispatcherGroupIdIsSet_;
}

void IntranetConnectionRequest::unsetdispatcherGroupId()
{
    dispatcherGroupIdIsSet_ = false;
}

std::vector<std::string>& IntranetConnectionRequest::getCustomUrls()
{
    return customUrls_;
}

void IntranetConnectionRequest::setCustomUrls(const std::vector<std::string>& value)
{
    customUrls_ = value;
    customUrlsIsSet_ = true;
}

bool IntranetConnectionRequest::customUrlsIsSet() const
{
    return customUrlsIsSet_;
}

void IntranetConnectionRequest::unsetcustomUrls()
{
    customUrlsIsSet_ = false;
}

}
}
}
}
}


