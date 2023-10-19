

#include "huaweicloud/cfw/v1/model/ListDomainSetsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListDomainSetsResponse::ListDomainSetsResponse()
{
    dataIsSet_ = false;
}

ListDomainSetsResponse::~ListDomainSetsResponse() = default;

void ListDomainSetsResponse::validate()
{
}

web::json::value ListDomainSetsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListDomainSetsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            ListDomainsetsResponseData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


ListDomainsetsResponseData ListDomainSetsResponse::getData() const
{
    return data_;
}

void ListDomainSetsResponse::setData(const ListDomainsetsResponseData& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListDomainSetsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListDomainSetsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


