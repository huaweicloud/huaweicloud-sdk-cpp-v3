

#include "huaweicloud/antiddos/v1/model/UpdateAntiDDosServiceRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




UpdateAntiDDosServiceRequestBody::UpdateAntiDDosServiceRequestBody()
{
    appTypeId_ = 0;
    appTypeIdIsSet_ = false;
    cleaningAccessPosId_ = 0;
    cleaningAccessPosIdIsSet_ = false;
    enableL7_ = false;
    enableL7IsSet_ = false;
    httpRequestPosId_ = 0;
    httpRequestPosIdIsSet_ = false;
    trafficPosId_ = 0;
    trafficPosIdIsSet_ = false;
}

UpdateAntiDDosServiceRequestBody::~UpdateAntiDDosServiceRequestBody() = default;

void UpdateAntiDDosServiceRequestBody::validate()
{
}

web::json::value UpdateAntiDDosServiceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appTypeIdIsSet_) {
        val[utility::conversions::to_string_t("app_type_id")] = ModelBase::toJson(appTypeId_);
    }
    if(cleaningAccessPosIdIsSet_) {
        val[utility::conversions::to_string_t("cleaning_access_pos_id")] = ModelBase::toJson(cleaningAccessPosId_);
    }
    if(enableL7IsSet_) {
        val[utility::conversions::to_string_t("enable_L7")] = ModelBase::toJson(enableL7_);
    }
    if(httpRequestPosIdIsSet_) {
        val[utility::conversions::to_string_t("http_request_pos_id")] = ModelBase::toJson(httpRequestPosId_);
    }
    if(trafficPosIdIsSet_) {
        val[utility::conversions::to_string_t("traffic_pos_id")] = ModelBase::toJson(trafficPosId_);
    }

    return val;
}
bool UpdateAntiDDosServiceRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_type_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_type_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppTypeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cleaning_access_pos_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cleaning_access_pos_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCleaningAccessPosId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_L7"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_L7"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableL7(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http_request_pos_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_request_pos_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpRequestPosId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traffic_pos_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_pos_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficPosId(refVal);
        }
    }
    return ok;
}


int32_t UpdateAntiDDosServiceRequestBody::getAppTypeId() const
{
    return appTypeId_;
}

void UpdateAntiDDosServiceRequestBody::setAppTypeId(int32_t value)
{
    appTypeId_ = value;
    appTypeIdIsSet_ = true;
}

bool UpdateAntiDDosServiceRequestBody::appTypeIdIsSet() const
{
    return appTypeIdIsSet_;
}

void UpdateAntiDDosServiceRequestBody::unsetappTypeId()
{
    appTypeIdIsSet_ = false;
}

int32_t UpdateAntiDDosServiceRequestBody::getCleaningAccessPosId() const
{
    return cleaningAccessPosId_;
}

void UpdateAntiDDosServiceRequestBody::setCleaningAccessPosId(int32_t value)
{
    cleaningAccessPosId_ = value;
    cleaningAccessPosIdIsSet_ = true;
}

bool UpdateAntiDDosServiceRequestBody::cleaningAccessPosIdIsSet() const
{
    return cleaningAccessPosIdIsSet_;
}

void UpdateAntiDDosServiceRequestBody::unsetcleaningAccessPosId()
{
    cleaningAccessPosIdIsSet_ = false;
}

bool UpdateAntiDDosServiceRequestBody::isEnableL7() const
{
    return enableL7_;
}

void UpdateAntiDDosServiceRequestBody::setEnableL7(bool value)
{
    enableL7_ = value;
    enableL7IsSet_ = true;
}

bool UpdateAntiDDosServiceRequestBody::enableL7IsSet() const
{
    return enableL7IsSet_;
}

void UpdateAntiDDosServiceRequestBody::unsetenableL7()
{
    enableL7IsSet_ = false;
}

int32_t UpdateAntiDDosServiceRequestBody::getHttpRequestPosId() const
{
    return httpRequestPosId_;
}

void UpdateAntiDDosServiceRequestBody::setHttpRequestPosId(int32_t value)
{
    httpRequestPosId_ = value;
    httpRequestPosIdIsSet_ = true;
}

bool UpdateAntiDDosServiceRequestBody::httpRequestPosIdIsSet() const
{
    return httpRequestPosIdIsSet_;
}

void UpdateAntiDDosServiceRequestBody::unsethttpRequestPosId()
{
    httpRequestPosIdIsSet_ = false;
}

int32_t UpdateAntiDDosServiceRequestBody::getTrafficPosId() const
{
    return trafficPosId_;
}

void UpdateAntiDDosServiceRequestBody::setTrafficPosId(int32_t value)
{
    trafficPosId_ = value;
    trafficPosIdIsSet_ = true;
}

bool UpdateAntiDDosServiceRequestBody::trafficPosIdIsSet() const
{
    return trafficPosIdIsSet_;
}

void UpdateAntiDDosServiceRequestBody::unsettrafficPosId()
{
    trafficPosIdIsSet_ = false;
}

}
}
}
}
}


