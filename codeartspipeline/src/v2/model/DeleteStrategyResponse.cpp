

#include "huaweicloud/codeartspipeline/v2/model/DeleteStrategyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




DeleteStrategyResponse::DeleteStrategyResponse()
{
    status_ = false;
    statusIsSet_ = false;
}

DeleteStrategyResponse::~DeleteStrategyResponse() = default;

void DeleteStrategyResponse::validate()
{
}

web::json::value DeleteStrategyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool DeleteStrategyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


bool DeleteStrategyResponse::isStatus() const
{
    return status_;
}

void DeleteStrategyResponse::setStatus(bool value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteStrategyResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteStrategyResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


