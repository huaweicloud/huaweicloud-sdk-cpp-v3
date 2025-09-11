

#include "huaweicloud/dbss/v1/model/RankRiskRuleNew.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RankRiskRuleNew::RankRiskRuleNew()
{
    id_ = "";
    idIsSet_ = false;
    newRank_ = 0;
    newRankIsSet_ = false;
}

RankRiskRuleNew::~RankRiskRuleNew() = default;

void RankRiskRuleNew::validate()
{
}

web::json::value RankRiskRuleNew::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(newRankIsSet_) {
        val[utility::conversions::to_string_t("new_rank")] = ModelBase::toJson(newRank_);
    }

    return val;
}
bool RankRiskRuleNew::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("new_rank"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_rank"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewRank(refVal);
        }
    }
    return ok;
}


std::string RankRiskRuleNew::getId() const
{
    return id_;
}

void RankRiskRuleNew::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RankRiskRuleNew::idIsSet() const
{
    return idIsSet_;
}

void RankRiskRuleNew::unsetid()
{
    idIsSet_ = false;
}

int32_t RankRiskRuleNew::getNewRank() const
{
    return newRank_;
}

void RankRiskRuleNew::setNewRank(int32_t value)
{
    newRank_ = value;
    newRankIsSet_ = true;
}

bool RankRiskRuleNew::newRankIsSet() const
{
    return newRankIsSet_;
}

void RankRiskRuleNew::unsetnewRank()
{
    newRankIsSet_ = false;
}

}
}
}
}
}


