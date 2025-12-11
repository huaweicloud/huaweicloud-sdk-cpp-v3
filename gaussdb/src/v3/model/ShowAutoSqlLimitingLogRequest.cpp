

#include "huaweicloud/gaussdb/v3/model/ShowAutoSqlLimitingLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowAutoSqlLimitingLogRequest::ShowAutoSqlLimitingLogRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
}

ShowAutoSqlLimitingLogRequest::~ShowAutoSqlLimitingLogRequest() = default;

void ShowAutoSqlLimitingLogRequest::validate()
{
}

web::json::value ShowAutoSqlLimitingLogRequest::toJson() const
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

    return val;
}
bool ShowAutoSqlLimitingLogRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowAutoSqlLimitingLogRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowAutoSqlLimitingLogRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowAutoSqlLimitingLogRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowAutoSqlLimitingLogRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowAutoSqlLimitingLogRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowAutoSqlLimitingLogRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowAutoSqlLimitingLogRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowAutoSqlLimitingLogRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowAutoSqlLimitingLogRequest::getNodeId() const
{
    return nodeId_;
}

void ShowAutoSqlLimitingLogRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ShowAutoSqlLimitingLogRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ShowAutoSqlLimitingLogRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

}
}
}
}
}


