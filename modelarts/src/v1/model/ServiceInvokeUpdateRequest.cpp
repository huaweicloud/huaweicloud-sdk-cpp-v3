

#include "huaweicloud/modelarts/v1/model/ServiceInvokeUpdateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServiceInvokeUpdateRequest::ServiceInvokeUpdateRequest()
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
    customUrlsIsSet_ = false;
}

ServiceInvokeUpdateRequest::~ServiceInvokeUpdateRequest() = default;

void ServiceInvokeUpdateRequest::validate()
{
}

web::json::value ServiceInvokeUpdateRequest::toJson() const
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
    if(customUrlsIsSet_) {
        val[utility::conversions::to_string_t("custom_urls")] = ModelBase::toJson(customUrls_);
    }

    return val;
}
bool ServiceInvokeUpdateRequest::fromJson(const web::json::value& val)
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
            ElbConnectionUpdateRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElbConnection(refVal);
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


int32_t ServiceInvokeUpdateRequest::getPort() const
{
    return port_;
}

void ServiceInvokeUpdateRequest::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool ServiceInvokeUpdateRequest::portIsSet() const
{
    return portIsSet_;
}

void ServiceInvokeUpdateRequest::unsetport()
{
    portIsSet_ = false;
}

std::string ServiceInvokeUpdateRequest::getProtocol() const
{
    return protocol_;
}

void ServiceInvokeUpdateRequest::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ServiceInvokeUpdateRequest::protocolIsSet() const
{
    return protocolIsSet_;
}

void ServiceInvokeUpdateRequest::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string ServiceInvokeUpdateRequest::getAuthType() const
{
    return authType_;
}

void ServiceInvokeUpdateRequest::setAuthType(const std::string& value)
{
    authType_ = value;
    authTypeIsSet_ = true;
}

bool ServiceInvokeUpdateRequest::authTypeIsSet() const
{
    return authTypeIsSet_;
}

void ServiceInvokeUpdateRequest::unsetauthType()
{
    authTypeIsSet_ = false;
}

bool ServiceInvokeUpdateRequest::isInternetAccessEnable() const
{
    return internetAccessEnable_;
}

void ServiceInvokeUpdateRequest::setInternetAccessEnable(bool value)
{
    internetAccessEnable_ = value;
    internetAccessEnableIsSet_ = true;
}

bool ServiceInvokeUpdateRequest::internetAccessEnableIsSet() const
{
    return internetAccessEnableIsSet_;
}

void ServiceInvokeUpdateRequest::unsetinternetAccessEnable()
{
    internetAccessEnableIsSet_ = false;
}

bool ServiceInvokeUpdateRequest::isIntranetApprovalEnable() const
{
    return intranetApprovalEnable_;
}

void ServiceInvokeUpdateRequest::setIntranetApprovalEnable(bool value)
{
    intranetApprovalEnable_ = value;
    intranetApprovalEnableIsSet_ = true;
}

bool ServiceInvokeUpdateRequest::intranetApprovalEnableIsSet() const
{
    return intranetApprovalEnableIsSet_;
}

void ServiceInvokeUpdateRequest::unsetintranetApprovalEnable()
{
    intranetApprovalEnableIsSet_ = false;
}

bool ServiceInvokeUpdateRequest::isDynamicRoutingEnable() const
{
    return dynamicRoutingEnable_;
}

void ServiceInvokeUpdateRequest::setDynamicRoutingEnable(bool value)
{
    dynamicRoutingEnable_ = value;
    dynamicRoutingEnableIsSet_ = true;
}

bool ServiceInvokeUpdateRequest::dynamicRoutingEnableIsSet() const
{
    return dynamicRoutingEnableIsSet_;
}

void ServiceInvokeUpdateRequest::unsetdynamicRoutingEnable()
{
    dynamicRoutingEnableIsSet_ = false;
}

std::string ServiceInvokeUpdateRequest::getStrategy() const
{
    return strategy_;
}

void ServiceInvokeUpdateRequest::setStrategy(const std::string& value)
{
    strategy_ = value;
    strategyIsSet_ = true;
}

bool ServiceInvokeUpdateRequest::strategyIsSet() const
{
    return strategyIsSet_;
}

void ServiceInvokeUpdateRequest::unsetstrategy()
{
    strategyIsSet_ = false;
}

std::string ServiceInvokeUpdateRequest::getMetricApiScheme() const
{
    return metricApiScheme_;
}

void ServiceInvokeUpdateRequest::setMetricApiScheme(const std::string& value)
{
    metricApiScheme_ = value;
    metricApiSchemeIsSet_ = true;
}

bool ServiceInvokeUpdateRequest::metricApiSchemeIsSet() const
{
    return metricApiSchemeIsSet_;
}

void ServiceInvokeUpdateRequest::unsetmetricApiScheme()
{
    metricApiSchemeIsSet_ = false;
}

std::string ServiceInvokeUpdateRequest::getMetricApiPort() const
{
    return metricApiPort_;
}

void ServiceInvokeUpdateRequest::setMetricApiPort(const std::string& value)
{
    metricApiPort_ = value;
    metricApiPortIsSet_ = true;
}

bool ServiceInvokeUpdateRequest::metricApiPortIsSet() const
{
    return metricApiPortIsSet_;
}

void ServiceInvokeUpdateRequest::unsetmetricApiPort()
{
    metricApiPortIsSet_ = false;
}

std::string ServiceInvokeUpdateRequest::getMetricApiPath() const
{
    return metricApiPath_;
}

void ServiceInvokeUpdateRequest::setMetricApiPath(const std::string& value)
{
    metricApiPath_ = value;
    metricApiPathIsSet_ = true;
}

bool ServiceInvokeUpdateRequest::metricApiPathIsSet() const
{
    return metricApiPathIsSet_;
}

void ServiceInvokeUpdateRequest::unsetmetricApiPath()
{
    metricApiPathIsSet_ = false;
}

bool ServiceInvokeUpdateRequest::isEmsEnable() const
{
    return emsEnable_;
}

void ServiceInvokeUpdateRequest::setEmsEnable(bool value)
{
    emsEnable_ = value;
    emsEnableIsSet_ = true;
}

bool ServiceInvokeUpdateRequest::emsEnableIsSet() const
{
    return emsEnableIsSet_;
}

void ServiceInvokeUpdateRequest::unsetemsEnable()
{
    emsEnableIsSet_ = false;
}

bool ServiceInvokeUpdateRequest::isRequestRetryEnable() const
{
    return requestRetryEnable_;
}

void ServiceInvokeUpdateRequest::setRequestRetryEnable(bool value)
{
    requestRetryEnable_ = value;
    requestRetryEnableIsSet_ = true;
}

bool ServiceInvokeUpdateRequest::requestRetryEnableIsSet() const
{
    return requestRetryEnableIsSet_;
}

void ServiceInvokeUpdateRequest::unsetrequestRetryEnable()
{
    requestRetryEnableIsSet_ = false;
}

int32_t ServiceInvokeUpdateRequest::getRequestRetryCntMax() const
{
    return requestRetryCntMax_;
}

void ServiceInvokeUpdateRequest::setRequestRetryCntMax(int32_t value)
{
    requestRetryCntMax_ = value;
    requestRetryCntMaxIsSet_ = true;
}

bool ServiceInvokeUpdateRequest::requestRetryCntMaxIsSet() const
{
    return requestRetryCntMaxIsSet_;
}

void ServiceInvokeUpdateRequest::unsetrequestRetryCntMax()
{
    requestRetryCntMaxIsSet_ = false;
}

int32_t ServiceInvokeUpdateRequest::getRequestRetryIntervalMs() const
{
    return requestRetryIntervalMs_;
}

void ServiceInvokeUpdateRequest::setRequestRetryIntervalMs(int32_t value)
{
    requestRetryIntervalMs_ = value;
    requestRetryIntervalMsIsSet_ = true;
}

bool ServiceInvokeUpdateRequest::requestRetryIntervalMsIsSet() const
{
    return requestRetryIntervalMsIsSet_;
}

void ServiceInvokeUpdateRequest::unsetrequestRetryIntervalMs()
{
    requestRetryIntervalMsIsSet_ = false;
}

FuseConfig ServiceInvokeUpdateRequest::getFuseConfigs() const
{
    return fuseConfigs_;
}

void ServiceInvokeUpdateRequest::setFuseConfigs(const FuseConfig& value)
{
    fuseConfigs_ = value;
    fuseConfigsIsSet_ = true;
}

bool ServiceInvokeUpdateRequest::fuseConfigsIsSet() const
{
    return fuseConfigsIsSet_;
}

void ServiceInvokeUpdateRequest::unsetfuseConfigs()
{
    fuseConfigsIsSet_ = false;
}

ElbConnectionUpdateRequest ServiceInvokeUpdateRequest::getElbConnection() const
{
    return elbConnection_;
}

void ServiceInvokeUpdateRequest::setElbConnection(const ElbConnectionUpdateRequest& value)
{
    elbConnection_ = value;
    elbConnectionIsSet_ = true;
}

bool ServiceInvokeUpdateRequest::elbConnectionIsSet() const
{
    return elbConnectionIsSet_;
}

void ServiceInvokeUpdateRequest::unsetelbConnection()
{
    elbConnectionIsSet_ = false;
}

std::vector<std::string>& ServiceInvokeUpdateRequest::getCustomUrls()
{
    return customUrls_;
}

void ServiceInvokeUpdateRequest::setCustomUrls(const std::vector<std::string>& value)
{
    customUrls_ = value;
    customUrlsIsSet_ = true;
}

bool ServiceInvokeUpdateRequest::customUrlsIsSet() const
{
    return customUrlsIsSet_;
}

void ServiceInvokeUpdateRequest::unsetcustomUrls()
{
    customUrlsIsSet_ = false;
}

}
}
}
}
}


