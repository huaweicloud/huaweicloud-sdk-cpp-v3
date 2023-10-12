

#include "huaweicloud/vod/v1/model/CreateTemplateGroupCollectionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateTemplateGroupCollectionRequest::CreateTemplateGroupCollectionRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

CreateTemplateGroupCollectionRequest::~CreateTemplateGroupCollectionRequest() = default;

void CreateTemplateGroupCollectionRequest::validate()
{
}

web::json::value CreateTemplateGroupCollectionRequest::toJson() const
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
bool CreateTemplateGroupCollectionRequest::fromJson(const web::json::value& val)
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
            TransTemplateGroupCollection refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateTemplateGroupCollectionRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateTemplateGroupCollectionRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateTemplateGroupCollectionRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateTemplateGroupCollectionRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

TransTemplateGroupCollection CreateTemplateGroupCollectionRequest::getBody() const
{
    return body_;
}

void CreateTemplateGroupCollectionRequest::setBody(const TransTemplateGroupCollection& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTemplateGroupCollectionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTemplateGroupCollectionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


