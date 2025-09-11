

#include "huaweicloud/dbss/v1/model/ListAuditInstancesNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditInstancesNewResponse::ListAuditInstancesNewResponse()
{
    serversIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListAuditInstancesNewResponse::~ListAuditInstancesNewResponse() = default;

void ListAuditInstancesNewResponse::validate()
{
}

web::json::value ListAuditInstancesNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serversIsSet_) {
        val[utility::conversions::to_string_t("servers")] = ModelBase::toJson(servers_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListAuditInstancesNewResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("servers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("servers"));
        if(!fieldValue.is_null())
        {
            std::vector<AuditInstanceListBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServers(refVal);
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


std::vector<AuditInstanceListBean>& ListAuditInstancesNewResponse::getServers()
{
    return servers_;
}

void ListAuditInstancesNewResponse::setServers(const std::vector<AuditInstanceListBean>& value)
{
    servers_ = value;
    serversIsSet_ = true;
}

bool ListAuditInstancesNewResponse::serversIsSet() const
{
    return serversIsSet_;
}

void ListAuditInstancesNewResponse::unsetservers()
{
    serversIsSet_ = false;
}

int32_t ListAuditInstancesNewResponse::getTotal() const
{
    return total_;
}

void ListAuditInstancesNewResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAuditInstancesNewResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAuditInstancesNewResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


