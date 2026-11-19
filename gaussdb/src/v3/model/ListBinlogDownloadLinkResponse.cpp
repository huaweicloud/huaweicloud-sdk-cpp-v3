

#include "huaweicloud/gaussdb/v3/model/ListBinlogDownloadLinkResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListBinlogDownloadLinkResponse::ListBinlogDownloadLinkResponse()
{
    linksIsSet_ = false;
}

ListBinlogDownloadLinkResponse::~ListBinlogDownloadLinkResponse() = default;

void ListBinlogDownloadLinkResponse::validate()
{
}

web::json::value ListBinlogDownloadLinkResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }

    return val;
}
bool ListBinlogDownloadLinkResponse::fromJson(const web::json::value& val)
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


std::vector<std::string>& ListBinlogDownloadLinkResponse::getLinks()
{
    return links_;
}

void ListBinlogDownloadLinkResponse::setLinks(const std::vector<std::string>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool ListBinlogDownloadLinkResponse::linksIsSet() const
{
    return linksIsSet_;
}

void ListBinlogDownloadLinkResponse::unsetlinks()
{
    linksIsSet_ = false;
}

}
}
}
}
}


