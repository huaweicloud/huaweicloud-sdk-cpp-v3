

#include "huaweicloud/gaussdbforopengauss/v3/model/ListBindedEipsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListBindedEipsRequest::ListBindedEipsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListBindedEipsRequest::~ListBindedEipsRequest() = default;

void ListBindedEipsRequest::validate()
{
}

web::json::value ListBindedEipsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
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

bool ListBindedEipsRequest::fromJson(const web::json::value& val)
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

std::string ListBindedEipsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListBindedEipsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListBindedEipsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListBindedEipsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListBindedEipsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListBindedEipsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListBindedEipsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListBindedEipsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListBindedEipsRequest::getOffset() const
{
    return offset_;
}

void ListBindedEipsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListBindedEipsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListBindedEipsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListBindedEipsRequest::getLimit() const
{
    return limit_;
}

void ListBindedEipsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBindedEipsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListBindedEipsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


