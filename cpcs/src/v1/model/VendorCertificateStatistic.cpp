

#include "huaweicloud/cpcs/v1/model/VendorCertificateStatistic.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




VendorCertificateStatistic::VendorCertificateStatistic()
{
    count_ = 0;
    countIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    serverType_ = "";
    serverTypeIsSet_ = false;
    certificateType_ = 0;
    certificateTypeIsSet_ = false;
    algorithmType_ = 0;
    algorithmTypeIsSet_ = false;
}

VendorCertificateStatistic::~VendorCertificateStatistic() = default;

void VendorCertificateStatistic::validate()
{
}

web::json::value VendorCertificateStatistic::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(serverTypeIsSet_) {
        val[utility::conversions::to_string_t("server_type")] = ModelBase::toJson(serverType_);
    }
    if(certificateTypeIsSet_) {
        val[utility::conversions::to_string_t("certificate_type")] = ModelBase::toJson(certificateType_);
    }
    if(algorithmTypeIsSet_) {
        val[utility::conversions::to_string_t("algorithm_type")] = ModelBase::toJson(algorithmType_);
    }

    return val;
}
bool VendorCertificateStatistic::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("server_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("algorithm_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algorithm_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgorithmType(refVal);
        }
    }
    return ok;
}


int32_t VendorCertificateStatistic::getCount() const
{
    return count_;
}

void VendorCertificateStatistic::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool VendorCertificateStatistic::countIsSet() const
{
    return countIsSet_;
}

void VendorCertificateStatistic::unsetcount()
{
    countIsSet_ = false;
}

std::string VendorCertificateStatistic::getTenantId() const
{
    return tenantId_;
}

void VendorCertificateStatistic::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool VendorCertificateStatistic::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void VendorCertificateStatistic::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string VendorCertificateStatistic::getClusterId() const
{
    return clusterId_;
}

void VendorCertificateStatistic::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool VendorCertificateStatistic::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void VendorCertificateStatistic::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string VendorCertificateStatistic::getServerType() const
{
    return serverType_;
}

void VendorCertificateStatistic::setServerType(const std::string& value)
{
    serverType_ = value;
    serverTypeIsSet_ = true;
}

bool VendorCertificateStatistic::serverTypeIsSet() const
{
    return serverTypeIsSet_;
}

void VendorCertificateStatistic::unsetserverType()
{
    serverTypeIsSet_ = false;
}

int32_t VendorCertificateStatistic::getCertificateType() const
{
    return certificateType_;
}

void VendorCertificateStatistic::setCertificateType(int32_t value)
{
    certificateType_ = value;
    certificateTypeIsSet_ = true;
}

bool VendorCertificateStatistic::certificateTypeIsSet() const
{
    return certificateTypeIsSet_;
}

void VendorCertificateStatistic::unsetcertificateType()
{
    certificateTypeIsSet_ = false;
}

int32_t VendorCertificateStatistic::getAlgorithmType() const
{
    return algorithmType_;
}

void VendorCertificateStatistic::setAlgorithmType(int32_t value)
{
    algorithmType_ = value;
    algorithmTypeIsSet_ = true;
}

bool VendorCertificateStatistic::algorithmTypeIsSet() const
{
    return algorithmTypeIsSet_;
}

void VendorCertificateStatistic::unsetalgorithmType()
{
    algorithmTypeIsSet_ = false;
}

}
}
}
}
}


