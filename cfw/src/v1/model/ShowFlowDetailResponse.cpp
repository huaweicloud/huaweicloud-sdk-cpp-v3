

#include "huaweicloud/cfw/v1/model/ShowFlowDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowFlowDetailResponse::ShowFlowDetailResponse()
{
    dataIsSet_ = false;
}

ShowFlowDetailResponse::~ShowFlowDetailResponse() = default;

void ShowFlowDetailResponse::validate()
{
}

web::json::value ShowFlowDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowFlowDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            FlowAnalysisVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


FlowAnalysisVO ShowFlowDetailResponse::getData() const
{
    return data_;
}

void ShowFlowDetailResponse::setData(const FlowAnalysisVO& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowFlowDetailResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowFlowDetailResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


