

#include "huaweicloud/gaussdb/v3/model/DownloadSlowLogFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DownloadSlowLogFileRequest::DownloadSlowLogFileRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
}

DownloadSlowLogFileRequest::~DownloadSlowLogFileRequest() = default;

void DownloadSlowLogFileRequest::validate()
{
}

web::json::value DownloadSlowLogFileRequest::toJson() const
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
bool DownloadSlowLogFileRequest::fromJson(const web::json::value& val)
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


std::string DownloadSlowLogFileRequest::getXLanguage() const
{
    return xLanguage_;
}

void DownloadSlowLogFileRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DownloadSlowLogFileRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DownloadSlowLogFileRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DownloadSlowLogFileRequest::getInstanceId() const
{
    return instanceId_;
}

void DownloadSlowLogFileRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DownloadSlowLogFileRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DownloadSlowLogFileRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DownloadSlowLogFileRequest::getNodeId() const
{
    return nodeId_;
}

void DownloadSlowLogFileRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool DownloadSlowLogFileRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void DownloadSlowLogFileRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

}
}
}
}
}


