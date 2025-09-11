

#include "huaweicloud/dbss/v1/model/ServerList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ServerList::ServerList()
{
    serverIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ServerList::~ServerList() = default;

void ServerList::validate()
{
}

web::json::value ServerList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIsSet_) {
        val[utility::conversions::to_string_t("server")] = ModelBase::toJson(server_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ServerList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server"));
        if(!fieldValue.is_null())
        {
            std::vector<ResponseServer> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServer(refVal);
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


std::vector<ResponseServer>& ServerList::getServer()
{
    return server_;
}

void ServerList::setServer(const std::vector<ResponseServer>& value)
{
    server_ = value;
    serverIsSet_ = true;
}

bool ServerList::serverIsSet() const
{
    return serverIsSet_;
}

void ServerList::unsetserver()
{
    serverIsSet_ = false;
}

int32_t ServerList::getTotal() const
{
    return total_;
}

void ServerList::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ServerList::totalIsSet() const
{
    return totalIsSet_;
}

void ServerList::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


