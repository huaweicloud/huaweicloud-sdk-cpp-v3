

#include "huaweicloud/smn/v2/model/DownloadHttpSignCertResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DownloadHttpSignCertResponse::DownloadHttpSignCertResponse()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
}

DownloadHttpSignCertResponse::~DownloadHttpSignCertResponse() = default;

void DownloadHttpSignCertResponse::validate()
{
}

web::json::value DownloadHttpSignCertResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("content-type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool DownloadHttpSignCertResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("content-type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content-type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string DownloadHttpSignCertResponse::getContentType() const
{
    return contentType_;
}

void DownloadHttpSignCertResponse::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DownloadHttpSignCertResponse::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DownloadHttpSignCertResponse::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


