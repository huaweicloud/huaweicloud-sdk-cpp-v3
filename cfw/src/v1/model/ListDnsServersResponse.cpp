

#include "huaweicloud/cfw/v1/model/ListDnsServersResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListDnsServersResponse::ListDnsServersResponse()
{
    dataIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListDnsServersResponse::~ListDnsServersResponse() = default;

void ListDnsServersResponse::validate()
{
}

web::json::value ListDnsServersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}

bool ListDnsServersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<DnsServersResponseDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}

std::vector<DnsServersResponseDTO>& ListDnsServersResponse::getData()
{
    return data_;
}

void ListDnsServersResponse::setData(const std::vector<DnsServersResponseDTO>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListDnsServersResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListDnsServersResponse::unsetdata()
{
    dataIsSet_ = false;
}

int32_t ListDnsServersResponse::getTotal() const
{
    return total_;
}

void ListDnsServersResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListDnsServersResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListDnsServersResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


