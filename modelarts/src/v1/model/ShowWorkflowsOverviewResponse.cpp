

#include "huaweicloud/modelarts/v1/model/ShowWorkflowsOverviewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowWorkflowsOverviewResponse::ShowWorkflowsOverviewResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    statIsSet_ = false;
}

ShowWorkflowsOverviewResponse::~ShowWorkflowsOverviewResponse() = default;

void ShowWorkflowsOverviewResponse::validate()
{
}

web::json::value ShowWorkflowsOverviewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(statIsSet_) {
        val[utility::conversions::to_string_t("stat")] = ModelBase::toJson(stat_);
    }

    return val;
}
bool ShowWorkflowsOverviewResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stat"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stat"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStat(refVal);
        }
    }
    return ok;
}


int32_t ShowWorkflowsOverviewResponse::getTotal() const
{
    return total_;
}

void ShowWorkflowsOverviewResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowWorkflowsOverviewResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowWorkflowsOverviewResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::map<std::string, int32_t>& ShowWorkflowsOverviewResponse::getStat()
{
    return stat_;
}

void ShowWorkflowsOverviewResponse::setStat(std::map<std::string, int32_t> value)
{
    stat_ = value;
    statIsSet_ = true;
}

bool ShowWorkflowsOverviewResponse::statIsSet() const
{
    return statIsSet_;
}

void ShowWorkflowsOverviewResponse::unsetstat()
{
    statIsSet_ = false;
}

}
}
}
}
}


