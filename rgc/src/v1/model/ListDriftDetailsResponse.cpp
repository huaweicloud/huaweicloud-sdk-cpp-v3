

#include "huaweicloud/rgc/v1/model/ListDriftDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ListDriftDetailsResponse::ListDriftDetailsResponse()
{
    driftDetailsIsSet_ = false;
}

ListDriftDetailsResponse::~ListDriftDetailsResponse() = default;

void ListDriftDetailsResponse::validate()
{
}

web::json::value ListDriftDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(driftDetailsIsSet_) {
        val[utility::conversions::to_string_t("drift_details")] = ModelBase::toJson(driftDetails_);
    }

    return val;
}
bool ListDriftDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("drift_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("drift_details"));
        if(!fieldValue.is_null())
        {
            std::vector<DriftDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDriftDetails(refVal);
        }
    }
    return ok;
}


std::vector<DriftDetail>& ListDriftDetailsResponse::getDriftDetails()
{
    return driftDetails_;
}

void ListDriftDetailsResponse::setDriftDetails(const std::vector<DriftDetail>& value)
{
    driftDetails_ = value;
    driftDetailsIsSet_ = true;
}

bool ListDriftDetailsResponse::driftDetailsIsSet() const
{
    return driftDetailsIsSet_;
}

void ListDriftDetailsResponse::unsetdriftDetails()
{
    driftDetailsIsSet_ = false;
}

}
}
}
}
}


