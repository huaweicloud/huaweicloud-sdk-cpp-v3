

#include "huaweicloud/vod/v1/model/CreateObjectRetrievalRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateObjectRetrievalRequest::CreateObjectRetrievalRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

CreateObjectRetrievalRequest::~CreateObjectRetrievalRequest() = default;

void CreateObjectRetrievalRequest::validate()
{
}

web::json::value CreateObjectRetrievalRequest::toJson() const
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
bool CreateObjectRetrievalRequest::fromJson(const web::json::value& val)
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
            CreateObjectRetrievalRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateObjectRetrievalRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateObjectRetrievalRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateObjectRetrievalRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateObjectRetrievalRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

CreateObjectRetrievalRequestBody CreateObjectRetrievalRequest::getBody() const
{
    return body_;
}

void CreateObjectRetrievalRequest::setBody(const CreateObjectRetrievalRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateObjectRetrievalRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateObjectRetrievalRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


