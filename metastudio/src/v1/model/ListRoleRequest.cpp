

#include "huaweicloud/metastudio/v1/model/ListRoleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListRoleRequest::ListRoleRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ListRoleRequest::~ListRoleRequest() = default;

void ListRoleRequest::validate()
{
}

web::json::value ListRoleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ListRoleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string ListRoleRequest::getAuthorization() const
{
    return authorization_;
}

void ListRoleRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListRoleRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListRoleRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListRoleRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListRoleRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListRoleRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListRoleRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListRoleRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListRoleRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListRoleRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListRoleRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListRoleRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListRoleRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListRoleRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListRoleRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListRoleRequest::getOffset() const
{
    return offset_;
}

void ListRoleRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRoleRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRoleRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRoleRequest::getLimit() const
{
    return limit_;
}

void ListRoleRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRoleRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRoleRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListRoleRequest::getName() const
{
    return name_;
}

void ListRoleRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListRoleRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListRoleRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


