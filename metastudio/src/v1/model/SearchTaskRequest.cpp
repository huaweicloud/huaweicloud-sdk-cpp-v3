

#include "huaweicloud/metastudio/v1/model/SearchTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SearchTaskRequest::SearchTaskRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    resourceIsSet_ = false;
    businessId_ = "";
    businessIdIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

SearchTaskRequest::~SearchTaskRequest() = default;

void SearchTaskRequest::validate()
{
}

web::json::value SearchTaskRequest::toJson() const
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
    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }
    if(businessIdIsSet_) {
        val[utility::conversions::to_string_t("business_id")] = ModelBase::toJson(businessId_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool SearchTaskRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("business_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string SearchTaskRequest::getAuthorization() const
{
    return authorization_;
}

void SearchTaskRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool SearchTaskRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void SearchTaskRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string SearchTaskRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void SearchTaskRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool SearchTaskRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void SearchTaskRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string SearchTaskRequest::getXProjectId() const
{
    return xProjectId_;
}

void SearchTaskRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool SearchTaskRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void SearchTaskRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::vector<std::string>& SearchTaskRequest::getResource()
{
    return resource_;
}

void SearchTaskRequest::setResource(const std::vector<std::string>& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool SearchTaskRequest::resourceIsSet() const
{
    return resourceIsSet_;
}

void SearchTaskRequest::unsetresource()
{
    resourceIsSet_ = false;
}

std::string SearchTaskRequest::getBusinessId() const
{
    return businessId_;
}

void SearchTaskRequest::setBusinessId(const std::string& value)
{
    businessId_ = value;
    businessIdIsSet_ = true;
}

bool SearchTaskRequest::businessIdIsSet() const
{
    return businessIdIsSet_;
}

void SearchTaskRequest::unsetbusinessId()
{
    businessIdIsSet_ = false;
}

std::string SearchTaskRequest::getBeginTime() const
{
    return beginTime_;
}

void SearchTaskRequest::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool SearchTaskRequest::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void SearchTaskRequest::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string SearchTaskRequest::getEndTime() const
{
    return endTime_;
}

void SearchTaskRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool SearchTaskRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void SearchTaskRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


