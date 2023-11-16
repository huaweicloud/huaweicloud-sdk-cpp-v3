

#include "huaweicloud/aad/v1/model/ListProtectedIpRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ListProtectedIpRequest::ListProtectedIpRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    packageId_ = "";
    packageIdIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
}

ListProtectedIpRequest::~ListProtectedIpRequest() = default;

void ListProtectedIpRequest::validate()
{
}

web::json::value ListProtectedIpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(packageIdIsSet_) {
        val[utility::conversions::to_string_t("package_id")] = ModelBase::toJson(packageId_);
    }
    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }

    return val;
}
bool ListProtectedIpRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("package_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    return ok;
}


int32_t ListProtectedIpRequest::getOffset() const
{
    return offset_;
}

void ListProtectedIpRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProtectedIpRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProtectedIpRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListProtectedIpRequest::getLimit() const
{
    return limit_;
}

void ListProtectedIpRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProtectedIpRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProtectedIpRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListProtectedIpRequest::getPackageId() const
{
    return packageId_;
}

void ListProtectedIpRequest::setPackageId(const std::string& value)
{
    packageId_ = value;
    packageIdIsSet_ = true;
}

bool ListProtectedIpRequest::packageIdIsSet() const
{
    return packageIdIsSet_;
}

void ListProtectedIpRequest::unsetpackageId()
{
    packageIdIsSet_ = false;
}

std::string ListProtectedIpRequest::getPolicyId() const
{
    return policyId_;
}

void ListProtectedIpRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool ListProtectedIpRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void ListProtectedIpRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string ListProtectedIpRequest::getIp() const
{
    return ip_;
}

void ListProtectedIpRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ListProtectedIpRequest::ipIsSet() const
{
    return ipIsSet_;
}

void ListProtectedIpRequest::unsetip()
{
    ipIsSet_ = false;
}

std::string ListProtectedIpRequest::getTag() const
{
    return tag_;
}

void ListProtectedIpRequest::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ListProtectedIpRequest::tagIsSet() const
{
    return tagIsSet_;
}

void ListProtectedIpRequest::unsettag()
{
    tagIsSet_ = false;
}

}
}
}
}
}


