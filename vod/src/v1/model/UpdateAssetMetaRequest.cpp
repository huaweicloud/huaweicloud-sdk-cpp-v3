

#include "huaweicloud/vod/v1/model/UpdateAssetMetaRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UpdateAssetMetaRequest::UpdateAssetMetaRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAssetMetaRequest::~UpdateAssetMetaRequest() = default;

void UpdateAssetMetaRequest::validate()
{
}

web::json::value UpdateAssetMetaRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAssetMetaRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateAssetMetaReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAssetMetaRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateAssetMetaRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateAssetMetaRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateAssetMetaRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

UpdateAssetMetaReq UpdateAssetMetaRequest::getBody() const
{
    return body_;
}

void UpdateAssetMetaRequest::setBody(const UpdateAssetMetaReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAssetMetaRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAssetMetaRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


