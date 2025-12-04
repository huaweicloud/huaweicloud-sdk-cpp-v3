

#include "huaweicloud/rds/v3/model/ListPackLogInfosRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListPackLogInfosRequest::ListPackLogInfosRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListPackLogInfosRequest::~ListPackLogInfosRequest() = default;

void ListPackLogInfosRequest::validate()
{
}

web::json::value ListPackLogInfosRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListPackLogInfosRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
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


std::string ListPackLogInfosRequest::getInstanceId() const
{
    return instanceId_;
}

void ListPackLogInfosRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListPackLogInfosRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListPackLogInfosRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListPackLogInfosRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListPackLogInfosRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListPackLogInfosRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListPackLogInfosRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ListPackLogInfosRequest::getOffset() const
{
    return offset_;
}

void ListPackLogInfosRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPackLogInfosRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPackLogInfosRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPackLogInfosRequest::getLimit() const
{
    return limit_;
}

void ListPackLogInfosRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPackLogInfosRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPackLogInfosRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


