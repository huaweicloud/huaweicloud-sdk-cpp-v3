

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceMetricDataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowInstanceMetricDataRequest::ShowInstanceMetricDataRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    metric_ = "";
    metricIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    componentId_ = "";
    componentIdIsSet_ = false;
}

ShowInstanceMetricDataRequest::~ShowInstanceMetricDataRequest() = default;

void ShowInstanceMetricDataRequest::validate()
{
}

web::json::value ShowInstanceMetricDataRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(metricIsSet_) {
        val[utility::conversions::to_string_t("metric")] = ModelBase::toJson(metric_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("component_id")] = ModelBase::toJson(componentId_);
    }

    return val;
}
bool ShowInstanceMetricDataRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetric(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("component_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentId(refVal);
        }
    }
    return ok;
}


std::string ShowInstanceMetricDataRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowInstanceMetricDataRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowInstanceMetricDataRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowInstanceMetricDataRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowInstanceMetricDataRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowInstanceMetricDataRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowInstanceMetricDataRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowInstanceMetricDataRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowInstanceMetricDataRequest::getStartTime() const
{
    return startTime_;
}

void ShowInstanceMetricDataRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowInstanceMetricDataRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowInstanceMetricDataRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowInstanceMetricDataRequest::getEndTime() const
{
    return endTime_;
}

void ShowInstanceMetricDataRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowInstanceMetricDataRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowInstanceMetricDataRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowInstanceMetricDataRequest::getMetric() const
{
    return metric_;
}

void ShowInstanceMetricDataRequest::setMetric(const std::string& value)
{
    metric_ = value;
    metricIsSet_ = true;
}

bool ShowInstanceMetricDataRequest::metricIsSet() const
{
    return metricIsSet_;
}

void ShowInstanceMetricDataRequest::unsetmetric()
{
    metricIsSet_ = false;
}

std::string ShowInstanceMetricDataRequest::getNodeId() const
{
    return nodeId_;
}

void ShowInstanceMetricDataRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ShowInstanceMetricDataRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ShowInstanceMetricDataRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ShowInstanceMetricDataRequest::getComponentId() const
{
    return componentId_;
}

void ShowInstanceMetricDataRequest::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool ShowInstanceMetricDataRequest::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void ShowInstanceMetricDataRequest::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

}
}
}
}
}


