

#include "huaweicloud/vod/v1/model/DeleteTranscodeTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




DeleteTranscodeTemplateRequest::DeleteTranscodeTemplateRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
}

DeleteTranscodeTemplateRequest::~DeleteTranscodeTemplateRequest() = default;

void DeleteTranscodeTemplateRequest::validate()
{
}

web::json::value DeleteTranscodeTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}

bool DeleteTranscodeTemplateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    return ok;
}


std::string DeleteTranscodeTemplateRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteTranscodeTemplateRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteTranscodeTemplateRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteTranscodeTemplateRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteTranscodeTemplateRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteTranscodeTemplateRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteTranscodeTemplateRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteTranscodeTemplateRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteTranscodeTemplateRequest::getGroupId() const
{
    return groupId_;
}

void DeleteTranscodeTemplateRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DeleteTranscodeTemplateRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DeleteTranscodeTemplateRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


