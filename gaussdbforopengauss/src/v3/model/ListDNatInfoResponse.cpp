

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDNatInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDNatInfoResponse::ListDNatInfoResponse()
{
    dnatListIsSet_ = false;
}

ListDNatInfoResponse::~ListDNatInfoResponse() = default;

void ListDNatInfoResponse::validate()
{
}

web::json::value ListDNatInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dnatListIsSet_) {
        val[utility::conversions::to_string_t("dnat_list")] = ModelBase::toJson(dnatList_);
    }

    return val;
}
bool ListDNatInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dnat_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dnat_list"));
        if(!fieldValue.is_null())
        {
            std::vector<DNatInfoResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDnatList(refVal);
        }
    }
    return ok;
}


std::vector<DNatInfoResult>& ListDNatInfoResponse::getDnatList()
{
    return dnatList_;
}

void ListDNatInfoResponse::setDnatList(const std::vector<DNatInfoResult>& value)
{
    dnatList_ = value;
    dnatListIsSet_ = true;
}

bool ListDNatInfoResponse::dnatListIsSet() const
{
    return dnatListIsSet_;
}

void ListDNatInfoResponse::unsetdnatList()
{
    dnatListIsSet_ = false;
}

}
}
}
}
}


