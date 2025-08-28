

#include "huaweicloud/metastudio/v1/model/ListLlmConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListLlmConfigRequest::ListLlmConfigRequest()
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

ListLlmConfigRequest::~ListLlmConfigRequest() = default;

void ListLlmConfigRequest::validate()
{
}

web::json::value ListLlmConfigRequest::toJson() const
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
bool ListLlmConfigRequest::fromJson(const web::json::value& val)
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


std::string ListLlmConfigRequest::getAuthorization() const
{
    return authorization_;
}

void ListLlmConfigRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListLlmConfigRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListLlmConfigRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListLlmConfigRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListLlmConfigRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListLlmConfigRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListLlmConfigRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListLlmConfigRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListLlmConfigRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListLlmConfigRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListLlmConfigRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListLlmConfigRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListLlmConfigRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListLlmConfigRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListLlmConfigRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListLlmConfigRequest::getOffset() const
{
    return offset_;
}

void ListLlmConfigRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListLlmConfigRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListLlmConfigRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListLlmConfigRequest::getLimit() const
{
    return limit_;
}

void ListLlmConfigRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListLlmConfigRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListLlmConfigRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListLlmConfigRequest::getName() const
{
    return name_;
}

void ListLlmConfigRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListLlmConfigRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListLlmConfigRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


