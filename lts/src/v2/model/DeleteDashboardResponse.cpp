

#include "huaweicloud/lts/v2/model/DeleteDashboardResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteDashboardResponse::DeleteDashboardResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

DeleteDashboardResponse::~DeleteDashboardResponse() = default;

void DeleteDashboardResponse::validate()
{
}

web::json::value DeleteDashboardResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool DeleteDashboardResponse::fromJson(const web::json::value& val)
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

std::string DeleteDashboardResponse::getResult() const
{
    return result_;
}

void DeleteDashboardResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteDashboardResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteDashboardResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


