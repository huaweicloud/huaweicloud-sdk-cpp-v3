

#include "huaweicloud/cfw/v1/model/ShowConfigQuotaRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowConfigQuotaRequest::ShowConfigQuotaRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    configType_ = "";
    configTypeIsSet_ = false;
    setId_ = "";
    setIdIsSet_ = false;
}

ShowConfigQuotaRequest::~ShowConfigQuotaRequest() = default;

void ShowConfigQuotaRequest::validate()
{
}

web::json::value ShowConfigQuotaRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(configTypeIsSet_) {
        val[utility::conversions::to_string_t("config_type")] = ModelBase::toJson(configType_);
    }
    if(setIdIsSet_) {
        val[utility::conversions::to_string_t("set_id")] = ModelBase::toJson(setId_);
    }

    return val;
}
bool ShowConfigQuotaRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetId(refVal);
        }
    }
    return ok;
}


std::string ShowConfigQuotaRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ShowConfigQuotaRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ShowConfigQuotaRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ShowConfigQuotaRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string ShowConfigQuotaRequest::getConfigType() const
{
    return configType_;
}

void ShowConfigQuotaRequest::setConfigType(const std::string& value)
{
    configType_ = value;
    configTypeIsSet_ = true;
}

bool ShowConfigQuotaRequest::configTypeIsSet() const
{
    return configTypeIsSet_;
}

void ShowConfigQuotaRequest::unsetconfigType()
{
    configTypeIsSet_ = false;
}

std::string ShowConfigQuotaRequest::getSetId() const
{
    return setId_;
}

void ShowConfigQuotaRequest::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool ShowConfigQuotaRequest::setIdIsSet() const
{
    return setIdIsSet_;
}

void ShowConfigQuotaRequest::unsetsetId()
{
    setIdIsSet_ = false;
}

}
}
}
}
}


