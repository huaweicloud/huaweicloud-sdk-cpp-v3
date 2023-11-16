

#include "huaweicloud/aad/v1/model/ListUnboundProtectedIpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ListUnboundProtectedIpRequest::ListUnboundProtectedIpRequest()
{
    packageId_ = "";
    packageIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListUnboundProtectedIpRequest::~ListUnboundProtectedIpRequest() = default;

void ListUnboundProtectedIpRequest::validate()
{
}

web::json::value ListUnboundProtectedIpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(packageIdIsSet_) {
        val[utility::conversions::to_string_t("package_id")] = ModelBase::toJson(packageId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListUnboundProtectedIpRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("package_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageId(refVal);
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


std::string ListUnboundProtectedIpRequest::getPackageId() const
{
    return packageId_;
}

void ListUnboundProtectedIpRequest::setPackageId(const std::string& value)
{
    packageId_ = value;
    packageIdIsSet_ = true;
}

bool ListUnboundProtectedIpRequest::packageIdIsSet() const
{
    return packageIdIsSet_;
}

void ListUnboundProtectedIpRequest::unsetpackageId()
{
    packageIdIsSet_ = false;
}

int32_t ListUnboundProtectedIpRequest::getOffset() const
{
    return offset_;
}

void ListUnboundProtectedIpRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListUnboundProtectedIpRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListUnboundProtectedIpRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListUnboundProtectedIpRequest::getLimit() const
{
    return limit_;
}

void ListUnboundProtectedIpRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListUnboundProtectedIpRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListUnboundProtectedIpRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


