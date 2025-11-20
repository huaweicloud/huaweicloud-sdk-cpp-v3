

#include "huaweicloud/rds/v3/model/ListDbAgentJobHistoryStepsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListDbAgentJobHistoryStepsRequest::ListDbAgentJobHistoryStepsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    historyId_ = "";
    historyIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListDbAgentJobHistoryStepsRequest::~ListDbAgentJobHistoryStepsRequest() = default;

void ListDbAgentJobHistoryStepsRequest::validate()
{
}

web::json::value ListDbAgentJobHistoryStepsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(historyIdIsSet_) {
        val[utility::conversions::to_string_t("history_id")] = ModelBase::toJson(historyId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListDbAgentJobHistoryStepsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("history_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("history_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHistoryId(refVal);
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


std::string ListDbAgentJobHistoryStepsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDbAgentJobHistoryStepsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDbAgentJobHistoryStepsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDbAgentJobHistoryStepsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListDbAgentJobHistoryStepsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDbAgentJobHistoryStepsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDbAgentJobHistoryStepsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDbAgentJobHistoryStepsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDbAgentJobHistoryStepsRequest::getHistoryId() const
{
    return historyId_;
}

void ListDbAgentJobHistoryStepsRequest::setHistoryId(const std::string& value)
{
    historyId_ = value;
    historyIdIsSet_ = true;
}

bool ListDbAgentJobHistoryStepsRequest::historyIdIsSet() const
{
    return historyIdIsSet_;
}

void ListDbAgentJobHistoryStepsRequest::unsethistoryId()
{
    historyIdIsSet_ = false;
}

int32_t ListDbAgentJobHistoryStepsRequest::getOffset() const
{
    return offset_;
}

void ListDbAgentJobHistoryStepsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDbAgentJobHistoryStepsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDbAgentJobHistoryStepsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDbAgentJobHistoryStepsRequest::getLimit() const
{
    return limit_;
}

void ListDbAgentJobHistoryStepsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDbAgentJobHistoryStepsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDbAgentJobHistoryStepsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


