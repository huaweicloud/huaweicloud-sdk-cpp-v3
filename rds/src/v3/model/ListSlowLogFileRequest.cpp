

#include "huaweicloud/rds/v3/model/ListSlowLogFileRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSlowLogFileRequest::ListSlowLogFileRequest()
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

ListSlowLogFileRequest::~ListSlowLogFileRequest() = default;

void ListSlowLogFileRequest::validate()
{
}

web::json::value ListSlowLogFileRequest::toJson() const
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

bool ListSlowLogFileRequest::fromJson(const web::json::value& val)
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

std::string ListSlowLogFileRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSlowLogFileRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSlowLogFileRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSlowLogFileRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListSlowLogFileRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSlowLogFileRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSlowLogFileRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSlowLogFileRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListSlowLogFileRequest::getOffset() const
{
    return offset_;
}

void ListSlowLogFileRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSlowLogFileRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSlowLogFileRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSlowLogFileRequest::getLimit() const
{
    return limit_;
}

void ListSlowLogFileRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSlowLogFileRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSlowLogFileRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


