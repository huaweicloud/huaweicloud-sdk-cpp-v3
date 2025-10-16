

#include "huaweicloud/cdn/v2/model/Match.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




Match::Match()
{
    logic_ = "";
    logicIsSet_ = false;
    criteriaIsSet_ = false;
}

Match::~Match() = default;

void Match::validate()
{
}

web::json::value Match::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logicIsSet_) {
        val[utility::conversions::to_string_t("logic")] = ModelBase::toJson(logic_);
    }
    if(criteriaIsSet_) {
        val[utility::conversions::to_string_t("criteria")] = ModelBase::toJson(criteria_);
    }

    return val;
}
bool Match::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("logic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logic"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("criteria"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("criteria"));
        if(!fieldValue.is_null())
        {
            std::vector<CriteriaItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCriteria(refVal);
        }
    }
    return ok;
}


std::string Match::getLogic() const
{
    return logic_;
}

void Match::setLogic(const std::string& value)
{
    logic_ = value;
    logicIsSet_ = true;
}

bool Match::logicIsSet() const
{
    return logicIsSet_;
}

void Match::unsetlogic()
{
    logicIsSet_ = false;
}

std::vector<CriteriaItem>& Match::getCriteria()
{
    return criteria_;
}

void Match::setCriteria(const std::vector<CriteriaItem>& value)
{
    criteria_ = value;
    criteriaIsSet_ = true;
}

bool Match::criteriaIsSet() const
{
    return criteriaIsSet_;
}

void Match::unsetcriteria()
{
    criteriaIsSet_ = false;
}

}
}
}
}
}


