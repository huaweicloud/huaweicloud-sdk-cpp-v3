

#include "huaweicloud/rds/v3/model/ListOffSiteInstancesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListOffSiteInstancesRequest::ListOffSiteInstancesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offsetIsSet_ = false;
    limitIsSet_ = false;
}

ListOffSiteInstancesRequest::~ListOffSiteInstancesRequest() = default;

void ListOffSiteInstancesRequest::validate()
{
}

web::json::value ListOffSiteInstancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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

bool ListOffSiteInstancesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}

std::string ListOffSiteInstancesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListOffSiteInstancesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListOffSiteInstancesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListOffSiteInstancesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

Object ListOffSiteInstancesRequest::getOffset() const
{
    return offset_;
}

void ListOffSiteInstancesRequest::setOffset(const Object& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListOffSiteInstancesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListOffSiteInstancesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

Object ListOffSiteInstancesRequest::getLimit() const
{
    return limit_;
}

void ListOffSiteInstancesRequest::setLimit(const Object& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListOffSiteInstancesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListOffSiteInstancesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


