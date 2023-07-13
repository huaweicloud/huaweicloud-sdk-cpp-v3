

#include "huaweicloud/cdn/v1/model/RangeStatusRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




RangeStatusRequest::RangeStatusRequest()
{
    rangeStatus_ = "";
    rangeStatusIsSet_ = false;
}

RangeStatusRequest::~RangeStatusRequest() = default;

void RangeStatusRequest::validate()
{
}

web::json::value RangeStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rangeStatusIsSet_) {
        val[utility::conversions::to_string_t("range_status")] = ModelBase::toJson(rangeStatus_);
    }

    return val;
}

bool RangeStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("range_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("range_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRangeStatus(refVal);
        }
    }
    return ok;
}

std::string RangeStatusRequest::getRangeStatus() const
{
    return rangeStatus_;
}

void RangeStatusRequest::setRangeStatus(const std::string& value)
{
    rangeStatus_ = value;
    rangeStatusIsSet_ = true;
}

bool RangeStatusRequest::rangeStatusIsSet() const
{
    return rangeStatusIsSet_;
}

void RangeStatusRequest::unsetrangeStatus()
{
    rangeStatusIsSet_ = false;
}

}
}
}
}
}


