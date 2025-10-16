

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSessionMemoryContextRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSessionMemoryContextRequest::ListSessionMemoryContextRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    sessionId_ = "";
    sessionIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListSessionMemoryContextRequest::~ListSessionMemoryContextRequest() = default;

void ListSessionMemoryContextRequest::validate()
{
}

web::json::value ListSessionMemoryContextRequest::toJson() const
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
    if(sessionIdIsSet_) {
        val[utility::conversions::to_string_t("session_id")] = ModelBase::toJson(sessionId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListSessionMemoryContextRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("session_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListSessionMemoryContextRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSessionMemoryContextRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSessionMemoryContextRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSessionMemoryContextRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListSessionMemoryContextRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSessionMemoryContextRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSessionMemoryContextRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSessionMemoryContextRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListSessionMemoryContextRequest::getNodeId() const
{
    return nodeId_;
}

void ListSessionMemoryContextRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListSessionMemoryContextRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListSessionMemoryContextRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ListSessionMemoryContextRequest::getSessionId() const
{
    return sessionId_;
}

void ListSessionMemoryContextRequest::setSessionId(const std::string& value)
{
    sessionId_ = value;
    sessionIdIsSet_ = true;
}

bool ListSessionMemoryContextRequest::sessionIdIsSet() const
{
    return sessionIdIsSet_;
}

void ListSessionMemoryContextRequest::unsetsessionId()
{
    sessionIdIsSet_ = false;
}

int32_t ListSessionMemoryContextRequest::getOffset() const
{
    return offset_;
}

void ListSessionMemoryContextRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSessionMemoryContextRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSessionMemoryContextRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSessionMemoryContextRequest::getLimit() const
{
    return limit_;
}

void ListSessionMemoryContextRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSessionMemoryContextRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSessionMemoryContextRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


