

#include "huaweicloud/cdn/v2/model/ShowDomainLocationStatsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowDomainLocationStatsResponse::ShowDomainLocationStatsResponse()
{
    groupBy_ = "";
    groupByIsSet_ = false;
    resultIsSet_ = false;
}

ShowDomainLocationStatsResponse::~ShowDomainLocationStatsResponse() = default;

void ShowDomainLocationStatsResponse::validate()
{
}

web::json::value ShowDomainLocationStatsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupByIsSet_) {
        val[utility::conversions::to_string_t("group_by")] = ModelBase::toJson(groupBy_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowDomainLocationStatsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowDomainLocationStatsResponse::getGroupBy() const
{
    return groupBy_;
}

void ShowDomainLocationStatsResponse::setGroupBy(const std::string& value)
{
    groupBy_ = value;
    groupByIsSet_ = true;
}

bool ShowDomainLocationStatsResponse::groupByIsSet() const
{
    return groupByIsSet_;
}

void ShowDomainLocationStatsResponse::unsetgroupBy()
{
    groupByIsSet_ = false;
}

std::map<std::string, Object>& ShowDomainLocationStatsResponse::getResult()
{
    return result_;
}

void ShowDomainLocationStatsResponse::setResult(const std::map<std::string, Object>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowDomainLocationStatsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowDomainLocationStatsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


