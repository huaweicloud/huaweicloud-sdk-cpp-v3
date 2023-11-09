

#include "huaweicloud/tics/v1/model/RoundDeployVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




RoundDeployVo::RoundDeployVo()
{
    deploysIsSet_ = false;
    roundId_ = 0;
    roundIdIsSet_ = false;
}

RoundDeployVo::~RoundDeployVo() = default;

void RoundDeployVo::validate()
{
}

web::json::value RoundDeployVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deploysIsSet_) {
        val[utility::conversions::to_string_t("deploys")] = ModelBase::toJson(deploys_);
    }
    if(roundIdIsSet_) {
        val[utility::conversions::to_string_t("round_id")] = ModelBase::toJson(roundId_);
    }

    return val;
}
bool RoundDeployVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("deploys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploys"));
        if(!fieldValue.is_null())
        {
            std::vector<DeployVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeploys(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("round_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("round_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoundId(refVal);
        }
    }
    return ok;
}


std::vector<DeployVo>& RoundDeployVo::getDeploys()
{
    return deploys_;
}

void RoundDeployVo::setDeploys(const std::vector<DeployVo>& value)
{
    deploys_ = value;
    deploysIsSet_ = true;
}

bool RoundDeployVo::deploysIsSet() const
{
    return deploysIsSet_;
}

void RoundDeployVo::unsetdeploys()
{
    deploysIsSet_ = false;
}

int32_t RoundDeployVo::getRoundId() const
{
    return roundId_;
}

void RoundDeployVo::setRoundId(int32_t value)
{
    roundId_ = value;
    roundIdIsSet_ = true;
}

bool RoundDeployVo::roundIdIsSet() const
{
    return roundIdIsSet_;
}

void RoundDeployVo::unsetroundId()
{
    roundIdIsSet_ = false;
}

}
}
}
}
}


