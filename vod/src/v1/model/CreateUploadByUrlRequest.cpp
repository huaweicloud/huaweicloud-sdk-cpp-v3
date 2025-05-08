

#include "huaweicloud/vod/v1/model/CreateUploadByUrlRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateUploadByUrlRequest::CreateUploadByUrlRequest()
{
    bodyIsSet_ = false;
}

CreateUploadByUrlRequest::~CreateUploadByUrlRequest() = default;

void CreateUploadByUrlRequest::validate()
{
}

web::json::value CreateUploadByUrlRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateUploadByUrlRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UploadByUrlReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


UploadByUrlReq CreateUploadByUrlRequest::getBody() const
{
    return body_;
}

void CreateUploadByUrlRequest::setBody(const UploadByUrlReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateUploadByUrlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateUploadByUrlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


