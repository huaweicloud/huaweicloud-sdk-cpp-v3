

#include "huaweicloud/vod/v1/model/ShowPreheatingAssetResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowPreheatingAssetResponse::ShowPreheatingAssetResponse()
{
    preheatingResultsIsSet_ = false;
}

ShowPreheatingAssetResponse::~ShowPreheatingAssetResponse() = default;

void ShowPreheatingAssetResponse::validate()
{
}

web::json::value ShowPreheatingAssetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(preheatingResultsIsSet_) {
        val[utility::conversions::to_string_t("preheating_results")] = ModelBase::toJson(preheatingResults_);
    }

    return val;
}

bool ShowPreheatingAssetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("preheating_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preheating_results"));
        if(!fieldValue.is_null())
        {
            std::vector<PreheatingResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreheatingResults(refVal);
        }
    }
    return ok;
}

std::vector<PreheatingResult>& ShowPreheatingAssetResponse::getPreheatingResults()
{
    return preheatingResults_;
}

void ShowPreheatingAssetResponse::setPreheatingResults(const std::vector<PreheatingResult>& value)
{
    preheatingResults_ = value;
    preheatingResultsIsSet_ = true;
}

bool ShowPreheatingAssetResponse::preheatingResultsIsSet() const
{
    return preheatingResultsIsSet_;
}

void ShowPreheatingAssetResponse::unsetpreheatingResults()
{
    preheatingResultsIsSet_ = false;
}

}
}
}
}
}


