

#include "huaweicloud/cpcs/v1/model/ShowStatisticSecretKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowStatisticSecretKeyRequest::ShowStatisticSecretKeyRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    from_ = 0L;
    fromIsSet_ = false;
    to_ = 0L;
    toIsSet_ = false;
    period_ = 0;
    periodIsSet_ = false;
    filter_ = "";
    filterIsSet_ = false;
    algorithm_ = "";
    algorithmIsSet_ = false;
    algorithmType_ = "";
    algorithmTypeIsSet_ = false;
    certificateType_ = "";
    certificateTypeIsSet_ = false;
    serverType_ = "";
    serverTypeIsSet_ = false;
}

ShowStatisticSecretKeyRequest::~ShowStatisticSecretKeyRequest() = default;

void ShowStatisticSecretKeyRequest::validate()
{
}

web::json::value ShowStatisticSecretKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(fromIsSet_) {
        val[utility::conversions::to_string_t("from")] = ModelBase::toJson(from_);
    }
    if(toIsSet_) {
        val[utility::conversions::to_string_t("to")] = ModelBase::toJson(to_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }
    if(algorithmIsSet_) {
        val[utility::conversions::to_string_t("algorithm")] = ModelBase::toJson(algorithm_);
    }
    if(algorithmTypeIsSet_) {
        val[utility::conversions::to_string_t("algorithm_type")] = ModelBase::toJson(algorithmType_);
    }
    if(certificateTypeIsSet_) {
        val[utility::conversions::to_string_t("certificate_type")] = ModelBase::toJson(certificateType_);
    }
    if(serverTypeIsSet_) {
        val[utility::conversions::to_string_t("server_type")] = ModelBase::toJson(serverType_);
    }

    return val;
}
bool ShowStatisticSecretKeyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("from"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("from"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrom(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("to"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("to"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilter(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("algorithm_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algorithm_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgorithmType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateType(refVal);
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
    return ok;
}


std::string ShowStatisticSecretKeyRequest::getClusterId() const
{
    return clusterId_;
}

void ShowStatisticSecretKeyRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowStatisticSecretKeyRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowStatisticSecretKeyRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowStatisticSecretKeyRequest::getAppId() const
{
    return appId_;
}

void ShowStatisticSecretKeyRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ShowStatisticSecretKeyRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ShowStatisticSecretKeyRequest::unsetappId()
{
    appIdIsSet_ = false;
}

int64_t ShowStatisticSecretKeyRequest::getFrom() const
{
    return from_;
}

void ShowStatisticSecretKeyRequest::setFrom(int64_t value)
{
    from_ = value;
    fromIsSet_ = true;
}

bool ShowStatisticSecretKeyRequest::fromIsSet() const
{
    return fromIsSet_;
}

void ShowStatisticSecretKeyRequest::unsetfrom()
{
    fromIsSet_ = false;
}

int64_t ShowStatisticSecretKeyRequest::getTo() const
{
    return to_;
}

void ShowStatisticSecretKeyRequest::setTo(int64_t value)
{
    to_ = value;
    toIsSet_ = true;
}

bool ShowStatisticSecretKeyRequest::toIsSet() const
{
    return toIsSet_;
}

void ShowStatisticSecretKeyRequest::unsetto()
{
    toIsSet_ = false;
}

int32_t ShowStatisticSecretKeyRequest::getPeriod() const
{
    return period_;
}

void ShowStatisticSecretKeyRequest::setPeriod(int32_t value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool ShowStatisticSecretKeyRequest::periodIsSet() const
{
    return periodIsSet_;
}

void ShowStatisticSecretKeyRequest::unsetperiod()
{
    periodIsSet_ = false;
}

std::string ShowStatisticSecretKeyRequest::getFilter() const
{
    return filter_;
}

void ShowStatisticSecretKeyRequest::setFilter(const std::string& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool ShowStatisticSecretKeyRequest::filterIsSet() const
{
    return filterIsSet_;
}

void ShowStatisticSecretKeyRequest::unsetfilter()
{
    filterIsSet_ = false;
}

std::string ShowStatisticSecretKeyRequest::getAlgorithm() const
{
    return algorithm_;
}

void ShowStatisticSecretKeyRequest::setAlgorithm(const std::string& value)
{
    algorithm_ = value;
    algorithmIsSet_ = true;
}

bool ShowStatisticSecretKeyRequest::algorithmIsSet() const
{
    return algorithmIsSet_;
}

void ShowStatisticSecretKeyRequest::unsetalgorithm()
{
    algorithmIsSet_ = false;
}

std::string ShowStatisticSecretKeyRequest::getAlgorithmType() const
{
    return algorithmType_;
}

void ShowStatisticSecretKeyRequest::setAlgorithmType(const std::string& value)
{
    algorithmType_ = value;
    algorithmTypeIsSet_ = true;
}

bool ShowStatisticSecretKeyRequest::algorithmTypeIsSet() const
{
    return algorithmTypeIsSet_;
}

void ShowStatisticSecretKeyRequest::unsetalgorithmType()
{
    algorithmTypeIsSet_ = false;
}

std::string ShowStatisticSecretKeyRequest::getCertificateType() const
{
    return certificateType_;
}

void ShowStatisticSecretKeyRequest::setCertificateType(const std::string& value)
{
    certificateType_ = value;
    certificateTypeIsSet_ = true;
}

bool ShowStatisticSecretKeyRequest::certificateTypeIsSet() const
{
    return certificateTypeIsSet_;
}

void ShowStatisticSecretKeyRequest::unsetcertificateType()
{
    certificateTypeIsSet_ = false;
}

std::string ShowStatisticSecretKeyRequest::getServerType() const
{
    return serverType_;
}

void ShowStatisticSecretKeyRequest::setServerType(const std::string& value)
{
    serverType_ = value;
    serverTypeIsSet_ = true;
}

bool ShowStatisticSecretKeyRequest::serverTypeIsSet() const
{
    return serverTypeIsSet_;
}

void ShowStatisticSecretKeyRequest::unsetserverType()
{
    serverTypeIsSet_ = false;
}

}
}
}
}
}


