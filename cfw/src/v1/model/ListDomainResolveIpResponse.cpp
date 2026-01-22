

#include "huaweicloud/cfw/v1/model/ListDomainResolveIpResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListDomainResolveIpResponse::ListDomainResolveIpResponse()
{
    dataIsSet_ = false;
}

ListDomainResolveIpResponse::~ListDomainResolveIpResponse() = default;

void ListDomainResolveIpResponse::validate()
{
}

web::json::value ListDomainResolveIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListDomainResolveIpResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ParseIpListResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ParseIpListResponse ListDomainResolveIpResponse::getData() const
{
    return data_;
}

void ListDomainResolveIpResponse::setData(const ParseIpListResponse& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListDomainResolveIpResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListDomainResolveIpResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


