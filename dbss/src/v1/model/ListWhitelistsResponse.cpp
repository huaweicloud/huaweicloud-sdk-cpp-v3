

#include "huaweicloud/dbss/v1/model/ListWhitelistsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListWhitelistsResponse::ListWhitelistsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    whitelistsIsSet_ = false;
}

ListWhitelistsResponse::~ListWhitelistsResponse() = default;

void ListWhitelistsResponse::validate()
{
}

web::json::value ListWhitelistsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(whitelistsIsSet_) {
        val[utility::conversions::to_string_t("whitelists")] = ModelBase::toJson(whitelists_);
    }

    return val;
}
bool ListWhitelistsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("whitelists"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("whitelists"));
        if(!fieldValue.is_null())
        {
            std::vector<WhitelistBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWhitelists(refVal);
        }
    }
    return ok;
}


int32_t ListWhitelistsResponse::getTotal() const
{
    return total_;
}

void ListWhitelistsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListWhitelistsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListWhitelistsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<WhitelistBean>& ListWhitelistsResponse::getWhitelists()
{
    return whitelists_;
}

void ListWhitelistsResponse::setWhitelists(const std::vector<WhitelistBean>& value)
{
    whitelists_ = value;
    whitelistsIsSet_ = true;
}

bool ListWhitelistsResponse::whitelistsIsSet() const
{
    return whitelistsIsSet_;
}

void ListWhitelistsResponse::unsetwhitelists()
{
    whitelistsIsSet_ = false;
}

}
}
}
}
}


