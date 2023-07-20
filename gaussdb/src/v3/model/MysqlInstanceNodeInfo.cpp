

#include "huaweicloud/gaussdb/v3/model/MysqlInstanceNodeInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlInstanceNodeInfo::MysqlInstanceNodeInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    privateReadIpsIsSet_ = false;
    volumeIsSet_ = false;
    azCode_ = "";
    azCodeIsSet_ = false;
    regionCode_ = "";
    regionCodeIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    flavorId_ = "";
    flavorIdIsSet_ = false;
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    maxConnections_ = "";
    maxConnectionsIsSet_ = false;
    vcpus_ = "";
    vcpusIsSet_ = false;
    ram_ = "";
    ramIsSet_ = false;
    needRestart_ = false;
    needRestartIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
}

MysqlInstanceNodeInfo::~MysqlInstanceNodeInfo() = default;

void MysqlInstanceNodeInfo::validate()
{
}

web::json::value MysqlInstanceNodeInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(privateReadIpsIsSet_) {
        val[utility::conversions::to_string_t("private_read_ips")] = ModelBase::toJson(privateReadIps_);
    }
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }
    if(azCodeIsSet_) {
        val[utility::conversions::to_string_t("az_code")] = ModelBase::toJson(azCode_);
    }
    if(regionCodeIsSet_) {
        val[utility::conversions::to_string_t("region_code")] = ModelBase::toJson(regionCode_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }
    if(flavorIdIsSet_) {
        val[utility::conversions::to_string_t("flavor_id")] = ModelBase::toJson(flavorId_);
    }
    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavor_ref")] = ModelBase::toJson(flavorRef_);
    }
    if(maxConnectionsIsSet_) {
        val[utility::conversions::to_string_t("max_connections")] = ModelBase::toJson(maxConnections_);
    }
    if(vcpusIsSet_) {
        val[utility::conversions::to_string_t("vcpus")] = ModelBase::toJson(vcpus_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }
    if(needRestartIsSet_) {
        val[utility::conversions::to_string_t("need_restart")] = ModelBase::toJson(needRestart_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }

    return val;
}

bool MysqlInstanceNodeInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("private_read_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_read_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateReadIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            MysqlInstanceNodeVolumeInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_connections"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_connections"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxConnections(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vcpus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vcpus"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVcpus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ram"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("need_restart"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_restart"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedRestart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    return ok;
}

std::string MysqlInstanceNodeInfo::getId() const
{
    return id_;
}

void MysqlInstanceNodeInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MysqlInstanceNodeInfo::idIsSet() const
{
    return idIsSet_;
}

void MysqlInstanceNodeInfo::unsetid()
{
    idIsSet_ = false;
}

std::string MysqlInstanceNodeInfo::getName() const
{
    return name_;
}

void MysqlInstanceNodeInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MysqlInstanceNodeInfo::nameIsSet() const
{
    return nameIsSet_;
}

void MysqlInstanceNodeInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string MysqlInstanceNodeInfo::getType() const
{
    return type_;
}

void MysqlInstanceNodeInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MysqlInstanceNodeInfo::typeIsSet() const
{
    return typeIsSet_;
}

void MysqlInstanceNodeInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string MysqlInstanceNodeInfo::getStatus() const
{
    return status_;
}

void MysqlInstanceNodeInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool MysqlInstanceNodeInfo::statusIsSet() const
{
    return statusIsSet_;
}

void MysqlInstanceNodeInfo::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t MysqlInstanceNodeInfo::getPort() const
{
    return port_;
}

void MysqlInstanceNodeInfo::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool MysqlInstanceNodeInfo::portIsSet() const
{
    return portIsSet_;
}

void MysqlInstanceNodeInfo::unsetport()
{
    portIsSet_ = false;
}

std::vector<std::string>& MysqlInstanceNodeInfo::getPrivateReadIps()
{
    return privateReadIps_;
}

void MysqlInstanceNodeInfo::setPrivateReadIps(const std::vector<std::string>& value)
{
    privateReadIps_ = value;
    privateReadIpsIsSet_ = true;
}

bool MysqlInstanceNodeInfo::privateReadIpsIsSet() const
{
    return privateReadIpsIsSet_;
}

void MysqlInstanceNodeInfo::unsetprivateReadIps()
{
    privateReadIpsIsSet_ = false;
}

MysqlInstanceNodeVolumeInfo MysqlInstanceNodeInfo::getVolume() const
{
    return volume_;
}

void MysqlInstanceNodeInfo::setVolume(const MysqlInstanceNodeVolumeInfo& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool MysqlInstanceNodeInfo::volumeIsSet() const
{
    return volumeIsSet_;
}

void MysqlInstanceNodeInfo::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string MysqlInstanceNodeInfo::getAzCode() const
{
    return azCode_;
}

void MysqlInstanceNodeInfo::setAzCode(const std::string& value)
{
    azCode_ = value;
    azCodeIsSet_ = true;
}

bool MysqlInstanceNodeInfo::azCodeIsSet() const
{
    return azCodeIsSet_;
}

void MysqlInstanceNodeInfo::unsetazCode()
{
    azCodeIsSet_ = false;
}

std::string MysqlInstanceNodeInfo::getRegionCode() const
{
    return regionCode_;
}

void MysqlInstanceNodeInfo::setRegionCode(const std::string& value)
{
    regionCode_ = value;
    regionCodeIsSet_ = true;
}

bool MysqlInstanceNodeInfo::regionCodeIsSet() const
{
    return regionCodeIsSet_;
}

void MysqlInstanceNodeInfo::unsetregionCode()
{
    regionCodeIsSet_ = false;
}

std::string MysqlInstanceNodeInfo::getCreated() const
{
    return created_;
}

void MysqlInstanceNodeInfo::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool MysqlInstanceNodeInfo::createdIsSet() const
{
    return createdIsSet_;
}

void MysqlInstanceNodeInfo::unsetcreated()
{
    createdIsSet_ = false;
}

std::string MysqlInstanceNodeInfo::getUpdated() const
{
    return updated_;
}

void MysqlInstanceNodeInfo::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool MysqlInstanceNodeInfo::updatedIsSet() const
{
    return updatedIsSet_;
}

void MysqlInstanceNodeInfo::unsetupdated()
{
    updatedIsSet_ = false;
}

std::string MysqlInstanceNodeInfo::getFlavorId() const
{
    return flavorId_;
}

void MysqlInstanceNodeInfo::setFlavorId(const std::string& value)
{
    flavorId_ = value;
    flavorIdIsSet_ = true;
}

bool MysqlInstanceNodeInfo::flavorIdIsSet() const
{
    return flavorIdIsSet_;
}

void MysqlInstanceNodeInfo::unsetflavorId()
{
    flavorIdIsSet_ = false;
}

std::string MysqlInstanceNodeInfo::getFlavorRef() const
{
    return flavorRef_;
}

void MysqlInstanceNodeInfo::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool MysqlInstanceNodeInfo::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void MysqlInstanceNodeInfo::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

std::string MysqlInstanceNodeInfo::getMaxConnections() const
{
    return maxConnections_;
}

void MysqlInstanceNodeInfo::setMaxConnections(const std::string& value)
{
    maxConnections_ = value;
    maxConnectionsIsSet_ = true;
}

bool MysqlInstanceNodeInfo::maxConnectionsIsSet() const
{
    return maxConnectionsIsSet_;
}

void MysqlInstanceNodeInfo::unsetmaxConnections()
{
    maxConnectionsIsSet_ = false;
}

std::string MysqlInstanceNodeInfo::getVcpus() const
{
    return vcpus_;
}

void MysqlInstanceNodeInfo::setVcpus(const std::string& value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool MysqlInstanceNodeInfo::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void MysqlInstanceNodeInfo::unsetvcpus()
{
    vcpusIsSet_ = false;
}

std::string MysqlInstanceNodeInfo::getRam() const
{
    return ram_;
}

void MysqlInstanceNodeInfo::setRam(const std::string& value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool MysqlInstanceNodeInfo::ramIsSet() const
{
    return ramIsSet_;
}

void MysqlInstanceNodeInfo::unsetram()
{
    ramIsSet_ = false;
}

bool MysqlInstanceNodeInfo::isNeedRestart() const
{
    return needRestart_;
}

void MysqlInstanceNodeInfo::setNeedRestart(bool value)
{
    needRestart_ = value;
    needRestartIsSet_ = true;
}

bool MysqlInstanceNodeInfo::needRestartIsSet() const
{
    return needRestartIsSet_;
}

void MysqlInstanceNodeInfo::unsetneedRestart()
{
    needRestartIsSet_ = false;
}

int32_t MysqlInstanceNodeInfo::getPriority() const
{
    return priority_;
}

void MysqlInstanceNodeInfo::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool MysqlInstanceNodeInfo::priorityIsSet() const
{
    return priorityIsSet_;
}

void MysqlInstanceNodeInfo::unsetpriority()
{
    priorityIsSet_ = false;
}

}
}
}
}
}


