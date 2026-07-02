

#include "huaweicloud/gaussdb/v3/model/DownloadRealtimeSessionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DownloadRealtimeSessionRequest::DownloadRealtimeSessionRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

DownloadRealtimeSessionRequest::~DownloadRealtimeSessionRequest() = default;

void DownloadRealtimeSessionRequest::validate()
{
}

web::json::value DownloadRealtimeSessionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool DownloadRealtimeSessionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


std::string DownloadRealtimeSessionRequest::getInstanceId() const
{
    return instanceId_;
}

void DownloadRealtimeSessionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DownloadRealtimeSessionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DownloadRealtimeSessionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DownloadRealtimeSessionRequest::getNodeId() const
{
    return nodeId_;
}

void DownloadRealtimeSessionRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool DownloadRealtimeSessionRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void DownloadRealtimeSessionRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string DownloadRealtimeSessionRequest::getXLanguage() const
{
    return xLanguage_;
}

void DownloadRealtimeSessionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DownloadRealtimeSessionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DownloadRealtimeSessionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DownloadRealtimeSessionRequest::getRequestId() const
{
    return requestId_;
}

void DownloadRealtimeSessionRequest::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DownloadRealtimeSessionRequest::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DownloadRealtimeSessionRequest::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


