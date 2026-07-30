

#include "huaweicloud/modelarts/v1/model/ServiceInvoke.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServiceInvoke::ServiceInvoke()
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
}

ServiceInvoke::~ServiceInvoke() = default;

void ServiceInvoke::validate()
{
}

web::json::value ServiceInvoke::toJson() const
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

    return val;
}
bool ServiceInvoke::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t ServiceInvoke::getPort() const
{
    return port_;
}

void ServiceInvoke::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool ServiceInvoke::portIsSet() const
{
    return portIsSet_;
}

void ServiceInvoke::unsetport()
{
    portIsSet_ = false;
}

std::string ServiceInvoke::getProtocol() const
{
    return protocol_;
}

void ServiceInvoke::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ServiceInvoke::protocolIsSet() const
{
    return protocolIsSet_;
}

void ServiceInvoke::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string ServiceInvoke::getAuthType() const
{
    return authType_;
}

void ServiceInvoke::setAuthType(const std::string& value)
{
    authType_ = value;
    authTypeIsSet_ = true;
}

bool ServiceInvoke::authTypeIsSet() const
{
    return authTypeIsSet_;
}

void ServiceInvoke::unsetauthType()
{
    authTypeIsSet_ = false;
}

bool ServiceInvoke::isInternetAccessEnable() const
{
    return internetAccessEnable_;
}

void ServiceInvoke::setInternetAccessEnable(bool value)
{
    internetAccessEnable_ = value;
    internetAccessEnableIsSet_ = true;
}

bool ServiceInvoke::internetAccessEnableIsSet() const
{
    return internetAccessEnableIsSet_;
}

void ServiceInvoke::unsetinternetAccessEnable()
{
    internetAccessEnableIsSet_ = false;
}

bool ServiceInvoke::isIntranetApprovalEnable() const
{
    return intranetApprovalEnable_;
}

void ServiceInvoke::setIntranetApprovalEnable(bool value)
{
    intranetApprovalEnable_ = value;
    intranetApprovalEnableIsSet_ = true;
}

bool ServiceInvoke::intranetApprovalEnableIsSet() const
{
    return intranetApprovalEnableIsSet_;
}

void ServiceInvoke::unsetintranetApprovalEnable()
{
    intranetApprovalEnableIsSet_ = false;
}

bool ServiceInvoke::isDynamicRoutingEnable() const
{
    return dynamicRoutingEnable_;
}

void ServiceInvoke::setDynamicRoutingEnable(bool value)
{
    dynamicRoutingEnable_ = value;
    dynamicRoutingEnableIsSet_ = true;
}

bool ServiceInvoke::dynamicRoutingEnableIsSet() const
{
    return dynamicRoutingEnableIsSet_;
}

void ServiceInvoke::unsetdynamicRoutingEnable()
{
    dynamicRoutingEnableIsSet_ = false;
}

std::string ServiceInvoke::getStrategy() const
{
    return strategy_;
}

void ServiceInvoke::setStrategy(const std::string& value)
{
    strategy_ = value;
    strategyIsSet_ = true;
}

bool ServiceInvoke::strategyIsSet() const
{
    return strategyIsSet_;
}

void ServiceInvoke::unsetstrategy()
{
    strategyIsSet_ = false;
}

std::string ServiceInvoke::getMetricApiScheme() const
{
    return metricApiScheme_;
}

void ServiceInvoke::setMetricApiScheme(const std::string& value)
{
    metricApiScheme_ = value;
    metricApiSchemeIsSet_ = true;
}

bool ServiceInvoke::metricApiSchemeIsSet() const
{
    return metricApiSchemeIsSet_;
}

void ServiceInvoke::unsetmetricApiScheme()
{
    metricApiSchemeIsSet_ = false;
}

std::string ServiceInvoke::getMetricApiPort() const
{
    return metricApiPort_;
}

void ServiceInvoke::setMetricApiPort(const std::string& value)
{
    metricApiPort_ = value;
    metricApiPortIsSet_ = true;
}

bool ServiceInvoke::metricApiPortIsSet() const
{
    return metricApiPortIsSet_;
}

void ServiceInvoke::unsetmetricApiPort()
{
    metricApiPortIsSet_ = false;
}

std::string ServiceInvoke::getMetricApiPath() const
{
    return metricApiPath_;
}

void ServiceInvoke::setMetricApiPath(const std::string& value)
{
    metricApiPath_ = value;
    metricApiPathIsSet_ = true;
}

bool ServiceInvoke::metricApiPathIsSet() const
{
    return metricApiPathIsSet_;
}

void ServiceInvoke::unsetmetricApiPath()
{
    metricApiPathIsSet_ = false;
}

bool ServiceInvoke::isEmsEnable() const
{
    return emsEnable_;
}

void ServiceInvoke::setEmsEnable(bool value)
{
    emsEnable_ = value;
    emsEnableIsSet_ = true;
}

bool ServiceInvoke::emsEnableIsSet() const
{
    return emsEnableIsSet_;
}

void ServiceInvoke::unsetemsEnable()
{
    emsEnableIsSet_ = false;
}

bool ServiceInvoke::isRequestRetryEnable() const
{
    return requestRetryEnable_;
}

void ServiceInvoke::setRequestRetryEnable(bool value)
{
    requestRetryEnable_ = value;
    requestRetryEnableIsSet_ = true;
}

bool ServiceInvoke::requestRetryEnableIsSet() const
{
    return requestRetryEnableIsSet_;
}

void ServiceInvoke::unsetrequestRetryEnable()
{
    requestRetryEnableIsSet_ = false;
}

int32_t ServiceInvoke::getRequestRetryCntMax() const
{
    return requestRetryCntMax_;
}

void ServiceInvoke::setRequestRetryCntMax(int32_t value)
{
    requestRetryCntMax_ = value;
    requestRetryCntMaxIsSet_ = true;
}

bool ServiceInvoke::requestRetryCntMaxIsSet() const
{
    return requestRetryCntMaxIsSet_;
}

void ServiceInvoke::unsetrequestRetryCntMax()
{
    requestRetryCntMaxIsSet_ = false;
}

int32_t ServiceInvoke::getRequestRetryIntervalMs() const
{
    return requestRetryIntervalMs_;
}

void ServiceInvoke::setRequestRetryIntervalMs(int32_t value)
{
    requestRetryIntervalMs_ = value;
    requestRetryIntervalMsIsSet_ = true;
}

bool ServiceInvoke::requestRetryIntervalMsIsSet() const
{
    return requestRetryIntervalMsIsSet_;
}

void ServiceInvoke::unsetrequestRetryIntervalMs()
{
    requestRetryIntervalMsIsSet_ = false;
}

FuseConfig ServiceInvoke::getFuseConfigs() const
{
    return fuseConfigs_;
}

void ServiceInvoke::setFuseConfigs(const FuseConfig& value)
{
    fuseConfigs_ = value;
    fuseConfigsIsSet_ = true;
}

bool ServiceInvoke::fuseConfigsIsSet() const
{
    return fuseConfigsIsSet_;
}

void ServiceInvoke::unsetfuseConfigs()
{
    fuseConfigsIsSet_ = false;
}

}
}
}
}
}


