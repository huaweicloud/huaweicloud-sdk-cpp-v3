

#include "huaweicloud/metastudio/v1/model/SmartChatJobsReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SmartChatJobsReq::SmartChatJobsReq()
{
    extendParam_ = "";
    extendParamIsSet_ = false;
}

SmartChatJobsReq::~SmartChatJobsReq() = default;

void SmartChatJobsReq::validate()
{
}

web::json::value SmartChatJobsReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(extendParamIsSet_) {
        val[utility::conversions::to_string_t("extend_param")] = ModelBase::toJson(extendParam_);
    }

    return val;
}
bool SmartChatJobsReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("extend_param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extend_param"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendParam(refVal);
        }
    }
    return ok;
}


std::string SmartChatJobsReq::getExtendParam() const
{
    return extendParam_;
}

void SmartChatJobsReq::setExtendParam(const std::string& value)
{
    extendParam_ = value;
    extendParamIsSet_ = true;
}

bool SmartChatJobsReq::extendParamIsSet() const
{
    return extendParamIsSet_;
}

void SmartChatJobsReq::unsetextendParam()
{
    extendParamIsSet_ = false;
}

}
}
}
}
}


