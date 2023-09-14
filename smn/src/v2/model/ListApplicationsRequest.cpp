

#include "huaweicloud/smn/v2/model/ListApplicationsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListApplicationsRequest::ListApplicationsRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    platform_ = "";
    platformIsSet_ = false;
}

ListApplicationsRequest::~ListApplicationsRequest() = default;

void ListApplicationsRequest::validate()
{
}

web::json::value ListApplicationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(platformIsSet_) {
        val[utility::conversions::to_string_t("platform")] = ModelBase::toJson(platform_);
    }

    return val;
}

bool ListApplicationsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("platform"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("platform"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlatform(refVal);
        }
    }
    return ok;
}

int32_t ListApplicationsRequest::getOffset() const
{
    return offset_;
}

void ListApplicationsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListApplicationsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListApplicationsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListApplicationsRequest::getLimit() const
{
    return limit_;
}

void ListApplicationsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListApplicationsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListApplicationsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListApplicationsRequest::getName() const
{
    return name_;
}

void ListApplicationsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListApplicationsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListApplicationsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListApplicationsRequest::getPlatform() const
{
    return platform_;
}

void ListApplicationsRequest::setPlatform(const std::string& value)
{
    platform_ = value;
    platformIsSet_ = true;
}

bool ListApplicationsRequest::platformIsSet() const
{
    return platformIsSet_;
}

void ListApplicationsRequest::unsetplatform()
{
    platformIsSet_ = false;
}

}
}
}
}
}


