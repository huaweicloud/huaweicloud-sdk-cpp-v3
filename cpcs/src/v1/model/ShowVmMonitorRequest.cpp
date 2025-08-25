

#include "huaweicloud/cpcs/v1/model/ShowVmMonitorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowVmMonitorRequest::ShowVmMonitorRequest()
{
    namespace_ = "";
    namespaceIsSet_ = false;
    metricName_ = "";
    metricNameIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    vsmId_ = "";
    vsmIdIsSet_ = false;
    from_ = 0L;
    fromIsSet_ = false;
    to_ = 0L;
    toIsSet_ = false;
    period_ = 0;
    periodIsSet_ = false;
    filter_ = "";
    filterIsSet_ = false;
}

ShowVmMonitorRequest::~ShowVmMonitorRequest() = default;

void ShowVmMonitorRequest::validate()
{
}

web::json::value ShowVmMonitorRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(metricNameIsSet_) {
        val[utility::conversions::to_string_t("metric_name")] = ModelBase::toJson(metricName_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(vsmIdIsSet_) {
        val[utility::conversions::to_string_t("vsm_id")] = ModelBase::toJson(vsmId_);
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

    return val;
}
bool ShowVmMonitorRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vsm_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vsm_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVsmId(refVal);
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
    return ok;
}


std::string ShowVmMonitorRequest::getNamespace() const
{
    return namespace_;
}

void ShowVmMonitorRequest::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ShowVmMonitorRequest::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ShowVmMonitorRequest::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string ShowVmMonitorRequest::getMetricName() const
{
    return metricName_;
}

void ShowVmMonitorRequest::setMetricName(const std::string& value)
{
    metricName_ = value;
    metricNameIsSet_ = true;
}

bool ShowVmMonitorRequest::metricNameIsSet() const
{
    return metricNameIsSet_;
}

void ShowVmMonitorRequest::unsetmetricName()
{
    metricNameIsSet_ = false;
}

std::string ShowVmMonitorRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowVmMonitorRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowVmMonitorRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowVmMonitorRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowVmMonitorRequest::getVsmId() const
{
    return vsmId_;
}

void ShowVmMonitorRequest::setVsmId(const std::string& value)
{
    vsmId_ = value;
    vsmIdIsSet_ = true;
}

bool ShowVmMonitorRequest::vsmIdIsSet() const
{
    return vsmIdIsSet_;
}

void ShowVmMonitorRequest::unsetvsmId()
{
    vsmIdIsSet_ = false;
}

int64_t ShowVmMonitorRequest::getFrom() const
{
    return from_;
}

void ShowVmMonitorRequest::setFrom(int64_t value)
{
    from_ = value;
    fromIsSet_ = true;
}

bool ShowVmMonitorRequest::fromIsSet() const
{
    return fromIsSet_;
}

void ShowVmMonitorRequest::unsetfrom()
{
    fromIsSet_ = false;
}

int64_t ShowVmMonitorRequest::getTo() const
{
    return to_;
}

void ShowVmMonitorRequest::setTo(int64_t value)
{
    to_ = value;
    toIsSet_ = true;
}

bool ShowVmMonitorRequest::toIsSet() const
{
    return toIsSet_;
}

void ShowVmMonitorRequest::unsetto()
{
    toIsSet_ = false;
}

int32_t ShowVmMonitorRequest::getPeriod() const
{
    return period_;
}

void ShowVmMonitorRequest::setPeriod(int32_t value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool ShowVmMonitorRequest::periodIsSet() const
{
    return periodIsSet_;
}

void ShowVmMonitorRequest::unsetperiod()
{
    periodIsSet_ = false;
}

std::string ShowVmMonitorRequest::getFilter() const
{
    return filter_;
}

void ShowVmMonitorRequest::setFilter(const std::string& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool ShowVmMonitorRequest::filterIsSet() const
{
    return filterIsSet_;
}

void ShowVmMonitorRequest::unsetfilter()
{
    filterIsSet_ = false;
}

}
}
}
}
}


