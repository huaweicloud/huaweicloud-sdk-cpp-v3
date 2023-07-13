

#include "huaweicloud/cdn/v2/model/ShowTopDomainNamesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowTopDomainNamesResponse::ShowTopDomainNamesResponse()
{
    topDomainNamesIsSet_ = false;
}

ShowTopDomainNamesResponse::~ShowTopDomainNamesResponse() = default;

void ShowTopDomainNamesResponse::validate()
{
}

web::json::value ShowTopDomainNamesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topDomainNamesIsSet_) {
        val[utility::conversions::to_string_t("top_domain_names")] = ModelBase::toJson(topDomainNames_);
    }

    return val;
}

bool ShowTopDomainNamesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("top_domain_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_domain_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::map<std::string, Object>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopDomainNames(refVal);
        }
    }
    return ok;
}

std::vector<std::map<std::string, Object>>& ShowTopDomainNamesResponse::getTopDomainNames()
{
    return topDomainNames_;
}

void ShowTopDomainNamesResponse::setTopDomainNames(const std::vector<std::map<std::string, Object>>& value)
{
    topDomainNames_ = value;
    topDomainNamesIsSet_ = true;
}

bool ShowTopDomainNamesResponse::topDomainNamesIsSet() const
{
    return topDomainNamesIsSet_;
}

void ShowTopDomainNamesResponse::unsettopDomainNames()
{
    topDomainNamesIsSet_ = false;
}

}
}
}
}
}


