

#include "huaweicloud/cfw/v1/model/ShowTrafficTrendResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowTrafficTrendResponse::ShowTrafficTrendResponse()
{
    dataIsSet_ = false;
}

ShowTrafficTrendResponse::~ShowTrafficTrendResponse() = default;

void ShowTrafficTrendResponse::validate()
{
}

web::json::value ShowTrafficTrendResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ShowTrafficTrendResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<TrafficTrendVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::vector<TrafficTrendVO>& ShowTrafficTrendResponse::getData()
{
    return data_;
}

void ShowTrafficTrendResponse::setData(const std::vector<TrafficTrendVO>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowTrafficTrendResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowTrafficTrendResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


