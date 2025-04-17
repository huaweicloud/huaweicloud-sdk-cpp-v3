

#include "huaweicloud/antiddos/v1/model/OpenAntiDDosServiceRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




OpenAntiDDosServiceRequestBody::OpenAntiDDosServiceRequestBody()
{
    appTypeId_ = 0L;
    appTypeIdIsSet_ = false;
    cleaningAccessPosId_ = 0L;
    cleaningAccessPosIdIsSet_ = false;
    enableL7_ = false;
    enableL7IsSet_ = false;
    httpRequestPosId_ = 0L;
    httpRequestPosIdIsSet_ = false;
    trafficPosId_ = 0L;
    trafficPosIdIsSet_ = false;
}

OpenAntiDDosServiceRequestBody::~OpenAntiDDosServiceRequestBody() = default;

void OpenAntiDDosServiceRequestBody::validate()
{
}

web::json::value OpenAntiDDosServiceRequestBody::toJson() const
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
bool OpenAntiDDosServiceRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_type_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_type_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppTypeId(refVal);
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
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpRequestPosId(refVal);
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
    return ok;
}


int64_t OpenAntiDDosServiceRequestBody::getAppTypeId() const
{
    return appTypeId_;
}

void OpenAntiDDosServiceRequestBody::setAppTypeId(int64_t value)
{
    appTypeId_ = value;
    appTypeIdIsSet_ = true;
}

bool OpenAntiDDosServiceRequestBody::appTypeIdIsSet() const
{
    return appTypeIdIsSet_;
}

void OpenAntiDDosServiceRequestBody::unsetappTypeId()
{
    appTypeIdIsSet_ = false;
}

int64_t OpenAntiDDosServiceRequestBody::getCleaningAccessPosId() const
{
    return cleaningAccessPosId_;
}

void OpenAntiDDosServiceRequestBody::setCleaningAccessPosId(int64_t value)
{
    cleaningAccessPosId_ = value;
    cleaningAccessPosIdIsSet_ = true;
}

bool OpenAntiDDosServiceRequestBody::cleaningAccessPosIdIsSet() const
{
    return cleaningAccessPosIdIsSet_;
}

void OpenAntiDDosServiceRequestBody::unsetcleaningAccessPosId()
{
    cleaningAccessPosIdIsSet_ = false;
}

bool OpenAntiDDosServiceRequestBody::isEnableL7() const
{
    return enableL7_;
}

void OpenAntiDDosServiceRequestBody::setEnableL7(bool value)
{
    enableL7_ = value;
    enableL7IsSet_ = true;
}

bool OpenAntiDDosServiceRequestBody::enableL7IsSet() const
{
    return enableL7IsSet_;
}

void OpenAntiDDosServiceRequestBody::unsetenableL7()
{
    enableL7IsSet_ = false;
}

int64_t OpenAntiDDosServiceRequestBody::getHttpRequestPosId() const
{
    return httpRequestPosId_;
}

void OpenAntiDDosServiceRequestBody::setHttpRequestPosId(int64_t value)
{
    httpRequestPosId_ = value;
    httpRequestPosIdIsSet_ = true;
}

bool OpenAntiDDosServiceRequestBody::httpRequestPosIdIsSet() const
{
    return httpRequestPosIdIsSet_;
}

void OpenAntiDDosServiceRequestBody::unsethttpRequestPosId()
{
    httpRequestPosIdIsSet_ = false;
}

int64_t OpenAntiDDosServiceRequestBody::getTrafficPosId() const
{
    return trafficPosId_;
}

void OpenAntiDDosServiceRequestBody::setTrafficPosId(int64_t value)
{
    trafficPosId_ = value;
    trafficPosIdIsSet_ = true;
}

bool OpenAntiDDosServiceRequestBody::trafficPosIdIsSet() const
{
    return trafficPosIdIsSet_;
}

void OpenAntiDDosServiceRequestBody::unsettrafficPosId()
{
    trafficPosIdIsSet_ = false;
}

}
}
}
}
}


