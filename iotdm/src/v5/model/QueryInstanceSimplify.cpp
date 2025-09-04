

#include "huaweicloud/iotdm/v5/model/QueryInstanceSimplify.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




QueryInstanceSimplify::QueryInstanceSimplify()
{
    instanceType_ = "";
    instanceTypeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    flavorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

QueryInstanceSimplify::~QueryInstanceSimplify() = default;

void QueryInstanceSimplify::validate()
{
}

web::json::value QueryInstanceSimplify::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instance_type")] = ModelBase::toJson(instanceType_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool QueryInstanceSimplify::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            Flavor refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
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
    return ok;
}


std::string QueryInstanceSimplify::getInstanceType() const
{
    return instanceType_;
}

void QueryInstanceSimplify::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool QueryInstanceSimplify::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void QueryInstanceSimplify::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

std::string QueryInstanceSimplify::getInstanceId() const
{
    return instanceId_;
}

void QueryInstanceSimplify::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool QueryInstanceSimplify::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void QueryInstanceSimplify::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string QueryInstanceSimplify::getName() const
{
    return name_;
}

void QueryInstanceSimplify::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool QueryInstanceSimplify::nameIsSet() const
{
    return nameIsSet_;
}

void QueryInstanceSimplify::unsetname()
{
    nameIsSet_ = false;
}

std::string QueryInstanceSimplify::getChargeMode() const
{
    return chargeMode_;
}

void QueryInstanceSimplify::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool QueryInstanceSimplify::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void QueryInstanceSimplify::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

Flavor QueryInstanceSimplify::getFlavor() const
{
    return flavor_;
}

void QueryInstanceSimplify::setFlavor(const Flavor& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool QueryInstanceSimplify::flavorIsSet() const
{
    return flavorIsSet_;
}

void QueryInstanceSimplify::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string QueryInstanceSimplify::getStatus() const
{
    return status_;
}

void QueryInstanceSimplify::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool QueryInstanceSimplify::statusIsSet() const
{
    return statusIsSet_;
}

void QueryInstanceSimplify::unsetstatus()
{
    statusIsSet_ = false;
}

std::string QueryInstanceSimplify::getCreateTime() const
{
    return createTime_;
}

void QueryInstanceSimplify::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool QueryInstanceSimplify::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void QueryInstanceSimplify::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string QueryInstanceSimplify::getUpdateTime() const
{
    return updateTime_;
}

void QueryInstanceSimplify::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool QueryInstanceSimplify::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void QueryInstanceSimplify::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string QueryInstanceSimplify::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void QueryInstanceSimplify::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool QueryInstanceSimplify::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void QueryInstanceSimplify::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


