

#include "huaweicloud/gaussdbforopengauss/v3/model/ListComponentInfosRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListComponentInfosRequest::ListComponentInfosRequest()
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

ListComponentInfosRequest::~ListComponentInfosRequest() = default;

void ListComponentInfosRequest::validate()
{
}

web::json::value ListComponentInfosRequest::toJson() const
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

bool ListComponentInfosRequest::fromJson(const web::json::value& val)
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

std::string ListComponentInfosRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListComponentInfosRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListComponentInfosRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListComponentInfosRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListComponentInfosRequest::getInstanceId() const
{
    return instanceId_;
}

void ListComponentInfosRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListComponentInfosRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListComponentInfosRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListComponentInfosRequest::getOffset() const
{
    return offset_;
}

void ListComponentInfosRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListComponentInfosRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListComponentInfosRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListComponentInfosRequest::getLimit() const
{
    return limit_;
}

void ListComponentInfosRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListComponentInfosRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListComponentInfosRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


