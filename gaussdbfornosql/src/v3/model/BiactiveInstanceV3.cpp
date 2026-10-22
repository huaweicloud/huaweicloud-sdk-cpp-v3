

#include "huaweicloud/gaussdbfornosql/v3/model/BiactiveInstanceV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




BiactiveInstanceV3::BiactiveInstanceV3()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    actionsIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    regionCode_ = "";
    regionCodeIsSet_ = false;
    nodeNum_ = 0;
    nodeNumIsSet_ = false;
    vcpus_ = "";
    vcpusIsSet_ = false;
    ram_ = "";
    ramIsSet_ = false;
    diskSize_ = "";
    diskSizeIsSet_ = false;
    usedDiskSize_ = "";
    usedDiskSizeIsSet_ = false;
    cidr_ = "";
    cidrIsSet_ = false;
}

BiactiveInstanceV3::~BiactiveInstanceV3() = default;

void BiactiveInstanceV3::validate()
{
}

web::json::value BiactiveInstanceV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(regionCodeIsSet_) {
        val[utility::conversions::to_string_t("region_code")] = ModelBase::toJson(regionCode_);
    }
    if(nodeNumIsSet_) {
        val[utility::conversions::to_string_t("node_num")] = ModelBase::toJson(nodeNum_);
    }
    if(vcpusIsSet_) {
        val[utility::conversions::to_string_t("vcpus")] = ModelBase::toJson(vcpus_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }
    if(diskSizeIsSet_) {
        val[utility::conversions::to_string_t("disk_size")] = ModelBase::toJson(diskSize_);
    }
    if(usedDiskSizeIsSet_) {
        val[utility::conversions::to_string_t("used_disk_size")] = ModelBase::toJson(usedDiskSize_);
    }
    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }

    return val;
}
bool BiactiveInstanceV3::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("node_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("disk_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_disk_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_disk_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedDiskSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidr(refVal);
        }
    }
    return ok;
}


std::string BiactiveInstanceV3::getId() const
{
    return id_;
}

void BiactiveInstanceV3::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BiactiveInstanceV3::idIsSet() const
{
    return idIsSet_;
}

void BiactiveInstanceV3::unsetid()
{
    idIsSet_ = false;
}

std::string BiactiveInstanceV3::getName() const
{
    return name_;
}

void BiactiveInstanceV3::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BiactiveInstanceV3::nameIsSet() const
{
    return nameIsSet_;
}

void BiactiveInstanceV3::unsetname()
{
    nameIsSet_ = false;
}

std::string BiactiveInstanceV3::getStatus() const
{
    return status_;
}

void BiactiveInstanceV3::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BiactiveInstanceV3::statusIsSet() const
{
    return statusIsSet_;
}

void BiactiveInstanceV3::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& BiactiveInstanceV3::getActions()
{
    return actions_;
}

void BiactiveInstanceV3::setActions(const std::vector<std::string>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool BiactiveInstanceV3::actionsIsSet() const
{
    return actionsIsSet_;
}

void BiactiveInstanceV3::unsetactions()
{
    actionsIsSet_ = false;
}

std::string BiactiveInstanceV3::getProjectId() const
{
    return projectId_;
}

void BiactiveInstanceV3::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BiactiveInstanceV3::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BiactiveInstanceV3::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string BiactiveInstanceV3::getProjectName() const
{
    return projectName_;
}

void BiactiveInstanceV3::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool BiactiveInstanceV3::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void BiactiveInstanceV3::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string BiactiveInstanceV3::getRegionCode() const
{
    return regionCode_;
}

void BiactiveInstanceV3::setRegionCode(const std::string& value)
{
    regionCode_ = value;
    regionCodeIsSet_ = true;
}

bool BiactiveInstanceV3::regionCodeIsSet() const
{
    return regionCodeIsSet_;
}

void BiactiveInstanceV3::unsetregionCode()
{
    regionCodeIsSet_ = false;
}

int32_t BiactiveInstanceV3::getNodeNum() const
{
    return nodeNum_;
}

void BiactiveInstanceV3::setNodeNum(int32_t value)
{
    nodeNum_ = value;
    nodeNumIsSet_ = true;
}

bool BiactiveInstanceV3::nodeNumIsSet() const
{
    return nodeNumIsSet_;
}

void BiactiveInstanceV3::unsetnodeNum()
{
    nodeNumIsSet_ = false;
}

std::string BiactiveInstanceV3::getVcpus() const
{
    return vcpus_;
}

void BiactiveInstanceV3::setVcpus(const std::string& value)
{
    vcpus_ = value;
    vcpusIsSet_ = true;
}

bool BiactiveInstanceV3::vcpusIsSet() const
{
    return vcpusIsSet_;
}

void BiactiveInstanceV3::unsetvcpus()
{
    vcpusIsSet_ = false;
}

std::string BiactiveInstanceV3::getRam() const
{
    return ram_;
}

void BiactiveInstanceV3::setRam(const std::string& value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool BiactiveInstanceV3::ramIsSet() const
{
    return ramIsSet_;
}

void BiactiveInstanceV3::unsetram()
{
    ramIsSet_ = false;
}

std::string BiactiveInstanceV3::getDiskSize() const
{
    return diskSize_;
}

void BiactiveInstanceV3::setDiskSize(const std::string& value)
{
    diskSize_ = value;
    diskSizeIsSet_ = true;
}

bool BiactiveInstanceV3::diskSizeIsSet() const
{
    return diskSizeIsSet_;
}

void BiactiveInstanceV3::unsetdiskSize()
{
    diskSizeIsSet_ = false;
}

std::string BiactiveInstanceV3::getUsedDiskSize() const
{
    return usedDiskSize_;
}

void BiactiveInstanceV3::setUsedDiskSize(const std::string& value)
{
    usedDiskSize_ = value;
    usedDiskSizeIsSet_ = true;
}

bool BiactiveInstanceV3::usedDiskSizeIsSet() const
{
    return usedDiskSizeIsSet_;
}

void BiactiveInstanceV3::unsetusedDiskSize()
{
    usedDiskSizeIsSet_ = false;
}

std::string BiactiveInstanceV3::getCidr() const
{
    return cidr_;
}

void BiactiveInstanceV3::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool BiactiveInstanceV3::cidrIsSet() const
{
    return cidrIsSet_;
}

void BiactiveInstanceV3::unsetcidr()
{
    cidrIsSet_ = false;
}

}
}
}
}
}


