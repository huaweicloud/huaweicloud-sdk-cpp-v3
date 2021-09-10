

#include "huaweicloud/vod/v1/model/DeleteAssetCategoryRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




DeleteAssetCategoryRequest::DeleteAssetCategoryRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
}

DeleteAssetCategoryRequest::~DeleteAssetCategoryRequest() = default;

void DeleteAssetCategoryRequest::validate()
{
}

web::json::value DeleteAssetCategoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool DeleteAssetCategoryRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string DeleteAssetCategoryRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteAssetCategoryRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteAssetCategoryRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteAssetCategoryRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteAssetCategoryRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteAssetCategoryRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteAssetCategoryRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteAssetCategoryRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

int32_t DeleteAssetCategoryRequest::getId() const
{
    return id_;
}

void DeleteAssetCategoryRequest::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteAssetCategoryRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteAssetCategoryRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


