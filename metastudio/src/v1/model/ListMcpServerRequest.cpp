

#include "huaweicloud/metastudio/v1/model/ListMcpServerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListMcpServerRequest::ListMcpServerRequest()
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

ListMcpServerRequest::~ListMcpServerRequest() = default;

void ListMcpServerRequest::validate()
{
}

web::json::value ListMcpServerRequest::toJson() const
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
bool ListMcpServerRequest::fromJson(const web::json::value& val)
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


std::string ListMcpServerRequest::getAuthorization() const
{
    return authorization_;
}

void ListMcpServerRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListMcpServerRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListMcpServerRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListMcpServerRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListMcpServerRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListMcpServerRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListMcpServerRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListMcpServerRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListMcpServerRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListMcpServerRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListMcpServerRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListMcpServerRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListMcpServerRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListMcpServerRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListMcpServerRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListMcpServerRequest::getOffset() const
{
    return offset_;
}

void ListMcpServerRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListMcpServerRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListMcpServerRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListMcpServerRequest::getLimit() const
{
    return limit_;
}

void ListMcpServerRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListMcpServerRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListMcpServerRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListMcpServerRequest::getName() const
{
    return name_;
}

void ListMcpServerRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListMcpServerRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListMcpServerRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


