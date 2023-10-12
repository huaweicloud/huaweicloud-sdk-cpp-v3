

#include "huaweicloud/vod/v1/model/CreatePreheatingAssetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreatePreheatingAssetRequest::CreatePreheatingAssetRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePreheatingAssetRequest::~CreatePreheatingAssetRequest() = default;

void CreatePreheatingAssetRequest::validate()
{
}

web::json::value CreatePreheatingAssetRequest::toJson() const
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
bool CreatePreheatingAssetRequest::fromJson(const web::json::value& val)
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
            CreatePreheatingAssetReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePreheatingAssetRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreatePreheatingAssetRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreatePreheatingAssetRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreatePreheatingAssetRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

CreatePreheatingAssetReq CreatePreheatingAssetRequest::getBody() const
{
    return body_;
}

void CreatePreheatingAssetRequest::setBody(const CreatePreheatingAssetReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePreheatingAssetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePreheatingAssetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


