

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowSlowSqlPlanResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowSlowSqlPlanResponse::ShowSlowSqlPlanResponse()
{
    gsExplain_ = "";
    gsExplainIsSet_ = false;
}

ShowSlowSqlPlanResponse::~ShowSlowSqlPlanResponse() = default;

void ShowSlowSqlPlanResponse::validate()
{
}

web::json::value ShowSlowSqlPlanResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(gsExplainIsSet_) {
        val[utility::conversions::to_string_t("gs_explain")] = ModelBase::toJson(gsExplain_);
    }

    return val;
}
bool ShowSlowSqlPlanResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("gs_explain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gs_explain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGsExplain(refVal);
        }
    }
    return ok;
}


std::string ShowSlowSqlPlanResponse::getGsExplain() const
{
    return gsExplain_;
}

void ShowSlowSqlPlanResponse::setGsExplain(const std::string& value)
{
    gsExplain_ = value;
    gsExplainIsSet_ = true;
}

bool ShowSlowSqlPlanResponse::gsExplainIsSet() const
{
    return gsExplainIsSet_;
}

void ShowSlowSqlPlanResponse::unsetgsExplain()
{
    gsExplainIsSet_ = false;
}

}
}
}
}
}


