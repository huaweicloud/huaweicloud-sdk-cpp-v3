

#include "huaweicloud/gaussdb/v3/model/ListColdTableWaitingTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListColdTableWaitingTasksRequest::ListColdTableWaitingTasksRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListColdTableWaitingTasksRequest::~ListColdTableWaitingTasksRequest() = default;

void ListColdTableWaitingTasksRequest::validate()
{
}

web::json::value ListColdTableWaitingTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListColdTableWaitingTasksRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    return ok;
}


std::string ListColdTableWaitingTasksRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListColdTableWaitingTasksRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListColdTableWaitingTasksRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListColdTableWaitingTasksRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListColdTableWaitingTasksRequest::getInstanceId() const
{
    return instanceId_;
}

void ListColdTableWaitingTasksRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListColdTableWaitingTasksRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListColdTableWaitingTasksRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListColdTableWaitingTasksRequest::getLimit() const
{
    return limit_;
}

void ListColdTableWaitingTasksRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListColdTableWaitingTasksRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListColdTableWaitingTasksRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListColdTableWaitingTasksRequest::getOffset() const
{
    return offset_;
}

void ListColdTableWaitingTasksRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListColdTableWaitingTasksRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListColdTableWaitingTasksRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


