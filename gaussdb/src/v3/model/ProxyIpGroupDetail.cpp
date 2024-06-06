

#include "huaweicloud/gaussdb/v3/model/ProxyIpGroupDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ProxyIpGroupDetail::ProxyIpGroupDetail()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    ipListIsSet_ = false;
}

ProxyIpGroupDetail::~ProxyIpGroupDetail() = default;

void ProxyIpGroupDetail::validate()
{
}

web::json::value ProxyIpGroupDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(ipListIsSet_) {
        val[utility::conversions::to_string_t("ip_list")] = ModelBase::toJson(ipList_);
    }

    return val;
}
bool ProxyIpGroupDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_list"));
        if(!fieldValue.is_null())
        {
            std::vector<IpGroupItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpList(refVal);
        }
    }
    return ok;
}


std::string ProxyIpGroupDetail::getId() const
{
    return id_;
}

void ProxyIpGroupDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProxyIpGroupDetail::idIsSet() const
{
    return idIsSet_;
}

void ProxyIpGroupDetail::unsetid()
{
    idIsSet_ = false;
}

std::string ProxyIpGroupDetail::getName() const
{
    return name_;
}

void ProxyIpGroupDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProxyIpGroupDetail::nameIsSet() const
{
    return nameIsSet_;
}

void ProxyIpGroupDetail::unsetname()
{
    nameIsSet_ = false;
}

std::vector<IpGroupItem>& ProxyIpGroupDetail::getIpList()
{
    return ipList_;
}

void ProxyIpGroupDetail::setIpList(const std::vector<IpGroupItem>& value)
{
    ipList_ = value;
    ipListIsSet_ = true;
}

bool ProxyIpGroupDetail::ipListIsSet() const
{
    return ipListIsSet_;
}

void ProxyIpGroupDetail::unsetipList()
{
    ipListIsSet_ = false;
}

}
}
}
}
}


