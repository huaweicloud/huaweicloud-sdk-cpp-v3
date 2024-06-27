

#include "huaweicloud/cfw/v1/model/CaptureTaskVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CaptureTaskVO::CaptureTaskVO()
{
    captureSize_ = "";
    captureSizeIsSet_ = false;
    createdDate_ = "";
    createdDateIsSet_ = false;
    destAddress_ = "";
    destAddressIsSet_ = false;
    destAddressType_ = 0;
    destAddressTypeIsSet_ = false;
    destPort_ = "";
    destPortIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
    isDeleted_ = 0;
    isDeletedIsSet_ = false;
    maxPackets_ = 0;
    maxPacketsIsSet_ = false;
    modifiedDate_ = "";
    modifiedDateIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    protocol_ = 0;
    protocolIsSet_ = false;
    remainingDays_ = 0;
    remainingDaysIsSet_ = false;
    sourceAddress_ = "";
    sourceAddressIsSet_ = false;
    sourceAddressType_ = 0;
    sourceAddressTypeIsSet_ = false;
    sourcePort_ = "";
    sourcePortIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

CaptureTaskVO::~CaptureTaskVO() = default;

void CaptureTaskVO::validate()
{
}

web::json::value CaptureTaskVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(captureSizeIsSet_) {
        val[utility::conversions::to_string_t("capture_size")] = ModelBase::toJson(captureSize_);
    }
    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(destAddressIsSet_) {
        val[utility::conversions::to_string_t("dest_address")] = ModelBase::toJson(destAddress_);
    }
    if(destAddressTypeIsSet_) {
        val[utility::conversions::to_string_t("dest_address_type")] = ModelBase::toJson(destAddressType_);
    }
    if(destPortIsSet_) {
        val[utility::conversions::to_string_t("dest_port")] = ModelBase::toJson(destPort_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(isDeletedIsSet_) {
        val[utility::conversions::to_string_t("is_deleted")] = ModelBase::toJson(isDeleted_);
    }
    if(maxPacketsIsSet_) {
        val[utility::conversions::to_string_t("max_packets")] = ModelBase::toJson(maxPackets_);
    }
    if(modifiedDateIsSet_) {
        val[utility::conversions::to_string_t("modified_date")] = ModelBase::toJson(modifiedDate_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(remainingDaysIsSet_) {
        val[utility::conversions::to_string_t("remaining_days")] = ModelBase::toJson(remainingDays_);
    }
    if(sourceAddressIsSet_) {
        val[utility::conversions::to_string_t("source_address")] = ModelBase::toJson(sourceAddress_);
    }
    if(sourceAddressTypeIsSet_) {
        val[utility::conversions::to_string_t("source_address_type")] = ModelBase::toJson(sourceAddressType_);
    }
    if(sourcePortIsSet_) {
        val[utility::conversions::to_string_t("source_port")] = ModelBase::toJson(sourcePort_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool CaptureTaskVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("capture_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("capture_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaptureSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dest_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dest_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dest_address_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dest_address_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestAddressType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dest_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dest_port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_deleted"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDeleted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_packets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_packets"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxPackets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remaining_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remaining_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemainingDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_address_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_address_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceAddressType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourcePort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    return ok;
}


std::string CaptureTaskVO::getCaptureSize() const
{
    return captureSize_;
}

void CaptureTaskVO::setCaptureSize(const std::string& value)
{
    captureSize_ = value;
    captureSizeIsSet_ = true;
}

bool CaptureTaskVO::captureSizeIsSet() const
{
    return captureSizeIsSet_;
}

void CaptureTaskVO::unsetcaptureSize()
{
    captureSizeIsSet_ = false;
}

std::string CaptureTaskVO::getCreatedDate() const
{
    return createdDate_;
}

void CaptureTaskVO::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool CaptureTaskVO::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void CaptureTaskVO::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string CaptureTaskVO::getDestAddress() const
{
    return destAddress_;
}

void CaptureTaskVO::setDestAddress(const std::string& value)
{
    destAddress_ = value;
    destAddressIsSet_ = true;
}

bool CaptureTaskVO::destAddressIsSet() const
{
    return destAddressIsSet_;
}

void CaptureTaskVO::unsetdestAddress()
{
    destAddressIsSet_ = false;
}

int32_t CaptureTaskVO::getDestAddressType() const
{
    return destAddressType_;
}

void CaptureTaskVO::setDestAddressType(int32_t value)
{
    destAddressType_ = value;
    destAddressTypeIsSet_ = true;
}

bool CaptureTaskVO::destAddressTypeIsSet() const
{
    return destAddressTypeIsSet_;
}

void CaptureTaskVO::unsetdestAddressType()
{
    destAddressTypeIsSet_ = false;
}

std::string CaptureTaskVO::getDestPort() const
{
    return destPort_;
}

void CaptureTaskVO::setDestPort(const std::string& value)
{
    destPort_ = value;
    destPortIsSet_ = true;
}

bool CaptureTaskVO::destPortIsSet() const
{
    return destPortIsSet_;
}

void CaptureTaskVO::unsetdestPort()
{
    destPortIsSet_ = false;
}

int32_t CaptureTaskVO::getDuration() const
{
    return duration_;
}

void CaptureTaskVO::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool CaptureTaskVO::durationIsSet() const
{
    return durationIsSet_;
}

void CaptureTaskVO::unsetduration()
{
    durationIsSet_ = false;
}

int32_t CaptureTaskVO::getIsDeleted() const
{
    return isDeleted_;
}

void CaptureTaskVO::setIsDeleted(int32_t value)
{
    isDeleted_ = value;
    isDeletedIsSet_ = true;
}

bool CaptureTaskVO::isDeletedIsSet() const
{
    return isDeletedIsSet_;
}

void CaptureTaskVO::unsetisDeleted()
{
    isDeletedIsSet_ = false;
}

int32_t CaptureTaskVO::getMaxPackets() const
{
    return maxPackets_;
}

void CaptureTaskVO::setMaxPackets(int32_t value)
{
    maxPackets_ = value;
    maxPacketsIsSet_ = true;
}

bool CaptureTaskVO::maxPacketsIsSet() const
{
    return maxPacketsIsSet_;
}

void CaptureTaskVO::unsetmaxPackets()
{
    maxPacketsIsSet_ = false;
}

std::string CaptureTaskVO::getModifiedDate() const
{
    return modifiedDate_;
}

void CaptureTaskVO::setModifiedDate(const std::string& value)
{
    modifiedDate_ = value;
    modifiedDateIsSet_ = true;
}

bool CaptureTaskVO::modifiedDateIsSet() const
{
    return modifiedDateIsSet_;
}

void CaptureTaskVO::unsetmodifiedDate()
{
    modifiedDateIsSet_ = false;
}

std::string CaptureTaskVO::getName() const
{
    return name_;
}

void CaptureTaskVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CaptureTaskVO::nameIsSet() const
{
    return nameIsSet_;
}

void CaptureTaskVO::unsetname()
{
    nameIsSet_ = false;
}

int32_t CaptureTaskVO::getProtocol() const
{
    return protocol_;
}

void CaptureTaskVO::setProtocol(int32_t value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool CaptureTaskVO::protocolIsSet() const
{
    return protocolIsSet_;
}

void CaptureTaskVO::unsetprotocol()
{
    protocolIsSet_ = false;
}

int32_t CaptureTaskVO::getRemainingDays() const
{
    return remainingDays_;
}

void CaptureTaskVO::setRemainingDays(int32_t value)
{
    remainingDays_ = value;
    remainingDaysIsSet_ = true;
}

bool CaptureTaskVO::remainingDaysIsSet() const
{
    return remainingDaysIsSet_;
}

void CaptureTaskVO::unsetremainingDays()
{
    remainingDaysIsSet_ = false;
}

std::string CaptureTaskVO::getSourceAddress() const
{
    return sourceAddress_;
}

void CaptureTaskVO::setSourceAddress(const std::string& value)
{
    sourceAddress_ = value;
    sourceAddressIsSet_ = true;
}

bool CaptureTaskVO::sourceAddressIsSet() const
{
    return sourceAddressIsSet_;
}

void CaptureTaskVO::unsetsourceAddress()
{
    sourceAddressIsSet_ = false;
}

int32_t CaptureTaskVO::getSourceAddressType() const
{
    return sourceAddressType_;
}

void CaptureTaskVO::setSourceAddressType(int32_t value)
{
    sourceAddressType_ = value;
    sourceAddressTypeIsSet_ = true;
}

bool CaptureTaskVO::sourceAddressTypeIsSet() const
{
    return sourceAddressTypeIsSet_;
}

void CaptureTaskVO::unsetsourceAddressType()
{
    sourceAddressTypeIsSet_ = false;
}

std::string CaptureTaskVO::getSourcePort() const
{
    return sourcePort_;
}

void CaptureTaskVO::setSourcePort(const std::string& value)
{
    sourcePort_ = value;
    sourcePortIsSet_ = true;
}

bool CaptureTaskVO::sourcePortIsSet() const
{
    return sourcePortIsSet_;
}

void CaptureTaskVO::unsetsourcePort()
{
    sourcePortIsSet_ = false;
}

int32_t CaptureTaskVO::getStatus() const
{
    return status_;
}

void CaptureTaskVO::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CaptureTaskVO::statusIsSet() const
{
    return statusIsSet_;
}

void CaptureTaskVO::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CaptureTaskVO::getTaskId() const
{
    return taskId_;
}

void CaptureTaskVO::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CaptureTaskVO::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CaptureTaskVO::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


