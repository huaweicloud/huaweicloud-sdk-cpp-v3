

#include "huaweicloud/cpcs/v1/model/ShowStatusInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowStatusInstanceRequest::ShowStatusInstanceRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    from_ = 0L;
    fromIsSet_ = false;
    to_ = 0L;
    toIsSet_ = false;
    period_ = 0;
    periodIsSet_ = false;
    filter_ = "";
    filterIsSet_ = false;
    serverType_ = "";
    serverTypeIsSet_ = false;
}

ShowStatusInstanceRequest::~ShowStatusInstanceRequest() = default;

void ShowStatusInstanceRequest::validate()
{
}

web::json::value ShowStatusInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
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
    if(serverTypeIsSet_) {
        val[utility::conversions::to_string_t("server_type")] = ModelBase::toJson(serverType_);
    }

    return val;
}
bool ShowStatusInstanceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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


std::string ShowStatusInstanceRequest::getClusterId() const
{
    return clusterId_;
}

void ShowStatusInstanceRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowStatusInstanceRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowStatusInstanceRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowStatusInstanceRequest::getAppId() const
{
    return appId_;
}

void ShowStatusInstanceRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ShowStatusInstanceRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ShowStatusInstanceRequest::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ShowStatusInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowStatusInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowStatusInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowStatusInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int64_t ShowStatusInstanceRequest::getFrom() const
{
    return from_;
}

void ShowStatusInstanceRequest::setFrom(int64_t value)
{
    from_ = value;
    fromIsSet_ = true;
}

bool ShowStatusInstanceRequest::fromIsSet() const
{
    return fromIsSet_;
}

void ShowStatusInstanceRequest::unsetfrom()
{
    fromIsSet_ = false;
}

int64_t ShowStatusInstanceRequest::getTo() const
{
    return to_;
}

void ShowStatusInstanceRequest::setTo(int64_t value)
{
    to_ = value;
    toIsSet_ = true;
}

bool ShowStatusInstanceRequest::toIsSet() const
{
    return toIsSet_;
}

void ShowStatusInstanceRequest::unsetto()
{
    toIsSet_ = false;
}

int32_t ShowStatusInstanceRequest::getPeriod() const
{
    return period_;
}

void ShowStatusInstanceRequest::setPeriod(int32_t value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool ShowStatusInstanceRequest::periodIsSet() const
{
    return periodIsSet_;
}

void ShowStatusInstanceRequest::unsetperiod()
{
    periodIsSet_ = false;
}

std::string ShowStatusInstanceRequest::getFilter() const
{
    return filter_;
}

void ShowStatusInstanceRequest::setFilter(const std::string& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool ShowStatusInstanceRequest::filterIsSet() const
{
    return filterIsSet_;
}

void ShowStatusInstanceRequest::unsetfilter()
{
    filterIsSet_ = false;
}

std::string ShowStatusInstanceRequest::getServerType() const
{
    return serverType_;
}

void ShowStatusInstanceRequest::setServerType(const std::string& value)
{
    serverType_ = value;
    serverTypeIsSet_ = true;
}

bool ShowStatusInstanceRequest::serverTypeIsSet() const
{
    return serverTypeIsSet_;
}

void ShowStatusInstanceRequest::unsetserverType()
{
    serverTypeIsSet_ = false;
}

}
}
}
}
}


