

#include "huaweicloud/modelarts/v1/model/UnitConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UnitConfig::UnitConfig()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    role_ = "";
    roleIsSet_ = false;
    customSpecIsSet_ = false;
    flavor_ = "";
    flavorIsSet_ = false;
    flavorDisplayName_ = "";
    flavorDisplayNameIsSet_ = false;
    imageIsSet_ = false;
    modelsIsSet_ = false;
    codesIsSet_ = false;
    filesIsSet_ = false;
    dumpsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    cmd_ = "";
    cmdIsSet_ = false;
    terminationGraceIsSet_ = false;
    envsIsSet_ = false;
    readinessHealthIsSet_ = false;
    startupHealthIsSet_ = false;
    livenessHealthIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    recovery_ = "";
    recoveryIsSet_ = false;
    npuResetEnable_ = false;
    npuResetEnableIsSet_ = false;
    groupCount_ = 0;
    groupCountIsSet_ = false;
    affinityIsSet_ = false;
    securityConfigIsSet_ = false;
    poolResourceFlavor_ = "";
    poolResourceFlavorIsSet_ = false;
}

UnitConfig::~UnitConfig() = default;

void UnitConfig::validate()
{
}

web::json::value UnitConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }
    if(customSpecIsSet_) {
        val[utility::conversions::to_string_t("custom_spec")] = ModelBase::toJson(customSpec_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(flavorDisplayNameIsSet_) {
        val[utility::conversions::to_string_t("flavor_display_name")] = ModelBase::toJson(flavorDisplayName_);
    }
    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(modelsIsSet_) {
        val[utility::conversions::to_string_t("models")] = ModelBase::toJson(models_);
    }
    if(codesIsSet_) {
        val[utility::conversions::to_string_t("codes")] = ModelBase::toJson(codes_);
    }
    if(filesIsSet_) {
        val[utility::conversions::to_string_t("files")] = ModelBase::toJson(files_);
    }
    if(dumpsIsSet_) {
        val[utility::conversions::to_string_t("dumps")] = ModelBase::toJson(dumps_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(cmdIsSet_) {
        val[utility::conversions::to_string_t("cmd")] = ModelBase::toJson(cmd_);
    }
    if(terminationGraceIsSet_) {
        val[utility::conversions::to_string_t("termination_grace")] = ModelBase::toJson(terminationGrace_);
    }
    if(envsIsSet_) {
        val[utility::conversions::to_string_t("envs")] = ModelBase::toJson(envs_);
    }
    if(readinessHealthIsSet_) {
        val[utility::conversions::to_string_t("readiness_health")] = ModelBase::toJson(readinessHealth_);
    }
    if(startupHealthIsSet_) {
        val[utility::conversions::to_string_t("startup_health")] = ModelBase::toJson(startupHealth_);
    }
    if(livenessHealthIsSet_) {
        val[utility::conversions::to_string_t("liveness_health")] = ModelBase::toJson(livenessHealth_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(recoveryIsSet_) {
        val[utility::conversions::to_string_t("recovery")] = ModelBase::toJson(recovery_);
    }
    if(npuResetEnableIsSet_) {
        val[utility::conversions::to_string_t("npu_reset_enable")] = ModelBase::toJson(npuResetEnable_);
    }
    if(groupCountIsSet_) {
        val[utility::conversions::to_string_t("group_count")] = ModelBase::toJson(groupCount_);
    }
    if(affinityIsSet_) {
        val[utility::conversions::to_string_t("affinity")] = ModelBase::toJson(affinity_);
    }
    if(securityConfigIsSet_) {
        val[utility::conversions::to_string_t("security_config")] = ModelBase::toJson(securityConfig_);
    }
    if(poolResourceFlavorIsSet_) {
        val[utility::conversions::to_string_t("pool_resource_flavor")] = ModelBase::toJson(poolResourceFlavor_);
    }

    return val;
}
bool UnitConfig::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_spec"));
        if(!fieldValue.is_null())
        {
            CustomResourceSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomSpec(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("flavor_display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            ImageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("models"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("models"));
        if(!fieldValue.is_null())
        {
            std::vector<ModelResource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("codes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codes"));
        if(!fieldValue.is_null())
        {
            std::vector<Code> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("files"));
        if(!fieldValue.is_null())
        {
            std::vector<FileInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFiles(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dumps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dumps"));
        if(!fieldValue.is_null())
        {
            std::vector<Dump> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDumps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cmd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cmd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCmd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("termination_grace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("termination_grace"));
        if(!fieldValue.is_null())
        {
            TerminationGrace refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTerminationGrace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("envs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("envs"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("readiness_health"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readiness_health"));
        if(!fieldValue.is_null())
        {
            Health refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadinessHealth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startup_health"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startup_health"));
        if(!fieldValue.is_null())
        {
            Health refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartupHealth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("liveness_health"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("liveness_health"));
        if(!fieldValue.is_null())
        {
            Health refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLivenessHealth(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("recovery"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recovery"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecovery(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("npu_reset_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("npu_reset_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNpuResetEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("affinity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affinity"));
        if(!fieldValue.is_null())
        {
            Affinity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffinity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_config"));
        if(!fieldValue.is_null())
        {
            ServiceSecurityConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pool_resource_flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_resource_flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolResourceFlavor(refVal);
        }
    }
    return ok;
}


std::string UnitConfig::getId() const
{
    return id_;
}

void UnitConfig::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UnitConfig::idIsSet() const
{
    return idIsSet_;
}

void UnitConfig::unsetid()
{
    idIsSet_ = false;
}

std::string UnitConfig::getName() const
{
    return name_;
}

void UnitConfig::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UnitConfig::nameIsSet() const
{
    return nameIsSet_;
}

void UnitConfig::unsetname()
{
    nameIsSet_ = false;
}

std::string UnitConfig::getRole() const
{
    return role_;
}

void UnitConfig::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool UnitConfig::roleIsSet() const
{
    return roleIsSet_;
}

void UnitConfig::unsetrole()
{
    roleIsSet_ = false;
}

CustomResourceSpec UnitConfig::getCustomSpec() const
{
    return customSpec_;
}

void UnitConfig::setCustomSpec(const CustomResourceSpec& value)
{
    customSpec_ = value;
    customSpecIsSet_ = true;
}

bool UnitConfig::customSpecIsSet() const
{
    return customSpecIsSet_;
}

void UnitConfig::unsetcustomSpec()
{
    customSpecIsSet_ = false;
}

std::string UnitConfig::getFlavor() const
{
    return flavor_;
}

void UnitConfig::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool UnitConfig::flavorIsSet() const
{
    return flavorIsSet_;
}

void UnitConfig::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string UnitConfig::getFlavorDisplayName() const
{
    return flavorDisplayName_;
}

void UnitConfig::setFlavorDisplayName(const std::string& value)
{
    flavorDisplayName_ = value;
    flavorDisplayNameIsSet_ = true;
}

bool UnitConfig::flavorDisplayNameIsSet() const
{
    return flavorDisplayNameIsSet_;
}

void UnitConfig::unsetflavorDisplayName()
{
    flavorDisplayNameIsSet_ = false;
}

ImageInfo UnitConfig::getImage() const
{
    return image_;
}

void UnitConfig::setImage(const ImageInfo& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool UnitConfig::imageIsSet() const
{
    return imageIsSet_;
}

void UnitConfig::unsetimage()
{
    imageIsSet_ = false;
}

std::vector<ModelResource>& UnitConfig::getModels()
{
    return models_;
}

void UnitConfig::setModels(const std::vector<ModelResource>& value)
{
    models_ = value;
    modelsIsSet_ = true;
}

bool UnitConfig::modelsIsSet() const
{
    return modelsIsSet_;
}

void UnitConfig::unsetmodels()
{
    modelsIsSet_ = false;
}

std::vector<Code>& UnitConfig::getCodes()
{
    return codes_;
}

void UnitConfig::setCodes(const std::vector<Code>& value)
{
    codes_ = value;
    codesIsSet_ = true;
}

bool UnitConfig::codesIsSet() const
{
    return codesIsSet_;
}

void UnitConfig::unsetcodes()
{
    codesIsSet_ = false;
}

std::vector<FileInfo>& UnitConfig::getFiles()
{
    return files_;
}

void UnitConfig::setFiles(const std::vector<FileInfo>& value)
{
    files_ = value;
    filesIsSet_ = true;
}

bool UnitConfig::filesIsSet() const
{
    return filesIsSet_;
}

void UnitConfig::unsetfiles()
{
    filesIsSet_ = false;
}

std::vector<Dump>& UnitConfig::getDumps()
{
    return dumps_;
}

void UnitConfig::setDumps(const std::vector<Dump>& value)
{
    dumps_ = value;
    dumpsIsSet_ = true;
}

bool UnitConfig::dumpsIsSet() const
{
    return dumpsIsSet_;
}

void UnitConfig::unsetdumps()
{
    dumpsIsSet_ = false;
}

int32_t UnitConfig::getCount() const
{
    return count_;
}

void UnitConfig::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool UnitConfig::countIsSet() const
{
    return countIsSet_;
}

void UnitConfig::unsetcount()
{
    countIsSet_ = false;
}

std::string UnitConfig::getCmd() const
{
    return cmd_;
}

void UnitConfig::setCmd(const std::string& value)
{
    cmd_ = value;
    cmdIsSet_ = true;
}

bool UnitConfig::cmdIsSet() const
{
    return cmdIsSet_;
}

void UnitConfig::unsetcmd()
{
    cmdIsSet_ = false;
}

TerminationGrace UnitConfig::getTerminationGrace() const
{
    return terminationGrace_;
}

void UnitConfig::setTerminationGrace(const TerminationGrace& value)
{
    terminationGrace_ = value;
    terminationGraceIsSet_ = true;
}

bool UnitConfig::terminationGraceIsSet() const
{
    return terminationGraceIsSet_;
}

void UnitConfig::unsetterminationGrace()
{
    terminationGraceIsSet_ = false;
}

std::map<std::string, std::string>& UnitConfig::getEnvs()
{
    return envs_;
}

void UnitConfig::setEnvs(const std::map<std::string, std::string>& value)
{
    envs_ = value;
    envsIsSet_ = true;
}

bool UnitConfig::envsIsSet() const
{
    return envsIsSet_;
}

void UnitConfig::unsetenvs()
{
    envsIsSet_ = false;
}

Health UnitConfig::getReadinessHealth() const
{
    return readinessHealth_;
}

void UnitConfig::setReadinessHealth(const Health& value)
{
    readinessHealth_ = value;
    readinessHealthIsSet_ = true;
}

bool UnitConfig::readinessHealthIsSet() const
{
    return readinessHealthIsSet_;
}

void UnitConfig::unsetreadinessHealth()
{
    readinessHealthIsSet_ = false;
}

Health UnitConfig::getStartupHealth() const
{
    return startupHealth_;
}

void UnitConfig::setStartupHealth(const Health& value)
{
    startupHealth_ = value;
    startupHealthIsSet_ = true;
}

bool UnitConfig::startupHealthIsSet() const
{
    return startupHealthIsSet_;
}

void UnitConfig::unsetstartupHealth()
{
    startupHealthIsSet_ = false;
}

Health UnitConfig::getLivenessHealth() const
{
    return livenessHealth_;
}

void UnitConfig::setLivenessHealth(const Health& value)
{
    livenessHealth_ = value;
    livenessHealthIsSet_ = true;
}

bool UnitConfig::livenessHealthIsSet() const
{
    return livenessHealthIsSet_;
}

void UnitConfig::unsetlivenessHealth()
{
    livenessHealthIsSet_ = false;
}

int32_t UnitConfig::getPort() const
{
    return port_;
}

void UnitConfig::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool UnitConfig::portIsSet() const
{
    return portIsSet_;
}

void UnitConfig::unsetport()
{
    portIsSet_ = false;
}

std::string UnitConfig::getRecovery() const
{
    return recovery_;
}

void UnitConfig::setRecovery(const std::string& value)
{
    recovery_ = value;
    recoveryIsSet_ = true;
}

bool UnitConfig::recoveryIsSet() const
{
    return recoveryIsSet_;
}

void UnitConfig::unsetrecovery()
{
    recoveryIsSet_ = false;
}

bool UnitConfig::isNpuResetEnable() const
{
    return npuResetEnable_;
}

void UnitConfig::setNpuResetEnable(bool value)
{
    npuResetEnable_ = value;
    npuResetEnableIsSet_ = true;
}

bool UnitConfig::npuResetEnableIsSet() const
{
    return npuResetEnableIsSet_;
}

void UnitConfig::unsetnpuResetEnable()
{
    npuResetEnableIsSet_ = false;
}

int32_t UnitConfig::getGroupCount() const
{
    return groupCount_;
}

void UnitConfig::setGroupCount(int32_t value)
{
    groupCount_ = value;
    groupCountIsSet_ = true;
}

bool UnitConfig::groupCountIsSet() const
{
    return groupCountIsSet_;
}

void UnitConfig::unsetgroupCount()
{
    groupCountIsSet_ = false;
}

Affinity UnitConfig::getAffinity() const
{
    return affinity_;
}

void UnitConfig::setAffinity(const Affinity& value)
{
    affinity_ = value;
    affinityIsSet_ = true;
}

bool UnitConfig::affinityIsSet() const
{
    return affinityIsSet_;
}

void UnitConfig::unsetaffinity()
{
    affinityIsSet_ = false;
}

ServiceSecurityConfig UnitConfig::getSecurityConfig() const
{
    return securityConfig_;
}

void UnitConfig::setSecurityConfig(const ServiceSecurityConfig& value)
{
    securityConfig_ = value;
    securityConfigIsSet_ = true;
}

bool UnitConfig::securityConfigIsSet() const
{
    return securityConfigIsSet_;
}

void UnitConfig::unsetsecurityConfig()
{
    securityConfigIsSet_ = false;
}

std::string UnitConfig::getPoolResourceFlavor() const
{
    return poolResourceFlavor_;
}

void UnitConfig::setPoolResourceFlavor(const std::string& value)
{
    poolResourceFlavor_ = value;
    poolResourceFlavorIsSet_ = true;
}

bool UnitConfig::poolResourceFlavorIsSet() const
{
    return poolResourceFlavorIsSet_;
}

void UnitConfig::unsetpoolResourceFlavor()
{
    poolResourceFlavorIsSet_ = false;
}

}
}
}
}
}


