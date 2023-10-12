

#include "huaweicloud/gaussdbforopengauss/v3/model/ListAvailableFlavorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListAvailableFlavorsRequest::ListAvailableFlavorsRequest()
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

ListAvailableFlavorsRequest::~ListAvailableFlavorsRequest() = default;

void ListAvailableFlavorsRequest::validate()
{
}

web::json::value ListAvailableFlavorsRequest::toJson() const
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
bool ListAvailableFlavorsRequest::fromJson(const web::json::value& val)
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


std::string ListAvailableFlavorsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListAvailableFlavorsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListAvailableFlavorsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListAvailableFlavorsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListAvailableFlavorsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAvailableFlavorsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAvailableFlavorsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAvailableFlavorsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListAvailableFlavorsRequest::getOffset() const
{
    return offset_;
}

void ListAvailableFlavorsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAvailableFlavorsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAvailableFlavorsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListAvailableFlavorsRequest::getLimit() const
{
    return limit_;
}

void ListAvailableFlavorsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAvailableFlavorsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAvailableFlavorsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


