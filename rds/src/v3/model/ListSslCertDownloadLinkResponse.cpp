

#include "huaweicloud/rds/v3/model/ListSslCertDownloadLinkResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSslCertDownloadLinkResponse::ListSslCertDownloadLinkResponse()
{
    certInfoListIsSet_ = false;
}

ListSslCertDownloadLinkResponse::~ListSslCertDownloadLinkResponse() = default;

void ListSslCertDownloadLinkResponse::validate()
{
}

web::json::value ListSslCertDownloadLinkResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(certInfoListIsSet_) {
        val[utility::conversions::to_string_t("cert_info_list")] = ModelBase::toJson(certInfoList_);
    }

    return val;
}
bool ListSslCertDownloadLinkResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cert_info_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cert_info_list"));
        if(!fieldValue.is_null())
        {
            std::vector<DownloadInfoRsp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertInfoList(refVal);
        }
    }
    return ok;
}


std::vector<DownloadInfoRsp>& ListSslCertDownloadLinkResponse::getCertInfoList()
{
    return certInfoList_;
}

void ListSslCertDownloadLinkResponse::setCertInfoList(const std::vector<DownloadInfoRsp>& value)
{
    certInfoList_ = value;
    certInfoListIsSet_ = true;
}

bool ListSslCertDownloadLinkResponse::certInfoListIsSet() const
{
    return certInfoListIsSet_;
}

void ListSslCertDownloadLinkResponse::unsetcertInfoList()
{
    certInfoListIsSet_ = false;
}

}
}
}
}
}


