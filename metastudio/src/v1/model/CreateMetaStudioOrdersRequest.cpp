

#include "huaweicloud/metastudio/v1/model/CreateMetaStudioOrdersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateMetaStudioOrdersRequest::CreateMetaStudioOrdersRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateMetaStudioOrdersRequest::~CreateMetaStudioOrdersRequest() = default;

void CreateMetaStudioOrdersRequest::validate()
{
}

web::json::value CreateMetaStudioOrdersRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateMetaStudioOrdersRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateMetaStudioOrdersReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateMetaStudioOrdersRequest::getAuthorization() const
{
    return authorization_;
}

void CreateMetaStudioOrdersRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateMetaStudioOrdersRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateMetaStudioOrdersRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateMetaStudioOrdersRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateMetaStudioOrdersRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateMetaStudioOrdersRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateMetaStudioOrdersRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateMetaStudioOrdersRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateMetaStudioOrdersRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateMetaStudioOrdersRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateMetaStudioOrdersRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

CreateMetaStudioOrdersReq CreateMetaStudioOrdersRequest::getBody() const
{
    return body_;
}

void CreateMetaStudioOrdersRequest::setBody(const CreateMetaStudioOrdersReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateMetaStudioOrdersRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateMetaStudioOrdersRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


