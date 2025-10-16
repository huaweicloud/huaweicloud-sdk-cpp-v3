

#include "huaweicloud/cpcs/v1/model/VendorKeyStatistic.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




VendorKeyStatistic::VendorKeyStatistic()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    validCount_ = 0;
    validCountIsSet_ = false;
    invalidCount_ = 0;
    invalidCountIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    clusterName_ = "";
    clusterNameIsSet_ = false;
    serverType_ = "";
    serverTypeIsSet_ = false;
    algorithm_ = "";
    algorithmIsSet_ = false;
}

VendorKeyStatistic::~VendorKeyStatistic() = default;

void VendorKeyStatistic::validate()
{
}

web::json::value VendorKeyStatistic::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(validCountIsSet_) {
        val[utility::conversions::to_string_t("valid_count")] = ModelBase::toJson(validCount_);
    }
    if(invalidCountIsSet_) {
        val[utility::conversions::to_string_t("invalid_count")] = ModelBase::toJson(invalidCount_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(clusterNameIsSet_) {
        val[utility::conversions::to_string_t("cluster_name")] = ModelBase::toJson(clusterName_);
    }
    if(serverTypeIsSet_) {
        val[utility::conversions::to_string_t("server_type")] = ModelBase::toJson(serverType_);
    }
    if(algorithmIsSet_) {
        val[utility::conversions::to_string_t("algorithm")] = ModelBase::toJson(algorithm_);
    }

    return val;
}
bool VendorKeyStatistic::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("valid_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("invalid_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("invalid_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInvalidCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algorithm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgorithm(refVal);
        }
    }
    return ok;
}


int32_t VendorKeyStatistic::getTotalCount() const
{
    return totalCount_;
}

void VendorKeyStatistic::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool VendorKeyStatistic::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void VendorKeyStatistic::unsettotalCount()
{
    totalCountIsSet_ = false;
}

int32_t VendorKeyStatistic::getValidCount() const
{
    return validCount_;
}

void VendorKeyStatistic::setValidCount(int32_t value)
{
    validCount_ = value;
    validCountIsSet_ = true;
}

bool VendorKeyStatistic::validCountIsSet() const
{
    return validCountIsSet_;
}

void VendorKeyStatistic::unsetvalidCount()
{
    validCountIsSet_ = false;
}

int32_t VendorKeyStatistic::getInvalidCount() const
{
    return invalidCount_;
}

void VendorKeyStatistic::setInvalidCount(int32_t value)
{
    invalidCount_ = value;
    invalidCountIsSet_ = true;
}

bool VendorKeyStatistic::invalidCountIsSet() const
{
    return invalidCountIsSet_;
}

void VendorKeyStatistic::unsetinvalidCount()
{
    invalidCountIsSet_ = false;
}

std::string VendorKeyStatistic::getTenantId() const
{
    return tenantId_;
}

void VendorKeyStatistic::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool VendorKeyStatistic::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void VendorKeyStatistic::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string VendorKeyStatistic::getClusterId() const
{
    return clusterId_;
}

void VendorKeyStatistic::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool VendorKeyStatistic::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void VendorKeyStatistic::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string VendorKeyStatistic::getClusterName() const
{
    return clusterName_;
}

void VendorKeyStatistic::setClusterName(const std::string& value)
{
    clusterName_ = value;
    clusterNameIsSet_ = true;
}

bool VendorKeyStatistic::clusterNameIsSet() const
{
    return clusterNameIsSet_;
}

void VendorKeyStatistic::unsetclusterName()
{
    clusterNameIsSet_ = false;
}

std::string VendorKeyStatistic::getServerType() const
{
    return serverType_;
}

void VendorKeyStatistic::setServerType(const std::string& value)
{
    serverType_ = value;
    serverTypeIsSet_ = true;
}

bool VendorKeyStatistic::serverTypeIsSet() const
{
    return serverTypeIsSet_;
}

void VendorKeyStatistic::unsetserverType()
{
    serverTypeIsSet_ = false;
}

std::string VendorKeyStatistic::getAlgorithm() const
{
    return algorithm_;
}

void VendorKeyStatistic::setAlgorithm(const std::string& value)
{
    algorithm_ = value;
    algorithmIsSet_ = true;
}

bool VendorKeyStatistic::algorithmIsSet() const
{
    return algorithmIsSet_;
}

void VendorKeyStatistic::unsetalgorithm()
{
    algorithmIsSet_ = false;
}

}
}
}
}
}


