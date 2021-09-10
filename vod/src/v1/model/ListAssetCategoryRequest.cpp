

#include "huaweicloud/vod/v1/model/ListAssetCategoryRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListAssetCategoryRequest::ListAssetCategoryRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
}

ListAssetCategoryRequest::~ListAssetCategoryRequest() = default;

void ListAssetCategoryRequest::validate()
{
}

web::json::value ListAssetCategoryRequest::toJson() const
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

bool ListAssetCategoryRequest::fromJson(const web::json::value& val)
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


std::string ListAssetCategoryRequest::getAuthorization() const
{
    return authorization_;
}

void ListAssetCategoryRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListAssetCategoryRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListAssetCategoryRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListAssetCategoryRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListAssetCategoryRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListAssetCategoryRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListAssetCategoryRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

int32_t ListAssetCategoryRequest::getId() const
{
    return id_;
}

void ListAssetCategoryRequest::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListAssetCategoryRequest::idIsSet() const
{
    return idIsSet_;
}

void ListAssetCategoryRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


