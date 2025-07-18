

#include "huaweicloud/cdn/v2/model/ShareCacheGroupsRecord.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShareCacheGroupsRecord::ShareCacheGroupsRecord()
{
    domainName_ = "";
    domainNameIsSet_ = false;
}

ShareCacheGroupsRecord::~ShareCacheGroupsRecord() = default;

void ShareCacheGroupsRecord::validate()
{
}

web::json::value ShareCacheGroupsRecord::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }

    return val;
}
bool ShareCacheGroupsRecord::fromJson(const web::json::value& val)
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


std::string ShareCacheGroupsRecord::getDomainName() const
{
    return domainName_;
}

void ShareCacheGroupsRecord::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ShareCacheGroupsRecord::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ShareCacheGroupsRecord::unsetdomainName()
{
    domainNameIsSet_ = false;
}

}
}
}
}
}


