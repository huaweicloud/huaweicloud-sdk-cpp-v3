

#include "huaweicloud/rds/v3/model/ShowIntelligentKillSessionStatisticRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowIntelligentKillSessionStatisticRequest::ShowIntelligentKillSessionStatisticRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
}

ShowIntelligentKillSessionStatisticRequest::~ShowIntelligentKillSessionStatisticRequest() = default;

void ShowIntelligentKillSessionStatisticRequest::validate()
{
}

web::json::value ShowIntelligentKillSessionStatisticRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }

    return val;
}
bool ShowIntelligentKillSessionStatisticRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
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
    return ok;
}


std::string ShowIntelligentKillSessionStatisticRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowIntelligentKillSessionStatisticRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowIntelligentKillSessionStatisticRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowIntelligentKillSessionStatisticRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowIntelligentKillSessionStatisticRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowIntelligentKillSessionStatisticRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowIntelligentKillSessionStatisticRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowIntelligentKillSessionStatisticRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowIntelligentKillSessionStatisticRequest::getNodeId() const
{
    return nodeId_;
}

void ShowIntelligentKillSessionStatisticRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ShowIntelligentKillSessionStatisticRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ShowIntelligentKillSessionStatisticRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

}
}
}
}
}


