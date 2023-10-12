

#include "huaweicloud/rds/v3/model/ListMsdtcHostsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListMsdtcHostsResponse::ListMsdtcHostsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    hostsIsSet_ = false;
}

ListMsdtcHostsResponse::~ListMsdtcHostsResponse() = default;

void ListMsdtcHostsResponse::validate()
{
}

web::json::value ListMsdtcHostsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(hostsIsSet_) {
        val[utility::conversions::to_string_t("hosts")] = ModelBase::toJson(hosts_);
    }

    return val;
}
bool ListMsdtcHostsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hosts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hosts"));
        if(!fieldValue.is_null())
        {
            std::vector<DBSInstanceHostInfoResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHosts(refVal);
        }
    }
    return ok;
}


int32_t ListMsdtcHostsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListMsdtcHostsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListMsdtcHostsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListMsdtcHostsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<DBSInstanceHostInfoResult>& ListMsdtcHostsResponse::getHosts()
{
    return hosts_;
}

void ListMsdtcHostsResponse::setHosts(const std::vector<DBSInstanceHostInfoResult>& value)
{
    hosts_ = value;
    hostsIsSet_ = true;
}

bool ListMsdtcHostsResponse::hostsIsSet() const
{
    return hostsIsSet_;
}

void ListMsdtcHostsResponse::unsethosts()
{
    hostsIsSet_ = false;
}

}
}
}
}
}


