

#include "huaweicloud/metastudio/v1/model/CreateDialogUrlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateDialogUrlResponse::CreateDialogUrlResponse()
{
    url_ = "";
    urlIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateDialogUrlResponse::~CreateDialogUrlResponse() = default;

void CreateDialogUrlResponse::validate()
{
}

web::json::value CreateDialogUrlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateDialogUrlResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string CreateDialogUrlResponse::getUrl() const
{
    return url_;
}

void CreateDialogUrlResponse::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool CreateDialogUrlResponse::urlIsSet() const
{
    return urlIsSet_;
}

void CreateDialogUrlResponse::unseturl()
{
    urlIsSet_ = false;
}

std::string CreateDialogUrlResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateDialogUrlResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateDialogUrlResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateDialogUrlResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


