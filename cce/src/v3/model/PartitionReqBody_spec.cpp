

#include "huaweicloud/cce/v3/model/PartitionReqBody_spec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PartitionReqBody_spec::PartitionReqBody_spec()
{
    hostNetworkIsSet_ = false;
    containerNetworkIsSet_ = false;
    publicBorderGroup_ = "";
    publicBorderGroupIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
}

PartitionReqBody_spec::~PartitionReqBody_spec() = default;

void PartitionReqBody_spec::validate()
{
}

web::json::value PartitionReqBody_spec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostNetworkIsSet_) {
        val[utility::conversions::to_string_t("hostNetwork")] = ModelBase::toJson(hostNetwork_);
    }
    if(containerNetworkIsSet_) {
        val[utility::conversions::to_string_t("containerNetwork")] = ModelBase::toJson(containerNetwork_);
    }
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("publicBorderGroup")] = ModelBase::toJson(publicBorderGroup_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }

    return val;
}
bool PartitionReqBody_spec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hostNetwork"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hostNetwork"));
        if(!fieldValue.is_null())
        {
            PartitionReqBody_spec_hostNetwork refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostNetwork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("containerNetwork"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("containerNetwork"));
        if(!fieldValue.is_null())
        {
            std::vector<PartitionReqBody_spec_containerNetwork> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContainerNetwork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicBorderGroup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicBorderGroup"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicBorderGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    return ok;
}


PartitionReqBody_spec_hostNetwork PartitionReqBody_spec::getHostNetwork() const
{
    return hostNetwork_;
}

void PartitionReqBody_spec::setHostNetwork(const PartitionReqBody_spec_hostNetwork& value)
{
    hostNetwork_ = value;
    hostNetworkIsSet_ = true;
}

bool PartitionReqBody_spec::hostNetworkIsSet() const
{
    return hostNetworkIsSet_;
}

void PartitionReqBody_spec::unsethostNetwork()
{
    hostNetworkIsSet_ = false;
}

std::vector<PartitionReqBody_spec_containerNetwork>& PartitionReqBody_spec::getContainerNetwork()
{
    return containerNetwork_;
}

void PartitionReqBody_spec::setContainerNetwork(const std::vector<PartitionReqBody_spec_containerNetwork>& value)
{
    containerNetwork_ = value;
    containerNetworkIsSet_ = true;
}

bool PartitionReqBody_spec::containerNetworkIsSet() const
{
    return containerNetworkIsSet_;
}

void PartitionReqBody_spec::unsetcontainerNetwork()
{
    containerNetworkIsSet_ = false;
}

std::string PartitionReqBody_spec::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void PartitionReqBody_spec::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool PartitionReqBody_spec::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void PartitionReqBody_spec::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

std::string PartitionReqBody_spec::getCategory() const
{
    return category_;
}

void PartitionReqBody_spec::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool PartitionReqBody_spec::categoryIsSet() const
{
    return categoryIsSet_;
}

void PartitionReqBody_spec::unsetcategory()
{
    categoryIsSet_ = false;
}

}
}
}
}
}


