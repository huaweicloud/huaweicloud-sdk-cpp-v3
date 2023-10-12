

#include "huaweicloud/dds/v3/model/ListAuditlogLinksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListAuditlogLinksResponse::ListAuditlogLinksResponse()
{
    linksIsSet_ = false;
}

ListAuditlogLinksResponse::~ListAuditlogLinksResponse() = default;

void ListAuditlogLinksResponse::validate()
{
}

web::json::value ListAuditlogLinksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }

    return val;
}
bool ListAuditlogLinksResponse::fromJson(const web::json::value& val)
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


std::vector<std::string>& ListAuditlogLinksResponse::getLinks()
{
    return links_;
}

void ListAuditlogLinksResponse::setLinks(const std::vector<std::string>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool ListAuditlogLinksResponse::linksIsSet() const
{
    return linksIsSet_;
}

void ListAuditlogLinksResponse::unsetlinks()
{
    linksIsSet_ = false;
}

}
}
}
}
}


