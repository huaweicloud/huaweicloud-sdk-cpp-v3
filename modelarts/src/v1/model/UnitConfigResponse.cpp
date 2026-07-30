

#include "huaweicloud/modelarts/v1/model/UnitConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UnitConfigResponse::UnitConfigResponse()
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
    imageIsSet_ = false;
    modelsIsSet_ = false;
    filesIsSet_ = false;
    codesIsSet_ = false;
    dumpsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    groupCount_ = 0;
    groupCountIsSet_ = false;
    cmd_ = "";
    cmdIsSet_ = false;
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
    affinityIsSet_ = false;
    flavorDisplayName_ = "";
    flavorDisplayNameIsSet_ = false;
    terminationGraceIsSet_ = false;
    securityConfigIsSet_ = false;
    poolResourceFlavor_ = "";
    poolResourceFlavorIsSet_ = false;
}

UnitConfigResponse::~UnitConfigResponse() = default;

void UnitConfigResponse::validate()
{
}

web::json::value UnitConfigResponse::toJson() const
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
    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(modelsIsSet_) {
        val[utility::conversions::to_string_t("models")] = ModelBase::toJson(models_);
    }
    if(filesIsSet_) {
        val[utility::conversions::to_string_t("files")] = ModelBase::toJson(files_);
    }
    if(codesIsSet_) {
        val[utility::conversions::to_string_t("codes")] = ModelBase::toJson(codes_);
    }
    if(dumpsIsSet_) {
        val[utility::conversions::to_string_t("dumps")] = ModelBase::toJson(dumps_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(groupCountIsSet_) {
        val[utility::conversions::to_string_t("group_count")] = ModelBase::toJson(groupCount_);
    }
    if(cmdIsSet_) {
        val[utility::conversions::to_string_t("cmd")] = ModelBase::toJson(cmd_);
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
    if(affinityIsSet_) {
        val[utility::conversions::to_string_t("affinity")] = ModelBase::toJson(affinity_);
    }
    if(flavorDisplayNameIsSet_) {
        val[utility::conversions::to_string_t("flavor_display_name")] = ModelBase::toJson(flavorDisplayName_);
    }
    if(terminationGraceIsSet_) {
        val[utility::conversions::to_string_t("termination_grace")] = ModelBase::toJson(terminationGrace_);
    }
    if(securityConfigIsSet_) {
        val[utility::conversions::to_string_t("security_config")] = ModelBase::toJson(securityConfig_);
    }
    if(poolResourceFlavorIsSet_) {
        val[utility::conversions::to_string_t("pool_resource_flavor")] = ModelBase::toJson(poolResourceFlavor_);
    }

    return val;
}
bool UnitConfigResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            ImageInfoResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("models"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("models"));
        if(!fieldValue.is_null())
        {
            std::vector<InferModelResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("files"));
        if(!fieldValue.is_null())
        {
            std::vector<FileResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFiles(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("codes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codes"));
        if(!fieldValue.is_null())
        {
            std::vector<CodeResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dumps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dumps"));
        if(!fieldValue.is_null())
        {
            std::vector<DumpResponse> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("group_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupCount(refVal);
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
            HealthResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadinessHealth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startup_health"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startup_health"));
        if(!fieldValue.is_null())
        {
            HealthResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartupHealth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("liveness_health"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("liveness_health"));
        if(!fieldValue.is_null())
        {
            HealthResponse refVal;
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
    if(val.has_field(utility::conversions::to_string_t("affinity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affinity"));
        if(!fieldValue.is_null())
        {
            AffinityResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffinity(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("termination_grace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("termination_grace"));
        if(!fieldValue.is_null())
        {
            TerminationGrace refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTerminationGrace(refVal);
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


std::string UnitConfigResponse::getId() const
{
    return id_;
}

void UnitConfigResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UnitConfigResponse::idIsSet() const
{
    return idIsSet_;
}

void UnitConfigResponse::unsetid()
{
    idIsSet_ = false;
}

std::string UnitConfigResponse::getName() const
{
    return name_;
}

void UnitConfigResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UnitConfigResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UnitConfigResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string UnitConfigResponse::getRole() const
{
    return role_;
}

void UnitConfigResponse::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool UnitConfigResponse::roleIsSet() const
{
    return roleIsSet_;
}

void UnitConfigResponse::unsetrole()
{
    roleIsSet_ = false;
}

CustomResourceSpec UnitConfigResponse::getCustomSpec() const
{
    return customSpec_;
}

void UnitConfigResponse::setCustomSpec(const CustomResourceSpec& value)
{
    customSpec_ = value;
    customSpecIsSet_ = true;
}

bool UnitConfigResponse::customSpecIsSet() const
{
    return customSpecIsSet_;
}

void UnitConfigResponse::unsetcustomSpec()
{
    customSpecIsSet_ = false;
}

std::string UnitConfigResponse::getFlavor() const
{
    return flavor_;
}

void UnitConfigResponse::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool UnitConfigResponse::flavorIsSet() const
{
    return flavorIsSet_;
}

void UnitConfigResponse::unsetflavor()
{
    flavorIsSet_ = false;
}

ImageInfoResponse UnitConfigResponse::getImage() const
{
    return image_;
}

void UnitConfigResponse::setImage(const ImageInfoResponse& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool UnitConfigResponse::imageIsSet() const
{
    return imageIsSet_;
}

void UnitConfigResponse::unsetimage()
{
    imageIsSet_ = false;
}

std::vector<InferModelResponse>& UnitConfigResponse::getModels()
{
    return models_;
}

void UnitConfigResponse::setModels(const std::vector<InferModelResponse>& value)
{
    models_ = value;
    modelsIsSet_ = true;
}

bool UnitConfigResponse::modelsIsSet() const
{
    return modelsIsSet_;
}

void UnitConfigResponse::unsetmodels()
{
    modelsIsSet_ = false;
}

std::vector<FileResponse>& UnitConfigResponse::getFiles()
{
    return files_;
}

void UnitConfigResponse::setFiles(const std::vector<FileResponse>& value)
{
    files_ = value;
    filesIsSet_ = true;
}

bool UnitConfigResponse::filesIsSet() const
{
    return filesIsSet_;
}

void UnitConfigResponse::unsetfiles()
{
    filesIsSet_ = false;
}

std::vector<CodeResponse>& UnitConfigResponse::getCodes()
{
    return codes_;
}

void UnitConfigResponse::setCodes(const std::vector<CodeResponse>& value)
{
    codes_ = value;
    codesIsSet_ = true;
}

bool UnitConfigResponse::codesIsSet() const
{
    return codesIsSet_;
}

void UnitConfigResponse::unsetcodes()
{
    codesIsSet_ = false;
}

std::vector<DumpResponse>& UnitConfigResponse::getDumps()
{
    return dumps_;
}

void UnitConfigResponse::setDumps(const std::vector<DumpResponse>& value)
{
    dumps_ = value;
    dumpsIsSet_ = true;
}

bool UnitConfigResponse::dumpsIsSet() const
{
    return dumpsIsSet_;
}

void UnitConfigResponse::unsetdumps()
{
    dumpsIsSet_ = false;
}

int32_t UnitConfigResponse::getCount() const
{
    return count_;
}

void UnitConfigResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool UnitConfigResponse::countIsSet() const
{
    return countIsSet_;
}

void UnitConfigResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t UnitConfigResponse::getGroupCount() const
{
    return groupCount_;
}

void UnitConfigResponse::setGroupCount(int32_t value)
{
    groupCount_ = value;
    groupCountIsSet_ = true;
}

bool UnitConfigResponse::groupCountIsSet() const
{
    return groupCountIsSet_;
}

void UnitConfigResponse::unsetgroupCount()
{
    groupCountIsSet_ = false;
}

std::string UnitConfigResponse::getCmd() const
{
    return cmd_;
}

void UnitConfigResponse::setCmd(const std::string& value)
{
    cmd_ = value;
    cmdIsSet_ = true;
}

bool UnitConfigResponse::cmdIsSet() const
{
    return cmdIsSet_;
}

void UnitConfigResponse::unsetcmd()
{
    cmdIsSet_ = false;
}

std::map<std::string, std::string>& UnitConfigResponse::getEnvs()
{
    return envs_;
}

void UnitConfigResponse::setEnvs(const std::map<std::string, std::string>& value)
{
    envs_ = value;
    envsIsSet_ = true;
}

bool UnitConfigResponse::envsIsSet() const
{
    return envsIsSet_;
}

void UnitConfigResponse::unsetenvs()
{
    envsIsSet_ = false;
}

HealthResponse UnitConfigResponse::getReadinessHealth() const
{
    return readinessHealth_;
}

void UnitConfigResponse::setReadinessHealth(const HealthResponse& value)
{
    readinessHealth_ = value;
    readinessHealthIsSet_ = true;
}

bool UnitConfigResponse::readinessHealthIsSet() const
{
    return readinessHealthIsSet_;
}

void UnitConfigResponse::unsetreadinessHealth()
{
    readinessHealthIsSet_ = false;
}

HealthResponse UnitConfigResponse::getStartupHealth() const
{
    return startupHealth_;
}

void UnitConfigResponse::setStartupHealth(const HealthResponse& value)
{
    startupHealth_ = value;
    startupHealthIsSet_ = true;
}

bool UnitConfigResponse::startupHealthIsSet() const
{
    return startupHealthIsSet_;
}

void UnitConfigResponse::unsetstartupHealth()
{
    startupHealthIsSet_ = false;
}

HealthResponse UnitConfigResponse::getLivenessHealth() const
{
    return livenessHealth_;
}

void UnitConfigResponse::setLivenessHealth(const HealthResponse& value)
{
    livenessHealth_ = value;
    livenessHealthIsSet_ = true;
}

bool UnitConfigResponse::livenessHealthIsSet() const
{
    return livenessHealthIsSet_;
}

void UnitConfigResponse::unsetlivenessHealth()
{
    livenessHealthIsSet_ = false;
}

int32_t UnitConfigResponse::getPort() const
{
    return port_;
}

void UnitConfigResponse::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool UnitConfigResponse::portIsSet() const
{
    return portIsSet_;
}

void UnitConfigResponse::unsetport()
{
    portIsSet_ = false;
}

std::string UnitConfigResponse::getRecovery() const
{
    return recovery_;
}

void UnitConfigResponse::setRecovery(const std::string& value)
{
    recovery_ = value;
    recoveryIsSet_ = true;
}

bool UnitConfigResponse::recoveryIsSet() const
{
    return recoveryIsSet_;
}

void UnitConfigResponse::unsetrecovery()
{
    recoveryIsSet_ = false;
}

bool UnitConfigResponse::isNpuResetEnable() const
{
    return npuResetEnable_;
}

void UnitConfigResponse::setNpuResetEnable(bool value)
{
    npuResetEnable_ = value;
    npuResetEnableIsSet_ = true;
}

bool UnitConfigResponse::npuResetEnableIsSet() const
{
    return npuResetEnableIsSet_;
}

void UnitConfigResponse::unsetnpuResetEnable()
{
    npuResetEnableIsSet_ = false;
}

AffinityResponse UnitConfigResponse::getAffinity() const
{
    return affinity_;
}

void UnitConfigResponse::setAffinity(const AffinityResponse& value)
{
    affinity_ = value;
    affinityIsSet_ = true;
}

bool UnitConfigResponse::affinityIsSet() const
{
    return affinityIsSet_;
}

void UnitConfigResponse::unsetaffinity()
{
    affinityIsSet_ = false;
}

std::string UnitConfigResponse::getFlavorDisplayName() const
{
    return flavorDisplayName_;
}

void UnitConfigResponse::setFlavorDisplayName(const std::string& value)
{
    flavorDisplayName_ = value;
    flavorDisplayNameIsSet_ = true;
}

bool UnitConfigResponse::flavorDisplayNameIsSet() const
{
    return flavorDisplayNameIsSet_;
}

void UnitConfigResponse::unsetflavorDisplayName()
{
    flavorDisplayNameIsSet_ = false;
}

TerminationGrace UnitConfigResponse::getTerminationGrace() const
{
    return terminationGrace_;
}

void UnitConfigResponse::setTerminationGrace(const TerminationGrace& value)
{
    terminationGrace_ = value;
    terminationGraceIsSet_ = true;
}

bool UnitConfigResponse::terminationGraceIsSet() const
{
    return terminationGraceIsSet_;
}

void UnitConfigResponse::unsetterminationGrace()
{
    terminationGraceIsSet_ = false;
}

ServiceSecurityConfig UnitConfigResponse::getSecurityConfig() const
{
    return securityConfig_;
}

void UnitConfigResponse::setSecurityConfig(const ServiceSecurityConfig& value)
{
    securityConfig_ = value;
    securityConfigIsSet_ = true;
}

bool UnitConfigResponse::securityConfigIsSet() const
{
    return securityConfigIsSet_;
}

void UnitConfigResponse::unsetsecurityConfig()
{
    securityConfigIsSet_ = false;
}

std::string UnitConfigResponse::getPoolResourceFlavor() const
{
    return poolResourceFlavor_;
}

void UnitConfigResponse::setPoolResourceFlavor(const std::string& value)
{
    poolResourceFlavor_ = value;
    poolResourceFlavorIsSet_ = true;
}

bool UnitConfigResponse::poolResourceFlavorIsSet() const
{
    return poolResourceFlavorIsSet_;
}

void UnitConfigResponse::unsetpoolResourceFlavor()
{
    poolResourceFlavorIsSet_ = false;
}

}
}
}
}
}


