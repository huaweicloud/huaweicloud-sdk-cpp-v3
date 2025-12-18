

#include "huaweicloud/meeting/v1/model/ShowQosThresholdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowQosThresholdRequest::ShowQosThresholdRequest()
{
    thresholdType_ = "";
    thresholdTypeIsSet_ = false;
}

ShowQosThresholdRequest::~ShowQosThresholdRequest() = default;

void ShowQosThresholdRequest::validate()
{
}

web::json::value ShowQosThresholdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(thresholdTypeIsSet_) {
        val[utility::conversions::to_string_t("thresholdType")] = ModelBase::toJson(thresholdType_);
    }

    return val;
}
bool ShowQosThresholdRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("thresholdType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thresholdType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThresholdType(refVal);
        }
    }
    return ok;
}


std::string ShowQosThresholdRequest::getThresholdType() const
{
    return thresholdType_;
}

void ShowQosThresholdRequest::setThresholdType(const std::string& value)
{
    thresholdType_ = value;
    thresholdTypeIsSet_ = true;
}

bool ShowQosThresholdRequest::thresholdTypeIsSet() const
{
    return thresholdTypeIsSet_;
}

void ShowQosThresholdRequest::unsetthresholdType()
{
    thresholdTypeIsSet_ = false;
}

}
}
}
}
}


