

#include "huaweicloud/rds/v3/model/ListInstancesRecommendationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListInstancesRecommendationRequest::ListInstancesRecommendationRequest()
{
    engine_ = "";
    engineIsSet_ = false;
}

ListInstancesRecommendationRequest::~ListInstancesRecommendationRequest() = default;

void ListInstancesRecommendationRequest::validate()
{
}

web::json::value ListInstancesRecommendationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineIsSet_) {
        val[utility::conversions::to_string_t("engine")] = ModelBase::toJson(engine_);
    }

    return val;
}

bool ListInstancesRecommendationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngine(refVal);
        }
    }
    return ok;
}

std::string ListInstancesRecommendationRequest::getEngine() const
{
    return engine_;
}

void ListInstancesRecommendationRequest::setEngine(const std::string& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool ListInstancesRecommendationRequest::engineIsSet() const
{
    return engineIsSet_;
}

void ListInstancesRecommendationRequest::unsetengine()
{
    engineIsSet_ = false;
}

}
}
}
}
}


