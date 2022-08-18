

#include "huaweicloud/vod/v1/model/DeleteTemplateGroupCollectionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




DeleteTemplateGroupCollectionRequest::DeleteTemplateGroupCollectionRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    groupCollectionId_ = "";
    groupCollectionIdIsSet_ = false;
}

DeleteTemplateGroupCollectionRequest::~DeleteTemplateGroupCollectionRequest() = default;

void DeleteTemplateGroupCollectionRequest::validate()
{
}

web::json::value DeleteTemplateGroupCollectionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(groupCollectionIdIsSet_) {
        val[utility::conversions::to_string_t("group_collection_id")] = ModelBase::toJson(groupCollectionId_);
    }

    return val;
}

bool DeleteTemplateGroupCollectionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_collection_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_collection_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupCollectionId(refVal);
        }
    }
    return ok;
}


std::string DeleteTemplateGroupCollectionRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteTemplateGroupCollectionRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteTemplateGroupCollectionRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteTemplateGroupCollectionRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteTemplateGroupCollectionRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteTemplateGroupCollectionRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteTemplateGroupCollectionRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteTemplateGroupCollectionRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteTemplateGroupCollectionRequest::getGroupCollectionId() const
{
    return groupCollectionId_;
}

void DeleteTemplateGroupCollectionRequest::setGroupCollectionId(const std::string& value)
{
    groupCollectionId_ = value;
    groupCollectionIdIsSet_ = true;
}

bool DeleteTemplateGroupCollectionRequest::groupCollectionIdIsSet() const
{
    return groupCollectionIdIsSet_;
}

void DeleteTemplateGroupCollectionRequest::unsetgroupCollectionId()
{
    groupCollectionIdIsSet_ = false;
}

}
}
}
}
}


