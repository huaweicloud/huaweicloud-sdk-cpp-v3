

#include "huaweicloud/metastudio/v1/model/ShowTenantNoticeConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowTenantNoticeConfigurationRequest::ShowTenantNoticeConfigurationRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ShowTenantNoticeConfigurationRequest::~ShowTenantNoticeConfigurationRequest() = default;

void ShowTenantNoticeConfigurationRequest::validate()
{
}

web::json::value ShowTenantNoticeConfigurationRequest::toJson() const
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
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ShowTenantNoticeConfigurationRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ShowTenantNoticeConfigurationRequest::getAuthorization() const
{
    return authorization_;
}

void ShowTenantNoticeConfigurationRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowTenantNoticeConfigurationRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowTenantNoticeConfigurationRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowTenantNoticeConfigurationRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowTenantNoticeConfigurationRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowTenantNoticeConfigurationRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowTenantNoticeConfigurationRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowTenantNoticeConfigurationRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowTenantNoticeConfigurationRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowTenantNoticeConfigurationRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowTenantNoticeConfigurationRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

int32_t ShowTenantNoticeConfigurationRequest::getLimit() const
{
    return limit_;
}

void ShowTenantNoticeConfigurationRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowTenantNoticeConfigurationRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowTenantNoticeConfigurationRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowTenantNoticeConfigurationRequest::getOffset() const
{
    return offset_;
}

void ShowTenantNoticeConfigurationRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowTenantNoticeConfigurationRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowTenantNoticeConfigurationRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowTenantNoticeConfigurationRequest::getType() const
{
    return type_;
}

void ShowTenantNoticeConfigurationRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowTenantNoticeConfigurationRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowTenantNoticeConfigurationRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


