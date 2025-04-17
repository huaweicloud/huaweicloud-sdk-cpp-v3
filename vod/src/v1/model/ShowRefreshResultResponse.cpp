

#include "huaweicloud/vod/v1/model/ShowRefreshResultResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowRefreshResultResponse::ShowRefreshResultResponse()
{
    refreshResultsIsSet_ = false;
}

ShowRefreshResultResponse::~ShowRefreshResultResponse() = default;

void ShowRefreshResultResponse::validate()
{
}

web::json::value ShowRefreshResultResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(refreshResultsIsSet_) {
        val[utility::conversions::to_string_t("refresh_results")] = ModelBase::toJson(refreshResults_);
    }

    return val;
}
bool ShowRefreshResultResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("refresh_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("refresh_results"));
        if(!fieldValue.is_null())
        {
            std::vector<RefreshResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefreshResults(refVal);
        }
    }
    return ok;
}


std::vector<RefreshResult>& ShowRefreshResultResponse::getRefreshResults()
{
    return refreshResults_;
}

void ShowRefreshResultResponse::setRefreshResults(const std::vector<RefreshResult>& value)
{
    refreshResults_ = value;
    refreshResultsIsSet_ = true;
}

bool ShowRefreshResultResponse::refreshResultsIsSet() const
{
    return refreshResultsIsSet_;
}

void ShowRefreshResultResponse::unsetrefreshResults()
{
    refreshResultsIsSet_ = false;
}

}
}
}
}
}


