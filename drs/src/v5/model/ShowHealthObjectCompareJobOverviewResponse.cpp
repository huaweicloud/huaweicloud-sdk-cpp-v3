

#include "huaweicloud/drs/v5/model/ShowHealthObjectCompareJobOverviewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowHealthObjectCompareJobOverviewResponse::ShowHealthObjectCompareJobOverviewResponse()
{
    compareResultIsSet_ = false;
}

ShowHealthObjectCompareJobOverviewResponse::~ShowHealthObjectCompareJobOverviewResponse() = default;

void ShowHealthObjectCompareJobOverviewResponse::validate()
{
}

web::json::value ShowHealthObjectCompareJobOverviewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(compareResultIsSet_) {
        val[utility::conversions::to_string_t("compare_result")] = ModelBase::toJson(compareResult_);
    }

    return val;
}
bool ShowHealthObjectCompareJobOverviewResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("compare_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_result"));
        if(!fieldValue.is_null())
        {
            std::vector<ObjectsHealthCompareOverviewInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareResult(refVal);
        }
    }
    return ok;
}


std::vector<ObjectsHealthCompareOverviewInfo>& ShowHealthObjectCompareJobOverviewResponse::getCompareResult()
{
    return compareResult_;
}

void ShowHealthObjectCompareJobOverviewResponse::setCompareResult(const std::vector<ObjectsHealthCompareOverviewInfo>& value)
{
    compareResult_ = value;
    compareResultIsSet_ = true;
}

bool ShowHealthObjectCompareJobOverviewResponse::compareResultIsSet() const
{
    return compareResultIsSet_;
}

void ShowHealthObjectCompareJobOverviewResponse::unsetcompareResult()
{
    compareResultIsSet_ = false;
}

}
}
}
}
}


