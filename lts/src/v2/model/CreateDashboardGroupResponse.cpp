

#include "huaweicloud/lts/v2/model/CreateDashboardGroupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateDashboardGroupResponse::CreateDashboardGroupResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

CreateDashboardGroupResponse::~CreateDashboardGroupResponse() = default;

void CreateDashboardGroupResponse::validate()
{
}

web::json::value CreateDashboardGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool CreateDashboardGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string CreateDashboardGroupResponse::getResult() const
{
    return result_;
}

void CreateDashboardGroupResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateDashboardGroupResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateDashboardGroupResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


