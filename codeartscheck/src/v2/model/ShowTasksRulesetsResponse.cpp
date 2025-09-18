

#include "huaweicloud/codeartscheck/v2/model/ShowTasksRulesetsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTasksRulesetsResponse::ShowTasksRulesetsResponse()
{
    infoIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ShowTasksRulesetsResponse::~ShowTasksRulesetsResponse() = default;

void ShowTasksRulesetsResponse::validate()
{
}

web::json::value ShowTasksRulesetsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(infoIsSet_) {
        val[utility::conversions::to_string_t("info")] = ModelBase::toJson(info_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ShowTasksRulesetsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("info"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskRulesetInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<TaskRulesetInfo>& ShowTasksRulesetsResponse::getInfo()
{
    return info_;
}

void ShowTasksRulesetsResponse::setInfo(const std::vector<TaskRulesetInfo>& value)
{
    info_ = value;
    infoIsSet_ = true;
}

bool ShowTasksRulesetsResponse::infoIsSet() const
{
    return infoIsSet_;
}

void ShowTasksRulesetsResponse::unsetinfo()
{
    infoIsSet_ = false;
}

int32_t ShowTasksRulesetsResponse::getTotal() const
{
    return total_;
}

void ShowTasksRulesetsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowTasksRulesetsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowTasksRulesetsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


