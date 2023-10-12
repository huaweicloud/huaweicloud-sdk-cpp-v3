

#include "huaweicloud/cbr/v1/model/ShowMetadataResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowMetadataResponse::ShowMetadataResponse()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    backups_ = "";
    backupsIsSet_ = false;
    flavor_ = "";
    flavorIsSet_ = false;
    floatingipsIsSet_ = false;
    interface_ = "";
    interfaceIsSet_ = false;
    portsIsSet_ = false;
    server_ = "";
    serverIsSet_ = false;
    volumesIsSet_ = false;
}

ShowMetadataResponse::~ShowMetadataResponse() = default;

void ShowMetadataResponse::validate()
{
}

web::json::value ShowMetadataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(backupsIsSet_) {
        val[utility::conversions::to_string_t("backups")] = ModelBase::toJson(backups_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(floatingipsIsSet_) {
        val[utility::conversions::to_string_t("floatingips")] = ModelBase::toJson(floatingips_);
    }
    if(interfaceIsSet_) {
        val[utility::conversions::to_string_t("interface")] = ModelBase::toJson(interface_);
    }
    if(portsIsSet_) {
        val[utility::conversions::to_string_t("ports")] = ModelBase::toJson(ports_);
    }
    if(serverIsSet_) {
        val[utility::conversions::to_string_t("server")] = ModelBase::toJson(server_);
    }
    if(volumesIsSet_) {
        val[utility::conversions::to_string_t("volumes")] = ModelBase::toJson(volumes_);
    }

    return val;
}
bool ShowMetadataResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backups"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("floatingips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("floatingips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloatingips(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interface"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interface"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterface(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ports"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ports"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPorts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumes(refVal);
        }
    }
    return ok;
}


std::string ShowMetadataResponse::getBackupId() const
{
    return backupId_;
}

void ShowMetadataResponse::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool ShowMetadataResponse::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void ShowMetadataResponse::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string ShowMetadataResponse::getBackups() const
{
    return backups_;
}

void ShowMetadataResponse::setBackups(const std::string& value)
{
    backups_ = value;
    backupsIsSet_ = true;
}

bool ShowMetadataResponse::backupsIsSet() const
{
    return backupsIsSet_;
}

void ShowMetadataResponse::unsetbackups()
{
    backupsIsSet_ = false;
}

std::string ShowMetadataResponse::getFlavor() const
{
    return flavor_;
}

void ShowMetadataResponse::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool ShowMetadataResponse::flavorIsSet() const
{
    return flavorIsSet_;
}

void ShowMetadataResponse::unsetflavor()
{
    flavorIsSet_ = false;
}

std::vector<std::string>& ShowMetadataResponse::getFloatingips()
{
    return floatingips_;
}

void ShowMetadataResponse::setFloatingips(const std::vector<std::string>& value)
{
    floatingips_ = value;
    floatingipsIsSet_ = true;
}

bool ShowMetadataResponse::floatingipsIsSet() const
{
    return floatingipsIsSet_;
}

void ShowMetadataResponse::unsetfloatingips()
{
    floatingipsIsSet_ = false;
}

std::string ShowMetadataResponse::getInterface() const
{
    return interface_;
}

void ShowMetadataResponse::setInterface(const std::string& value)
{
    interface_ = value;
    interfaceIsSet_ = true;
}

bool ShowMetadataResponse::interfaceIsSet() const
{
    return interfaceIsSet_;
}

void ShowMetadataResponse::unsetinterface()
{
    interfaceIsSet_ = false;
}

std::vector<std::string>& ShowMetadataResponse::getPorts()
{
    return ports_;
}

void ShowMetadataResponse::setPorts(const std::vector<std::string>& value)
{
    ports_ = value;
    portsIsSet_ = true;
}

bool ShowMetadataResponse::portsIsSet() const
{
    return portsIsSet_;
}

void ShowMetadataResponse::unsetports()
{
    portsIsSet_ = false;
}

std::string ShowMetadataResponse::getServer() const
{
    return server_;
}

void ShowMetadataResponse::setServer(const std::string& value)
{
    server_ = value;
    serverIsSet_ = true;
}

bool ShowMetadataResponse::serverIsSet() const
{
    return serverIsSet_;
}

void ShowMetadataResponse::unsetserver()
{
    serverIsSet_ = false;
}

std::vector<std::string>& ShowMetadataResponse::getVolumes()
{
    return volumes_;
}

void ShowMetadataResponse::setVolumes(const std::vector<std::string>& value)
{
    volumes_ = value;
    volumesIsSet_ = true;
}

bool ShowMetadataResponse::volumesIsSet() const
{
    return volumesIsSet_;
}

void ShowMetadataResponse::unsetvolumes()
{
    volumesIsSet_ = false;
}

}
}
}
}
}


