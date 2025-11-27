

#include "huaweicloud/cdn/v2/model/ListDomainConfigsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListDomainConfigsResponse::ListDomainConfigsResponse()
{
    cnameStatusIsSet_ = false;
}

ListDomainConfigsResponse::~ListDomainConfigsResponse() = default;

void ListDomainConfigsResponse::validate()
{
}

web::json::value ListDomainConfigsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cnameStatusIsSet_) {
        val[utility::conversions::to_string_t("cname_status")] = ModelBase::toJson(cnameStatus_);
    }

    return val;
}
bool ListDomainConfigsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cname_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cname_status"));
        if(!fieldValue.is_null())
        {
            std::vector<CnameStatus> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCnameStatus(refVal);
        }
    }
    return ok;
}


std::vector<CnameStatus>& ListDomainConfigsResponse::getCnameStatus()
{
    return cnameStatus_;
}

void ListDomainConfigsResponse::setCnameStatus(const std::vector<CnameStatus>& value)
{
    cnameStatus_ = value;
    cnameStatusIsSet_ = true;
}

bool ListDomainConfigsResponse::cnameStatusIsSet() const
{
    return cnameStatusIsSet_;
}

void ListDomainConfigsResponse::unsetcnameStatus()
{
    cnameStatusIsSet_ = false;
}

}
}
}
}
}


