

#include "huaweicloud/drs/v5/model/CreateJobReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CreateJobReq::CreateJobReq()
{
    baseInfoIsSet_ = false;
    sourceEndpointIsSet_ = false;
    targetEndpointIsSet_ = false;
    periodOrderIsSet_ = false;
    nodeInfoIsSet_ = false;
    publicIpListIsSet_ = false;
}

CreateJobReq::~CreateJobReq() = default;

void CreateJobReq::validate()
{
}

web::json::value CreateJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(baseInfoIsSet_) {
        val[utility::conversions::to_string_t("base_info")] = ModelBase::toJson(baseInfo_);
    }
    if(sourceEndpointIsSet_) {
        val[utility::conversions::to_string_t("source_endpoint")] = ModelBase::toJson(sourceEndpoint_);
    }
    if(targetEndpointIsSet_) {
        val[utility::conversions::to_string_t("target_endpoint")] = ModelBase::toJson(targetEndpoint_);
    }
    if(periodOrderIsSet_) {
        val[utility::conversions::to_string_t("period_order")] = ModelBase::toJson(periodOrder_);
    }
    if(nodeInfoIsSet_) {
        val[utility::conversions::to_string_t("node_info")] = ModelBase::toJson(nodeInfo_);
    }
    if(publicIpListIsSet_) {
        val[utility::conversions::to_string_t("public_ip_list")] = ModelBase::toJson(publicIpList_);
    }

    return val;
}
bool CreateJobReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("base_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base_info"));
        if(!fieldValue.is_null())
        {
            JobBaseInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_endpoint"));
        if(!fieldValue.is_null())
        {
            std::vector<JobEndpointInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_endpoint"));
        if(!fieldValue.is_null())
        {
            std::vector<JobEndpointInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_order"));
        if(!fieldValue.is_null())
        {
            PeriodOrderInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_info"));
        if(!fieldValue.is_null())
        {
            JobNodeInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip_list"));
        if(!fieldValue.is_null())
        {
            std::vector<PublicIpConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpList(refVal);
        }
    }
    return ok;
}


JobBaseInfo CreateJobReq::getBaseInfo() const
{
    return baseInfo_;
}

void CreateJobReq::setBaseInfo(const JobBaseInfo& value)
{
    baseInfo_ = value;
    baseInfoIsSet_ = true;
}

bool CreateJobReq::baseInfoIsSet() const
{
    return baseInfoIsSet_;
}

void CreateJobReq::unsetbaseInfo()
{
    baseInfoIsSet_ = false;
}

std::vector<JobEndpointInfo>& CreateJobReq::getSourceEndpoint()
{
    return sourceEndpoint_;
}

void CreateJobReq::setSourceEndpoint(const std::vector<JobEndpointInfo>& value)
{
    sourceEndpoint_ = value;
    sourceEndpointIsSet_ = true;
}

bool CreateJobReq::sourceEndpointIsSet() const
{
    return sourceEndpointIsSet_;
}

void CreateJobReq::unsetsourceEndpoint()
{
    sourceEndpointIsSet_ = false;
}

std::vector<JobEndpointInfo>& CreateJobReq::getTargetEndpoint()
{
    return targetEndpoint_;
}

void CreateJobReq::setTargetEndpoint(const std::vector<JobEndpointInfo>& value)
{
    targetEndpoint_ = value;
    targetEndpointIsSet_ = true;
}

bool CreateJobReq::targetEndpointIsSet() const
{
    return targetEndpointIsSet_;
}

void CreateJobReq::unsettargetEndpoint()
{
    targetEndpointIsSet_ = false;
}

PeriodOrderInfo CreateJobReq::getPeriodOrder() const
{
    return periodOrder_;
}

void CreateJobReq::setPeriodOrder(const PeriodOrderInfo& value)
{
    periodOrder_ = value;
    periodOrderIsSet_ = true;
}

bool CreateJobReq::periodOrderIsSet() const
{
    return periodOrderIsSet_;
}

void CreateJobReq::unsetperiodOrder()
{
    periodOrderIsSet_ = false;
}

JobNodeInfo CreateJobReq::getNodeInfo() const
{
    return nodeInfo_;
}

void CreateJobReq::setNodeInfo(const JobNodeInfo& value)
{
    nodeInfo_ = value;
    nodeInfoIsSet_ = true;
}

bool CreateJobReq::nodeInfoIsSet() const
{
    return nodeInfoIsSet_;
}

void CreateJobReq::unsetnodeInfo()
{
    nodeInfoIsSet_ = false;
}

std::vector<PublicIpConfig>& CreateJobReq::getPublicIpList()
{
    return publicIpList_;
}

void CreateJobReq::setPublicIpList(const std::vector<PublicIpConfig>& value)
{
    publicIpList_ = value;
    publicIpListIsSet_ = true;
}

bool CreateJobReq::publicIpListIsSet() const
{
    return publicIpListIsSet_;
}

void CreateJobReq::unsetpublicIpList()
{
    publicIpListIsSet_ = false;
}

}
}
}
}
}


