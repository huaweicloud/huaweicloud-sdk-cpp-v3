

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowSslCertDownloadLinkResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowSslCertDownloadLinkResponse::ShowSslCertDownloadLinkResponse()
{
    downloadLink_ = "";
    downloadLinkIsSet_ = false;
}

ShowSslCertDownloadLinkResponse::~ShowSslCertDownloadLinkResponse() = default;

void ShowSslCertDownloadLinkResponse::validate()
{
}

web::json::value ShowSslCertDownloadLinkResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(downloadLinkIsSet_) {
        val[utility::conversions::to_string_t("download_link")] = ModelBase::toJson(downloadLink_);
    }

    return val;
}

bool ShowSslCertDownloadLinkResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("download_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("download_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownloadLink(refVal);
        }
    }
    return ok;
}

std::string ShowSslCertDownloadLinkResponse::getDownloadLink() const
{
    return downloadLink_;
}

void ShowSslCertDownloadLinkResponse::setDownloadLink(const std::string& value)
{
    downloadLink_ = value;
    downloadLinkIsSet_ = true;
}

bool ShowSslCertDownloadLinkResponse::downloadLinkIsSet() const
{
    return downloadLinkIsSet_;
}

void ShowSslCertDownloadLinkResponse::unsetdownloadLink()
{
    downloadLinkIsSet_ = false;
}

}
}
}
}
}


