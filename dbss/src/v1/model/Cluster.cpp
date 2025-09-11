

#include "huaweicloud/dbss/v1/model/Cluster.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




Cluster::Cluster()
{
    activateInfoIsSet_ = false;
    chargeModel_ = "";
    chargeModelIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
    created_ = 0L;
    createdIsSet_ = false;
    deployMode_ = "";
    deployModeIsSet_ = false;
    detailIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    expired_ = 0L;
    expiredIsSet_ = false;
    floatIp_ = "";
    floatIpIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    isActiveStandby_ = false;
    isActiveStandbyIsSet_ = false;
    keepDays_ = "";
    keepDaysIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    newVersion_ = "";
    newVersionIsSet_ = false;
    publicIp_ = "";
    publicIpIsSet_ = false;
    remainDays_ = "";
    remainDaysIsSet_ = false;
}

Cluster::~Cluster() = default;

void Cluster::validate()
{
}

web::json::value Cluster::toJson() const
{
    web::json::value val = web::json::value::object();

    if(activateInfoIsSet_) {
        val[utility::conversions::to_string_t("activate_info")] = ModelBase::toJson(activateInfo_);
    }
    if(chargeModelIsSet_) {
        val[utility::conversions::to_string_t("charge_model")] = ModelBase::toJson(chargeModel_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(deployModeIsSet_) {
        val[utility::conversions::to_string_t("deploy_mode")] = ModelBase::toJson(deployMode_);
    }
    if(detailIsSet_) {
        val[utility::conversions::to_string_t("detail")] = ModelBase::toJson(detail_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(expiredIsSet_) {
        val[utility::conversions::to_string_t("expired")] = ModelBase::toJson(expired_);
    }
    if(floatIpIsSet_) {
        val[utility::conversions::to_string_t("float_ip")] = ModelBase::toJson(floatIp_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(isActiveStandbyIsSet_) {
        val[utility::conversions::to_string_t("is_active_standby")] = ModelBase::toJson(isActiveStandby_);
    }
    if(keepDaysIsSet_) {
        val[utility::conversions::to_string_t("keep_days")] = ModelBase::toJson(keepDays_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(newVersionIsSet_) {
        val[utility::conversions::to_string_t("new_version")] = ModelBase::toJson(newVersion_);
    }
    if(publicIpIsSet_) {
        val[utility::conversions::to_string_t("public_ip")] = ModelBase::toJson(publicIp_);
    }
    if(remainDaysIsSet_) {
        val[utility::conversions::to_string_t("remain_days")] = ModelBase::toJson(remainDays_);
    }

    return val;
}
bool Cluster::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("activate_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("activate_info"));
        if(!fieldValue.is_null())
        {
            InstanceActivateInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActivateInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deploy_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploy_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeployMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail"));
        if(!fieldValue.is_null())
        {
            ServerList refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expired"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expired"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpired(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("float_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("float_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloatIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_active_standby"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_active_standby"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsActiveStandby(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keep_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keep_days"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepDays(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("new_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remain_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remain_days"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemainDays(refVal);
        }
    }
    return ok;
}


InstanceActivateInfo Cluster::getActivateInfo() const
{
    return activateInfo_;
}

void Cluster::setActivateInfo(const InstanceActivateInfo& value)
{
    activateInfo_ = value;
    activateInfoIsSet_ = true;
}

bool Cluster::activateInfoIsSet() const
{
    return activateInfoIsSet_;
}

void Cluster::unsetactivateInfo()
{
    activateInfoIsSet_ = false;
}

std::string Cluster::getChargeModel() const
{
    return chargeModel_;
}

void Cluster::setChargeModel(const std::string& value)
{
    chargeModel_ = value;
    chargeModelIsSet_ = true;
}

bool Cluster::chargeModelIsSet() const
{
    return chargeModelIsSet_;
}

void Cluster::unsetchargeModel()
{
    chargeModelIsSet_ = false;
}

std::string Cluster::getComment() const
{
    return comment_;
}

void Cluster::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool Cluster::commentIsSet() const
{
    return commentIsSet_;
}

void Cluster::unsetcomment()
{
    commentIsSet_ = false;
}

int64_t Cluster::getCreated() const
{
    return created_;
}

void Cluster::setCreated(int64_t value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool Cluster::createdIsSet() const
{
    return createdIsSet_;
}

void Cluster::unsetcreated()
{
    createdIsSet_ = false;
}

std::string Cluster::getDeployMode() const
{
    return deployMode_;
}

void Cluster::setDeployMode(const std::string& value)
{
    deployMode_ = value;
    deployModeIsSet_ = true;
}

bool Cluster::deployModeIsSet() const
{
    return deployModeIsSet_;
}

void Cluster::unsetdeployMode()
{
    deployModeIsSet_ = false;
}

ServerList Cluster::getDetail() const
{
    return detail_;
}

void Cluster::setDetail(const ServerList& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool Cluster::detailIsSet() const
{
    return detailIsSet_;
}

void Cluster::unsetdetail()
{
    detailIsSet_ = false;
}

std::string Cluster::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void Cluster::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool Cluster::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void Cluster::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

int64_t Cluster::getExpired() const
{
    return expired_;
}

void Cluster::setExpired(int64_t value)
{
    expired_ = value;
    expiredIsSet_ = true;
}

bool Cluster::expiredIsSet() const
{
    return expiredIsSet_;
}

void Cluster::unsetexpired()
{
    expiredIsSet_ = false;
}

std::string Cluster::getFloatIp() const
{
    return floatIp_;
}

void Cluster::setFloatIp(const std::string& value)
{
    floatIp_ = value;
    floatIpIsSet_ = true;
}

bool Cluster::floatIpIsSet() const
{
    return floatIpIsSet_;
}

void Cluster::unsetfloatIp()
{
    floatIpIsSet_ = false;
}

std::string Cluster::getInstanceId() const
{
    return instanceId_;
}

void Cluster::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool Cluster::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void Cluster::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

bool Cluster::isIsActiveStandby() const
{
    return isActiveStandby_;
}

void Cluster::setIsActiveStandby(bool value)
{
    isActiveStandby_ = value;
    isActiveStandbyIsSet_ = true;
}

bool Cluster::isActiveStandbyIsSet() const
{
    return isActiveStandbyIsSet_;
}

void Cluster::unsetisActiveStandby()
{
    isActiveStandbyIsSet_ = false;
}

std::string Cluster::getKeepDays() const
{
    return keepDays_;
}

void Cluster::setKeepDays(const std::string& value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool Cluster::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void Cluster::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

std::string Cluster::getName() const
{
    return name_;
}

void Cluster::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Cluster::nameIsSet() const
{
    return nameIsSet_;
}

void Cluster::unsetname()
{
    nameIsSet_ = false;
}

std::string Cluster::getNewVersion() const
{
    return newVersion_;
}

void Cluster::setNewVersion(const std::string& value)
{
    newVersion_ = value;
    newVersionIsSet_ = true;
}

bool Cluster::newVersionIsSet() const
{
    return newVersionIsSet_;
}

void Cluster::unsetnewVersion()
{
    newVersionIsSet_ = false;
}

std::string Cluster::getPublicIp() const
{
    return publicIp_;
}

void Cluster::setPublicIp(const std::string& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool Cluster::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void Cluster::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

std::string Cluster::getRemainDays() const
{
    return remainDays_;
}

void Cluster::setRemainDays(const std::string& value)
{
    remainDays_ = value;
    remainDaysIsSet_ = true;
}

bool Cluster::remainDaysIsSet() const
{
    return remainDaysIsSet_;
}

void Cluster::unsetremainDays()
{
    remainDaysIsSet_ = false;
}

}
}
}
}
}


