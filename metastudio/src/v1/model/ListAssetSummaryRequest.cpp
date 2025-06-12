

#include "huaweicloud/metastudio/v1/model/ListAssetSummaryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListAssetSummaryRequest::ListAssetSummaryRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListAssetSummaryRequest::~ListAssetSummaryRequest() = default;

void ListAssetSummaryRequest::validate()
{
}

web::json::value ListAssetSummaryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListAssetSummaryRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListAssetSummarysReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListAssetSummaryRequest::getAuthorization() const
{
    return authorization_;
}

void ListAssetSummaryRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListAssetSummaryRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListAssetSummaryRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListAssetSummaryRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListAssetSummaryRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListAssetSummaryRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListAssetSummaryRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListAssetSummaryRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListAssetSummaryRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListAssetSummaryRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListAssetSummaryRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

ListAssetSummarysReq ListAssetSummaryRequest::getBody() const
{
    return body_;
}

void ListAssetSummaryRequest::setBody(const ListAssetSummarysReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAssetSummaryRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAssetSummaryRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


