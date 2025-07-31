

#include "huaweicloud/cfw/v1/model/ShowAttackTotalResp_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowAttackTotalResp_data::ShowAttackTotalResp_data()
{
    attackCount_ = 0L;
    attackCountIsSet_ = false;
    denyCount_ = 0L;
    denyCountIsSet_ = false;
    permitCount_ = 0L;
    permitCountIsSet_ = false;
    riskPorts_ = 0L;
    riskPortsIsSet_ = false;
}

ShowAttackTotalResp_data::~ShowAttackTotalResp_data() = default;

void ShowAttackTotalResp_data::validate()
{
}

web::json::value ShowAttackTotalResp_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attackCountIsSet_) {
        val[utility::conversions::to_string_t("attack_count")] = ModelBase::toJson(attackCount_);
    }
    if(denyCountIsSet_) {
        val[utility::conversions::to_string_t("deny_count")] = ModelBase::toJson(denyCount_);
    }
    if(permitCountIsSet_) {
        val[utility::conversions::to_string_t("permit_count")] = ModelBase::toJson(permitCount_);
    }
    if(riskPortsIsSet_) {
        val[utility::conversions::to_string_t("risk_ports")] = ModelBase::toJson(riskPorts_);
    }

    return val;
}
bool ShowAttackTotalResp_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attack_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attack_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttackCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deny_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deny_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDenyCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permit_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permit_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermitCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("risk_ports"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risk_ports"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskPorts(refVal);
        }
    }
    return ok;
}


int64_t ShowAttackTotalResp_data::getAttackCount() const
{
    return attackCount_;
}

void ShowAttackTotalResp_data::setAttackCount(int64_t value)
{
    attackCount_ = value;
    attackCountIsSet_ = true;
}

bool ShowAttackTotalResp_data::attackCountIsSet() const
{
    return attackCountIsSet_;
}

void ShowAttackTotalResp_data::unsetattackCount()
{
    attackCountIsSet_ = false;
}

int64_t ShowAttackTotalResp_data::getDenyCount() const
{
    return denyCount_;
}

void ShowAttackTotalResp_data::setDenyCount(int64_t value)
{
    denyCount_ = value;
    denyCountIsSet_ = true;
}

bool ShowAttackTotalResp_data::denyCountIsSet() const
{
    return denyCountIsSet_;
}

void ShowAttackTotalResp_data::unsetdenyCount()
{
    denyCountIsSet_ = false;
}

int64_t ShowAttackTotalResp_data::getPermitCount() const
{
    return permitCount_;
}

void ShowAttackTotalResp_data::setPermitCount(int64_t value)
{
    permitCount_ = value;
    permitCountIsSet_ = true;
}

bool ShowAttackTotalResp_data::permitCountIsSet() const
{
    return permitCountIsSet_;
}

void ShowAttackTotalResp_data::unsetpermitCount()
{
    permitCountIsSet_ = false;
}

int64_t ShowAttackTotalResp_data::getRiskPorts() const
{
    return riskPorts_;
}

void ShowAttackTotalResp_data::setRiskPorts(int64_t value)
{
    riskPorts_ = value;
    riskPortsIsSet_ = true;
}

bool ShowAttackTotalResp_data::riskPortsIsSet() const
{
    return riskPortsIsSet_;
}

void ShowAttackTotalResp_data::unsetriskPorts()
{
    riskPortsIsSet_ = false;
}

}
}
}
}
}


