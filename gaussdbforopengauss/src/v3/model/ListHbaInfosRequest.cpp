

#include "huaweicloud/gaussdbforopengauss/v3/model/ListHbaInfosRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListHbaInfosRequest::ListHbaInfosRequest()
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

ListHbaInfosRequest::~ListHbaInfosRequest() = default;

void ListHbaInfosRequest::validate()
{
}

web::json::value ListHbaInfosRequest::toJson() const
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
bool ListHbaInfosRequest::fromJson(const web::json::value& val)
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


std::string ListHbaInfosRequest::getInstanceId() const
{
    return instanceId_;
}

void ListHbaInfosRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListHbaInfosRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListHbaInfosRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListHbaInfosRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListHbaInfosRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListHbaInfosRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListHbaInfosRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ListHbaInfosRequest::getOffset() const
{
    return offset_;
}

void ListHbaInfosRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListHbaInfosRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListHbaInfosRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListHbaInfosRequest::getLimit() const
{
    return limit_;
}

void ListHbaInfosRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListHbaInfosRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListHbaInfosRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


