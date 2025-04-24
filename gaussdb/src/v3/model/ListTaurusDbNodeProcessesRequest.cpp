

#include "huaweicloud/gaussdb/v3/model/ListTaurusDbNodeProcessesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListTaurusDbNodeProcessesRequest::ListTaurusDbNodeProcessesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListTaurusDbNodeProcessesRequest::~ListTaurusDbNodeProcessesRequest() = default;

void ListTaurusDbNodeProcessesRequest::validate()
{
}

web::json::value ListTaurusDbNodeProcessesRequest::toJson() const
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
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListTaurusDbNodeProcessesRequest::fromJson(const web::json::value& val)
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


std::string ListTaurusDbNodeProcessesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListTaurusDbNodeProcessesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListTaurusDbNodeProcessesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListTaurusDbNodeProcessesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListTaurusDbNodeProcessesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListTaurusDbNodeProcessesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListTaurusDbNodeProcessesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListTaurusDbNodeProcessesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListTaurusDbNodeProcessesRequest::getNodeId() const
{
    return nodeId_;
}

void ListTaurusDbNodeProcessesRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListTaurusDbNodeProcessesRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListTaurusDbNodeProcessesRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

int32_t ListTaurusDbNodeProcessesRequest::getOffset() const
{
    return offset_;
}

void ListTaurusDbNodeProcessesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTaurusDbNodeProcessesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTaurusDbNodeProcessesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListTaurusDbNodeProcessesRequest::getLimit() const
{
    return limit_;
}

void ListTaurusDbNodeProcessesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTaurusDbNodeProcessesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTaurusDbNodeProcessesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


