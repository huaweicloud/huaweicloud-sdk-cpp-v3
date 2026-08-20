

#include "huaweicloud/modelarts/v1/model/ServiceInvokeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServiceInvokeResponse::ServiceInvokeResponse()
{
    port_ = 0;
    portIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    authType_ = "";
    authTypeIsSet_ = false;
    internetAccessEnable_ = false;
    internetAccessEnableIsSet_ = false;
    intranetApprovalEnable_ = false;
    intranetApprovalEnableIsSet_ = false;
    dynamicRoutingEnable_ = false;
    dynamicRoutingEnableIsSet_ = false;
    strategy_ = "";
    strategyIsSet_ = false;
    metricApiScheme_ = "";
    metricApiSchemeIsSet_ = false;
    metricApiPort_ = "";
    metricApiPortIsSet_ = false;
    metricApiPath_ = "";
    metricApiPathIsSet_ = false;
    emsEnable_ = false;
    emsEnableIsSet_ = false;
    requestRetryEnable_ = false;
    requestRetryEnableIsSet_ = false;
    requestRetryCntMax_ = 0;
    requestRetryCntMaxIsSet_ = false;
    requestRetryIntervalMs_ = 0;
    requestRetryIntervalMsIsSet_ = false;
    fuseConfigsIsSet_ = false;
    elbConnectionIsSet_ = false;
}

ServiceInvokeResponse::~ServiceInvokeResponse() = default;

void ServiceInvokeResponse::validate()
{
}

web::json::value ServiceInvokeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(authTypeIsSet_) {
        val[utility::conversions::to_string_t("auth_type")] = ModelBase::toJson(authType_);
    }
    if(internetAccessEnableIsSet_) {
        val[utility::conversions::to_string_t("internet_access_enable")] = ModelBase::toJson(internetAccessEnable_);
    }
    if(intranetApprovalEnableIsSet_) {
        val[utility::conversions::to_string_t("intranet_approval_enable")] = ModelBase::toJson(intranetApprovalEnable_);
    }
    if(dynamicRoutingEnableIsSet_) {
        val[utility::conversions::to_string_t("dynamic_routing_enable")] = ModelBase::toJson(dynamicRoutingEnable_);
    }
    if(strategyIsSet_) {
        val[utility::conversions::to_string_t("strategy")] = ModelBase::toJson(strategy_);
    }
    if(metricApiSchemeIsSet_) {
        val[utility::conversions::to_string_t("metric_api_scheme")] = ModelBase::toJson(metricApiScheme_);
    }
    if(metricApiPortIsSet_) {
        val[utility::conversions::to_string_t("metric_api_port")] = ModelBase::toJson(metricApiPort_);
    }
    if(metricApiPathIsSet_) {
        val[utility::conversions::to_string_t("metric_api_path")] = ModelBase::toJson(metricApiPath_);
    }
    if(emsEnableIsSet_) {
        val[utility::conversions::to_string_t("ems_enable")] = ModelBase::toJson(emsEnable_);
    }
    if(requestRetryEnableIsSet_) {
        val[utility::conversions::to_string_t("request_retry_enable")] = ModelBase::toJson(requestRetryEnable_);
    }
    if(requestRetryCntMaxIsSet_) {
        val[utility::conversions::to_string_t("request_retry_cnt_max")] = ModelBase::toJson(requestRetryCntMax_);
    }
    if(requestRetryIntervalMsIsSet_) {
        val[utility::conversions::to_string_t("request_retry_interval_ms")] = ModelBase::toJson(requestRetryIntervalMs_);
    }
    if(fuseConfigsIsSet_) {
        val[utility::conversions::to_string_t("fuse_configs")] = ModelBase::toJson(fuseConfigs_);
    }
    if(elbConnectionIsSet_) {
        val[utility::conversions::to_string_t("elb_connection")] = ModelBase::toJson(elbConnection_);
    }

    return val;
}
bool ServiceInvokeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("internet_access_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_access_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetAccessEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("intranet_approval_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("intranet_approval_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntranetApprovalEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dynamic_routing_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dynamic_routing_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDynamicRoutingEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("strategy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStrategy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric_api_scheme"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_api_scheme"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricApiScheme(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric_api_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_api_port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricApiPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric_api_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_api_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricApiPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ems_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ems_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmsEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_retry_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_retry_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestRetryEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_retry_cnt_max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_retry_cnt_max"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestRetryCntMax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_retry_interval_ms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_retry_interval_ms"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestRetryIntervalMs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fuse_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fuse_configs"));
        if(!fieldValue.is_null())
        {
            FuseConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuseConfigs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elb_connection"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elb_connection"));
        if(!fieldValue.is_null())
        {
            ElbConnectionResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElbConnection(refVal);
        }
    }
    return ok;
}


int32_t ServiceInvokeResponse::getPort() const
{
    return port_;
}

void ServiceInvokeResponse::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool ServiceInvokeResponse::portIsSet() const
{
    return portIsSet_;
}

void ServiceInvokeResponse::unsetport()
{
    portIsSet_ = false;
}

std::string ServiceInvokeResponse::getProtocol() const
{
    return protocol_;
}

void ServiceInvokeResponse::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ServiceInvokeResponse::protocolIsSet() const
{
    return protocolIsSet_;
}

void ServiceInvokeResponse::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string ServiceInvokeResponse::getAuthType() const
{
    return authType_;
}

void ServiceInvokeResponse::setAuthType(const std::string& value)
{
    authType_ = value;
    authTypeIsSet_ = true;
}

bool ServiceInvokeResponse::authTypeIsSet() const
{
    return authTypeIsSet_;
}

void ServiceInvokeResponse::unsetauthType()
{
    authTypeIsSet_ = false;
}

bool ServiceInvokeResponse::isInternetAccessEnable() const
{
    return internetAccessEnable_;
}

void ServiceInvokeResponse::setInternetAccessEnable(bool value)
{
    internetAccessEnable_ = value;
    internetAccessEnableIsSet_ = true;
}

bool ServiceInvokeResponse::internetAccessEnableIsSet() const
{
    return internetAccessEnableIsSet_;
}

void ServiceInvokeResponse::unsetinternetAccessEnable()
{
    internetAccessEnableIsSet_ = false;
}

bool ServiceInvokeResponse::isIntranetApprovalEnable() const
{
    return intranetApprovalEnable_;
}

void ServiceInvokeResponse::setIntranetApprovalEnable(bool value)
{
    intranetApprovalEnable_ = value;
    intranetApprovalEnableIsSet_ = true;
}

bool ServiceInvokeResponse::intranetApprovalEnableIsSet() const
{
    return intranetApprovalEnableIsSet_;
}

void ServiceInvokeResponse::unsetintranetApprovalEnable()
{
    intranetApprovalEnableIsSet_ = false;
}

bool ServiceInvokeResponse::isDynamicRoutingEnable() const
{
    return dynamicRoutingEnable_;
}

void ServiceInvokeResponse::setDynamicRoutingEnable(bool value)
{
    dynamicRoutingEnable_ = value;
    dynamicRoutingEnableIsSet_ = true;
}

bool ServiceInvokeResponse::dynamicRoutingEnableIsSet() const
{
    return dynamicRoutingEnableIsSet_;
}

void ServiceInvokeResponse::unsetdynamicRoutingEnable()
{
    dynamicRoutingEnableIsSet_ = false;
}

std::string ServiceInvokeResponse::getStrategy() const
{
    return strategy_;
}

void ServiceInvokeResponse::setStrategy(const std::string& value)
{
    strategy_ = value;
    strategyIsSet_ = true;
}

bool ServiceInvokeResponse::strategyIsSet() const
{
    return strategyIsSet_;
}

void ServiceInvokeResponse::unsetstrategy()
{
    strategyIsSet_ = false;
}

std::string ServiceInvokeResponse::getMetricApiScheme() const
{
    return metricApiScheme_;
}

void ServiceInvokeResponse::setMetricApiScheme(const std::string& value)
{
    metricApiScheme_ = value;
    metricApiSchemeIsSet_ = true;
}

bool ServiceInvokeResponse::metricApiSchemeIsSet() const
{
    return metricApiSchemeIsSet_;
}

void ServiceInvokeResponse::unsetmetricApiScheme()
{
    metricApiSchemeIsSet_ = false;
}

std::string ServiceInvokeResponse::getMetricApiPort() const
{
    return metricApiPort_;
}

void ServiceInvokeResponse::setMetricApiPort(const std::string& value)
{
    metricApiPort_ = value;
    metricApiPortIsSet_ = true;
}

bool ServiceInvokeResponse::metricApiPortIsSet() const
{
    return metricApiPortIsSet_;
}

void ServiceInvokeResponse::unsetmetricApiPort()
{
    metricApiPortIsSet_ = false;
}

std::string ServiceInvokeResponse::getMetricApiPath() const
{
    return metricApiPath_;
}

void ServiceInvokeResponse::setMetricApiPath(const std::string& value)
{
    metricApiPath_ = value;
    metricApiPathIsSet_ = true;
}

bool ServiceInvokeResponse::metricApiPathIsSet() const
{
    return metricApiPathIsSet_;
}

void ServiceInvokeResponse::unsetmetricApiPath()
{
    metricApiPathIsSet_ = false;
}

bool ServiceInvokeResponse::isEmsEnable() const
{
    return emsEnable_;
}

void ServiceInvokeResponse::setEmsEnable(bool value)
{
    emsEnable_ = value;
    emsEnableIsSet_ = true;
}

bool ServiceInvokeResponse::emsEnableIsSet() const
{
    return emsEnableIsSet_;
}

void ServiceInvokeResponse::unsetemsEnable()
{
    emsEnableIsSet_ = false;
}

bool ServiceInvokeResponse::isRequestRetryEnable() const
{
    return requestRetryEnable_;
}

void ServiceInvokeResponse::setRequestRetryEnable(bool value)
{
    requestRetryEnable_ = value;
    requestRetryEnableIsSet_ = true;
}

bool ServiceInvokeResponse::requestRetryEnableIsSet() const
{
    return requestRetryEnableIsSet_;
}

void ServiceInvokeResponse::unsetrequestRetryEnable()
{
    requestRetryEnableIsSet_ = false;
}

int32_t ServiceInvokeResponse::getRequestRetryCntMax() const
{
    return requestRetryCntMax_;
}

void ServiceInvokeResponse::setRequestRetryCntMax(int32_t value)
{
    requestRetryCntMax_ = value;
    requestRetryCntMaxIsSet_ = true;
}

bool ServiceInvokeResponse::requestRetryCntMaxIsSet() const
{
    return requestRetryCntMaxIsSet_;
}

void ServiceInvokeResponse::unsetrequestRetryCntMax()
{
    requestRetryCntMaxIsSet_ = false;
}

int32_t ServiceInvokeResponse::getRequestRetryIntervalMs() const
{
    return requestRetryIntervalMs_;
}

void ServiceInvokeResponse::setRequestRetryIntervalMs(int32_t value)
{
    requestRetryIntervalMs_ = value;
    requestRetryIntervalMsIsSet_ = true;
}

bool ServiceInvokeResponse::requestRetryIntervalMsIsSet() const
{
    return requestRetryIntervalMsIsSet_;
}

void ServiceInvokeResponse::unsetrequestRetryIntervalMs()
{
    requestRetryIntervalMsIsSet_ = false;
}

FuseConfig ServiceInvokeResponse::getFuseConfigs() const
{
    return fuseConfigs_;
}

void ServiceInvokeResponse::setFuseConfigs(const FuseConfig& value)
{
    fuseConfigs_ = value;
    fuseConfigsIsSet_ = true;
}

bool ServiceInvokeResponse::fuseConfigsIsSet() const
{
    return fuseConfigsIsSet_;
}

void ServiceInvokeResponse::unsetfuseConfigs()
{
    fuseConfigsIsSet_ = false;
}

ElbConnectionResponse ServiceInvokeResponse::getElbConnection() const
{
    return elbConnection_;
}

void ServiceInvokeResponse::setElbConnection(const ElbConnectionResponse& value)
{
    elbConnection_ = value;
    elbConnectionIsSet_ = true;
}

bool ServiceInvokeResponse::elbConnectionIsSet() const
{
    return elbConnectionIsSet_;
}

void ServiceInvokeResponse::unsetelbConnection()
{
    elbConnectionIsSet_ = false;
}

}
}
}
}
}


