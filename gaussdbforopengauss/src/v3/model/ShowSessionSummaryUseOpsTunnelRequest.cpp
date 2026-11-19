

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowSessionSummaryUseOpsTunnelRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowSessionSummaryUseOpsTunnelRequest::ShowSessionSummaryUseOpsTunnelRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    componentId_ = "";
    componentIdIsSet_ = false;
    useOpsTunnel_ = false;
    useOpsTunnelIsSet_ = false;
}

ShowSessionSummaryUseOpsTunnelRequest::~ShowSessionSummaryUseOpsTunnelRequest() = default;

void ShowSessionSummaryUseOpsTunnelRequest::validate()
{
}

web::json::value ShowSessionSummaryUseOpsTunnelRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("component_id")] = ModelBase::toJson(componentId_);
    }
    if(useOpsTunnelIsSet_) {
        val[utility::conversions::to_string_t("use_ops_tunnel")] = ModelBase::toJson(useOpsTunnel_);
    }

    return val;
}
bool ShowSessionSummaryUseOpsTunnelRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("use_ops_tunnel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("use_ops_tunnel"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUseOpsTunnel(refVal);
        }
    }
    return ok;
}


std::string ShowSessionSummaryUseOpsTunnelRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowSessionSummaryUseOpsTunnelRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowSessionSummaryUseOpsTunnelRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowSessionSummaryUseOpsTunnelRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowSessionSummaryUseOpsTunnelRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowSessionSummaryUseOpsTunnelRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowSessionSummaryUseOpsTunnelRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowSessionSummaryUseOpsTunnelRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowSessionSummaryUseOpsTunnelRequest::getNodeId() const
{
    return nodeId_;
}

void ShowSessionSummaryUseOpsTunnelRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ShowSessionSummaryUseOpsTunnelRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ShowSessionSummaryUseOpsTunnelRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ShowSessionSummaryUseOpsTunnelRequest::getComponentId() const
{
    return componentId_;
}

void ShowSessionSummaryUseOpsTunnelRequest::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool ShowSessionSummaryUseOpsTunnelRequest::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void ShowSessionSummaryUseOpsTunnelRequest::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

bool ShowSessionSummaryUseOpsTunnelRequest::isUseOpsTunnel() const
{
    return useOpsTunnel_;
}

void ShowSessionSummaryUseOpsTunnelRequest::setUseOpsTunnel(bool value)
{
    useOpsTunnel_ = value;
    useOpsTunnelIsSet_ = true;
}

bool ShowSessionSummaryUseOpsTunnelRequest::useOpsTunnelIsSet() const
{
    return useOpsTunnelIsSet_;
}

void ShowSessionSummaryUseOpsTunnelRequest::unsetuseOpsTunnel()
{
    useOpsTunnelIsSet_ = false;
}

}
}
}
}
}


