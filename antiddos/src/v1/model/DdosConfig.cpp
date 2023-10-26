

#include "huaweicloud/antiddos/v1/model/DdosConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




DdosConfig::DdosConfig()
{
    enableL7_ = false;
    enableL7IsSet_ = false;
    trafficPosId_ = 0L;
    trafficPosIdIsSet_ = false;
    httpRequestPosId_ = 0L;
    httpRequestPosIdIsSet_ = false;
    cleaningAccessPosId_ = 0L;
    cleaningAccessPosIdIsSet_ = false;
    appTypeId_ = 0L;
    appTypeIdIsSet_ = false;
}

DdosConfig::~DdosConfig() = default;

void DdosConfig::validate()
{
}

web::json::value DdosConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableL7IsSet_) {
        val[utility::conversions::to_string_t("enable_L7")] = ModelBase::toJson(enableL7_);
    }
    if(trafficPosIdIsSet_) {
        val[utility::conversions::to_string_t("traffic_pos_id")] = ModelBase::toJson(trafficPosId_);
    }
    if(httpRequestPosIdIsSet_) {
        val[utility::conversions::to_string_t("http_request_pos_id")] = ModelBase::toJson(httpRequestPosId_);
    }
    if(cleaningAccessPosIdIsSet_) {
        val[utility::conversions::to_string_t("cleaning_access_pos_id")] = ModelBase::toJson(cleaningAccessPosId_);
    }
    if(appTypeIdIsSet_) {
        val[utility::conversions::to_string_t("app_type_id")] = ModelBase::toJson(appTypeId_);
    }

    return val;
}
bool DdosConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable_L7"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_L7"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableL7(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traffic_pos_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_pos_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficPosId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http_request_pos_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_request_pos_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpRequestPosId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cleaning_access_pos_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cleaning_access_pos_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCleaningAccessPosId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_type_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_type_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppTypeId(refVal);
        }
    }
    return ok;
}


bool DdosConfig::isEnableL7() const
{
    return enableL7_;
}

void DdosConfig::setEnableL7(bool value)
{
    enableL7_ = value;
    enableL7IsSet_ = true;
}

bool DdosConfig::enableL7IsSet() const
{
    return enableL7IsSet_;
}

void DdosConfig::unsetenableL7()
{
    enableL7IsSet_ = false;
}

int64_t DdosConfig::getTrafficPosId() const
{
    return trafficPosId_;
}

void DdosConfig::setTrafficPosId(int64_t value)
{
    trafficPosId_ = value;
    trafficPosIdIsSet_ = true;
}

bool DdosConfig::trafficPosIdIsSet() const
{
    return trafficPosIdIsSet_;
}

void DdosConfig::unsettrafficPosId()
{
    trafficPosIdIsSet_ = false;
}

int64_t DdosConfig::getHttpRequestPosId() const
{
    return httpRequestPosId_;
}

void DdosConfig::setHttpRequestPosId(int64_t value)
{
    httpRequestPosId_ = value;
    httpRequestPosIdIsSet_ = true;
}

bool DdosConfig::httpRequestPosIdIsSet() const
{
    return httpRequestPosIdIsSet_;
}

void DdosConfig::unsethttpRequestPosId()
{
    httpRequestPosIdIsSet_ = false;
}

int64_t DdosConfig::getCleaningAccessPosId() const
{
    return cleaningAccessPosId_;
}

void DdosConfig::setCleaningAccessPosId(int64_t value)
{
    cleaningAccessPosId_ = value;
    cleaningAccessPosIdIsSet_ = true;
}

bool DdosConfig::cleaningAccessPosIdIsSet() const
{
    return cleaningAccessPosIdIsSet_;
}

void DdosConfig::unsetcleaningAccessPosId()
{
    cleaningAccessPosIdIsSet_ = false;
}

int64_t DdosConfig::getAppTypeId() const
{
    return appTypeId_;
}

void DdosConfig::setAppTypeId(int64_t value)
{
    appTypeId_ = value;
    appTypeIdIsSet_ = true;
}

bool DdosConfig::appTypeIdIsSet() const
{
    return appTypeIdIsSet_;
}

void DdosConfig::unsetappTypeId()
{
    appTypeIdIsSet_ = false;
}

}
}
}
}
}


