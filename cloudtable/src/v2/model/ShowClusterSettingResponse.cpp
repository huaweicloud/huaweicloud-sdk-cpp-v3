

#include "huaweicloud/cloudtable/v2/model/ShowClusterSettingResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




ShowClusterSettingResponse::ShowClusterSettingResponse()
{
    parmStatus_ = 0;
    parmStatusIsSet_ = false;
    parameterInfoIsSet_ = false;
}

ShowClusterSettingResponse::~ShowClusterSettingResponse() = default;

void ShowClusterSettingResponse::validate()
{
}

web::json::value ShowClusterSettingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parmStatusIsSet_) {
        val[utility::conversions::to_string_t("parm_status")] = ModelBase::toJson(parmStatus_);
    }
    if(parameterInfoIsSet_) {
        val[utility::conversions::to_string_t("parameter_info")] = ModelBase::toJson(parameterInfo_);
    }

    return val;
}

bool ShowClusterSettingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parm_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parm_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParmStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameter_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameter_info"));
        if(!fieldValue.is_null())
        {
            std::vector<ParameterInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameterInfo(refVal);
        }
    }
    return ok;
}

int32_t ShowClusterSettingResponse::getParmStatus() const
{
    return parmStatus_;
}

void ShowClusterSettingResponse::setParmStatus(int32_t value)
{
    parmStatus_ = value;
    parmStatusIsSet_ = true;
}

bool ShowClusterSettingResponse::parmStatusIsSet() const
{
    return parmStatusIsSet_;
}

void ShowClusterSettingResponse::unsetparmStatus()
{
    parmStatusIsSet_ = false;
}

std::vector<ParameterInfo>& ShowClusterSettingResponse::getParameterInfo()
{
    return parameterInfo_;
}

void ShowClusterSettingResponse::setParameterInfo(const std::vector<ParameterInfo>& value)
{
    parameterInfo_ = value;
    parameterInfoIsSet_ = true;
}

bool ShowClusterSettingResponse::parameterInfoIsSet() const
{
    return parameterInfoIsSet_;
}

void ShowClusterSettingResponse::unsetparameterInfo()
{
    parameterInfoIsSet_ = false;
}

}
}
}
}
}


