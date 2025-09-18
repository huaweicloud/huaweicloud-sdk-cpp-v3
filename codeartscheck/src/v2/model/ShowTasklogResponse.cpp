

#include "huaweicloud/codeartscheck/v2/model/ShowTasklogResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTasklogResponse::ShowTasklogResponse()
{
    paramInfoIsSet_ = false;
    logInfoIsSet_ = false;
}

ShowTasklogResponse::~ShowTasklogResponse() = default;

void ShowTasklogResponse::validate()
{
}

web::json::value ShowTasklogResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramInfoIsSet_) {
        val[utility::conversions::to_string_t("param_info")] = ModelBase::toJson(paramInfo_);
    }
    if(logInfoIsSet_) {
        val[utility::conversions::to_string_t("log_info")] = ModelBase::toJson(logInfo_);
    }

    return val;
}
bool ShowTasklogResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("param_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param_info"));
        if(!fieldValue.is_null())
        {
            ParamInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParamInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_info"));
        if(!fieldValue.is_null())
        {
            std::vector<LogInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogInfo(refVal);
        }
    }
    return ok;
}


ParamInfo ShowTasklogResponse::getParamInfo() const
{
    return paramInfo_;
}

void ShowTasklogResponse::setParamInfo(const ParamInfo& value)
{
    paramInfo_ = value;
    paramInfoIsSet_ = true;
}

bool ShowTasklogResponse::paramInfoIsSet() const
{
    return paramInfoIsSet_;
}

void ShowTasklogResponse::unsetparamInfo()
{
    paramInfoIsSet_ = false;
}

std::vector<LogInfo>& ShowTasklogResponse::getLogInfo()
{
    return logInfo_;
}

void ShowTasklogResponse::setLogInfo(const std::vector<LogInfo>& value)
{
    logInfo_ = value;
    logInfoIsSet_ = true;
}

bool ShowTasklogResponse::logInfoIsSet() const
{
    return logInfoIsSet_;
}

void ShowTasklogResponse::unsetlogInfo()
{
    logInfoIsSet_ = false;
}

}
}
}
}
}


