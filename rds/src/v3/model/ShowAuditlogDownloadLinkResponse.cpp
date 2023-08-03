

#include "huaweicloud/rds/v3/model/ShowAuditlogDownloadLinkResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowAuditlogDownloadLinkResponse::ShowAuditlogDownloadLinkResponse()
{
    linksIsSet_ = false;
}

ShowAuditlogDownloadLinkResponse::~ShowAuditlogDownloadLinkResponse() = default;

void ShowAuditlogDownloadLinkResponse::validate()
{
}

web::json::value ShowAuditlogDownloadLinkResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }

    return val;
}

bool ShowAuditlogDownloadLinkResponse::fromJson(const web::json::value& val)
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

std::vector<std::string>& ShowAuditlogDownloadLinkResponse::getLinks()
{
    return links_;
}

void ShowAuditlogDownloadLinkResponse::setLinks(const std::vector<std::string>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool ShowAuditlogDownloadLinkResponse::linksIsSet() const
{
    return linksIsSet_;
}

void ShowAuditlogDownloadLinkResponse::unsetlinks()
{
    linksIsSet_ = false;
}

}
}
}
}
}


