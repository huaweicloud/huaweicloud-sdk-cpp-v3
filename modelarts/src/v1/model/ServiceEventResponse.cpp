

#include "huaweicloud/modelarts/v1/model/ServiceEventResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServiceEventResponse::ServiceEventResponse()
{
    id_ = "";
    idIsSet_ = false;
    serviceId_ = "";
    serviceIdIsSet_ = false;
    serviceVersionId_ = "";
    serviceVersionIdIsSet_ = false;
    eventCount_ = 0;
    eventCountIsSet_ = false;
    eventType_ = "";
    eventTypeIsSet_ = false;
    eventInfo_ = "";
    eventInfoIsSet_ = false;
    eventInfoCn_ = "";
    eventInfoCnIsSet_ = false;
    createAt_ = 0L;
    createAtIsSet_ = false;
    updateAt_ = 0L;
    updateAtIsSet_ = false;
}

ServiceEventResponse::~ServiceEventResponse() = default;

void ServiceEventResponse::validate()
{
}

web::json::value ServiceEventResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(serviceVersionIdIsSet_) {
        val[utility::conversions::to_string_t("service_version_id")] = ModelBase::toJson(serviceVersionId_);
    }
    if(eventCountIsSet_) {
        val[utility::conversions::to_string_t("event_count")] = ModelBase::toJson(eventCount_);
    }
    if(eventTypeIsSet_) {
        val[utility::conversions::to_string_t("event_type")] = ModelBase::toJson(eventType_);
    }
    if(eventInfoIsSet_) {
        val[utility::conversions::to_string_t("event_info")] = ModelBase::toJson(eventInfo_);
    }
    if(eventInfoCnIsSet_) {
        val[utility::conversions::to_string_t("event_info_cn")] = ModelBase::toJson(eventInfoCn_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }

    return val;
}
bool ServiceEventResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceVersionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_info_cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_info_cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventInfoCn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    return ok;
}


std::string ServiceEventResponse::getId() const
{
    return id_;
}

void ServiceEventResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ServiceEventResponse::idIsSet() const
{
    return idIsSet_;
}

void ServiceEventResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ServiceEventResponse::getServiceId() const
{
    return serviceId_;
}

void ServiceEventResponse::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ServiceEventResponse::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ServiceEventResponse::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ServiceEventResponse::getServiceVersionId() const
{
    return serviceVersionId_;
}

void ServiceEventResponse::setServiceVersionId(const std::string& value)
{
    serviceVersionId_ = value;
    serviceVersionIdIsSet_ = true;
}

bool ServiceEventResponse::serviceVersionIdIsSet() const
{
    return serviceVersionIdIsSet_;
}

void ServiceEventResponse::unsetserviceVersionId()
{
    serviceVersionIdIsSet_ = false;
}

int32_t ServiceEventResponse::getEventCount() const
{
    return eventCount_;
}

void ServiceEventResponse::setEventCount(int32_t value)
{
    eventCount_ = value;
    eventCountIsSet_ = true;
}

bool ServiceEventResponse::eventCountIsSet() const
{
    return eventCountIsSet_;
}

void ServiceEventResponse::unseteventCount()
{
    eventCountIsSet_ = false;
}

std::string ServiceEventResponse::getEventType() const
{
    return eventType_;
}

void ServiceEventResponse::setEventType(const std::string& value)
{
    eventType_ = value;
    eventTypeIsSet_ = true;
}

bool ServiceEventResponse::eventTypeIsSet() const
{
    return eventTypeIsSet_;
}

void ServiceEventResponse::unseteventType()
{
    eventTypeIsSet_ = false;
}

std::string ServiceEventResponse::getEventInfo() const
{
    return eventInfo_;
}

void ServiceEventResponse::setEventInfo(const std::string& value)
{
    eventInfo_ = value;
    eventInfoIsSet_ = true;
}

bool ServiceEventResponse::eventInfoIsSet() const
{
    return eventInfoIsSet_;
}

void ServiceEventResponse::unseteventInfo()
{
    eventInfoIsSet_ = false;
}

std::string ServiceEventResponse::getEventInfoCn() const
{
    return eventInfoCn_;
}

void ServiceEventResponse::setEventInfoCn(const std::string& value)
{
    eventInfoCn_ = value;
    eventInfoCnIsSet_ = true;
}

bool ServiceEventResponse::eventInfoCnIsSet() const
{
    return eventInfoCnIsSet_;
}

void ServiceEventResponse::unseteventInfoCn()
{
    eventInfoCnIsSet_ = false;
}

int64_t ServiceEventResponse::getCreateAt() const
{
    return createAt_;
}

void ServiceEventResponse::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ServiceEventResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void ServiceEventResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

int64_t ServiceEventResponse::getUpdateAt() const
{
    return updateAt_;
}

void ServiceEventResponse::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ServiceEventResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ServiceEventResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

}
}
}
}
}


