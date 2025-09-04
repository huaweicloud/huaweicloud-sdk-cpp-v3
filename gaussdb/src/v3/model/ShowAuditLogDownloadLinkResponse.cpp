

#include "huaweicloud/gaussdb/v3/model/ShowAuditLogDownloadLinkResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowAuditLogDownloadLinkResponse::ShowAuditLogDownloadLinkResponse()
{
    linksIsSet_ = false;
}

ShowAuditLogDownloadLinkResponse::~ShowAuditLogDownloadLinkResponse() = default;

void ShowAuditLogDownloadLinkResponse::validate()
{
}

web::json::value ShowAuditLogDownloadLinkResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }

    return val;
}
bool ShowAuditLogDownloadLinkResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("links"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinks(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ShowAuditLogDownloadLinkResponse::getLinks()
{
    return links_;
}

void ShowAuditLogDownloadLinkResponse::setLinks(const std::vector<std::string>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool ShowAuditLogDownloadLinkResponse::linksIsSet() const
{
    return linksIsSet_;
}

void ShowAuditLogDownloadLinkResponse::unsetlinks()
{
    linksIsSet_ = false;
}

}
}
}
}
}


