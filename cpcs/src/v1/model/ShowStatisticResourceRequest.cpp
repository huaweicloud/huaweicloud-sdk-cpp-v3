

#include "huaweicloud/cpcs/v1/model/ShowStatisticResourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowStatisticResourceRequest::ShowStatisticResourceRequest()
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

ShowStatisticResourceRequest::~ShowStatisticResourceRequest() = default;

void ShowStatisticResourceRequest::validate()
{
}

web::json::value ShowStatisticResourceRequest::toJson() const
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
bool ShowStatisticResourceRequest::fromJson(const web::json::value& val)
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


std::string ShowStatisticResourceRequest::getClusterId() const
{
    return clusterId_;
}

void ShowStatisticResourceRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowStatisticResourceRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowStatisticResourceRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowStatisticResourceRequest::getAppId() const
{
    return appId_;
}

void ShowStatisticResourceRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ShowStatisticResourceRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ShowStatisticResourceRequest::unsetappId()
{
    appIdIsSet_ = false;
}

int64_t ShowStatisticResourceRequest::getFrom() const
{
    return from_;
}

void ShowStatisticResourceRequest::setFrom(int64_t value)
{
    from_ = value;
    fromIsSet_ = true;
}

bool ShowStatisticResourceRequest::fromIsSet() const
{
    return fromIsSet_;
}

void ShowStatisticResourceRequest::unsetfrom()
{
    fromIsSet_ = false;
}

int64_t ShowStatisticResourceRequest::getTo() const
{
    return to_;
}

void ShowStatisticResourceRequest::setTo(int64_t value)
{
    to_ = value;
    toIsSet_ = true;
}

bool ShowStatisticResourceRequest::toIsSet() const
{
    return toIsSet_;
}

void ShowStatisticResourceRequest::unsetto()
{
    toIsSet_ = false;
}

int32_t ShowStatisticResourceRequest::getPeriod() const
{
    return period_;
}

void ShowStatisticResourceRequest::setPeriod(int32_t value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool ShowStatisticResourceRequest::periodIsSet() const
{
    return periodIsSet_;
}

void ShowStatisticResourceRequest::unsetperiod()
{
    periodIsSet_ = false;
}

std::string ShowStatisticResourceRequest::getFilter() const
{
    return filter_;
}

void ShowStatisticResourceRequest::setFilter(const std::string& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool ShowStatisticResourceRequest::filterIsSet() const
{
    return filterIsSet_;
}

void ShowStatisticResourceRequest::unsetfilter()
{
    filterIsSet_ = false;
}

std::string ShowStatisticResourceRequest::getAlgorithm() const
{
    return algorithm_;
}

void ShowStatisticResourceRequest::setAlgorithm(const std::string& value)
{
    algorithm_ = value;
    algorithmIsSet_ = true;
}

bool ShowStatisticResourceRequest::algorithmIsSet() const
{
    return algorithmIsSet_;
}

void ShowStatisticResourceRequest::unsetalgorithm()
{
    algorithmIsSet_ = false;
}

std::string ShowStatisticResourceRequest::getAlgorithmType() const
{
    return algorithmType_;
}

void ShowStatisticResourceRequest::setAlgorithmType(const std::string& value)
{
    algorithmType_ = value;
    algorithmTypeIsSet_ = true;
}

bool ShowStatisticResourceRequest::algorithmTypeIsSet() const
{
    return algorithmTypeIsSet_;
}

void ShowStatisticResourceRequest::unsetalgorithmType()
{
    algorithmTypeIsSet_ = false;
}

std::string ShowStatisticResourceRequest::getCertificateType() const
{
    return certificateType_;
}

void ShowStatisticResourceRequest::setCertificateType(const std::string& value)
{
    certificateType_ = value;
    certificateTypeIsSet_ = true;
}

bool ShowStatisticResourceRequest::certificateTypeIsSet() const
{
    return certificateTypeIsSet_;
}

void ShowStatisticResourceRequest::unsetcertificateType()
{
    certificateTypeIsSet_ = false;
}

std::string ShowStatisticResourceRequest::getServerType() const
{
    return serverType_;
}

void ShowStatisticResourceRequest::setServerType(const std::string& value)
{
    serverType_ = value;
    serverTypeIsSet_ = true;
}

bool ShowStatisticResourceRequest::serverTypeIsSet() const
{
    return serverTypeIsSet_;
}

void ShowStatisticResourceRequest::unsetserverType()
{
    serverTypeIsSet_ = false;
}

}
}
}
}
}


