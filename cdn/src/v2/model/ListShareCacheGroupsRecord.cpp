

#include "huaweicloud/cdn/v2/model/ListShareCacheGroupsRecord.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListShareCacheGroupsRecord::ListShareCacheGroupsRecord()
{
    domainName_ = "";
    domainNameIsSet_ = false;
}

ListShareCacheGroupsRecord::~ListShareCacheGroupsRecord() = default;

void ListShareCacheGroupsRecord::validate()
{
}

web::json::value ListShareCacheGroupsRecord::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }

    return val;
}
bool ListShareCacheGroupsRecord::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    return ok;
}


std::string ListShareCacheGroupsRecord::getDomainName() const
{
    return domainName_;
}

void ListShareCacheGroupsRecord::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ListShareCacheGroupsRecord::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ListShareCacheGroupsRecord::unsetdomainName()
{
    domainNameIsSet_ = false;
}

}
}
}
}
}


