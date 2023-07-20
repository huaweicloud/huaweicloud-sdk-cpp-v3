

#include "huaweicloud/gaussdbfornosql/v3/model/ShowModifyHistoryRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowModifyHistoryRequest::ShowModifyHistoryRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowModifyHistoryRequest::~ShowModifyHistoryRequest() = default;

void ShowModifyHistoryRequest::validate()
{
}

web::json::value ShowModifyHistoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}

bool ShowModifyHistoryRequest::fromJson(const web::json::value& val)
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

std::string ShowModifyHistoryRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowModifyHistoryRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowModifyHistoryRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowModifyHistoryRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ShowModifyHistoryRequest::getOffset() const
{
    return offset_;
}

void ShowModifyHistoryRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowModifyHistoryRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowModifyHistoryRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowModifyHistoryRequest::getLimit() const
{
    return limit_;
}

void ShowModifyHistoryRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowModifyHistoryRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowModifyHistoryRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


