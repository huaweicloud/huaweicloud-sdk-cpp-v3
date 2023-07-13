

#include "huaweicloud/cfw/v1/model/ListEipResourcesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListEipResourcesRequest::ListEipResourcesRequest()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    keyWord_ = "";
    keyWordIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    sync_ = 0;
    syncIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    deviceKey_ = "";
    deviceKeyIsSet_ = false;
    addressType_ = 0;
    addressTypeIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    fwKeyWord_ = "";
    fwKeyWordIsSet_ = false;
    epsId_ = "";
    epsIdIsSet_ = false;
}

ListEipResourcesRequest::~ListEipResourcesRequest() = default;

void ListEipResourcesRequest::validate()
{
}

web::json::value ListEipResourcesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(keyWordIsSet_) {
        val[utility::conversions::to_string_t("key_word")] = ModelBase::toJson(keyWord_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(syncIsSet_) {
        val[utility::conversions::to_string_t("sync")] = ModelBase::toJson(sync_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(deviceKeyIsSet_) {
        val[utility::conversions::to_string_t("device_key")] = ModelBase::toJson(deviceKey_);
    }
    if(addressTypeIsSet_) {
        val[utility::conversions::to_string_t("address_type")] = ModelBase::toJson(addressType_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(fwKeyWordIsSet_) {
        val[utility::conversions::to_string_t("fw_key_word")] = ModelBase::toJson(fwKeyWord_);
    }
    if(epsIdIsSet_) {
        val[utility::conversions::to_string_t("eps_id")] = ModelBase::toJson(epsId_);
    }

    return val;
}

bool ListEipResourcesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_word"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_word"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyWord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sync"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sync"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSync(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fw_key_word"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_key_word"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwKeyWord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eps_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eps_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEpsId(refVal);
        }
    }
    return ok;
}

std::string ListEipResourcesRequest::getObjectId() const
{
    return objectId_;
}

void ListEipResourcesRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ListEipResourcesRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ListEipResourcesRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string ListEipResourcesRequest::getKeyWord() const
{
    return keyWord_;
}

void ListEipResourcesRequest::setKeyWord(const std::string& value)
{
    keyWord_ = value;
    keyWordIsSet_ = true;
}

bool ListEipResourcesRequest::keyWordIsSet() const
{
    return keyWordIsSet_;
}

void ListEipResourcesRequest::unsetkeyWord()
{
    keyWordIsSet_ = false;
}

std::string ListEipResourcesRequest::getStatus() const
{
    return status_;
}

void ListEipResourcesRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListEipResourcesRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListEipResourcesRequest::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ListEipResourcesRequest::getSync() const
{
    return sync_;
}

void ListEipResourcesRequest::setSync(int32_t value)
{
    sync_ = value;
    syncIsSet_ = true;
}

bool ListEipResourcesRequest::syncIsSet() const
{
    return syncIsSet_;
}

void ListEipResourcesRequest::unsetsync()
{
    syncIsSet_ = false;
}

int32_t ListEipResourcesRequest::getLimit() const
{
    return limit_;
}

void ListEipResourcesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListEipResourcesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListEipResourcesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListEipResourcesRequest::getOffset() const
{
    return offset_;
}

void ListEipResourcesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListEipResourcesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListEipResourcesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListEipResourcesRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListEipResourcesRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListEipResourcesRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListEipResourcesRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListEipResourcesRequest::getDeviceKey() const
{
    return deviceKey_;
}

void ListEipResourcesRequest::setDeviceKey(const std::string& value)
{
    deviceKey_ = value;
    deviceKeyIsSet_ = true;
}

bool ListEipResourcesRequest::deviceKeyIsSet() const
{
    return deviceKeyIsSet_;
}

void ListEipResourcesRequest::unsetdeviceKey()
{
    deviceKeyIsSet_ = false;
}

int32_t ListEipResourcesRequest::getAddressType() const
{
    return addressType_;
}

void ListEipResourcesRequest::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool ListEipResourcesRequest::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void ListEipResourcesRequest::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

std::string ListEipResourcesRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListEipResourcesRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListEipResourcesRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListEipResourcesRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string ListEipResourcesRequest::getFwKeyWord() const
{
    return fwKeyWord_;
}

void ListEipResourcesRequest::setFwKeyWord(const std::string& value)
{
    fwKeyWord_ = value;
    fwKeyWordIsSet_ = true;
}

bool ListEipResourcesRequest::fwKeyWordIsSet() const
{
    return fwKeyWordIsSet_;
}

void ListEipResourcesRequest::unsetfwKeyWord()
{
    fwKeyWordIsSet_ = false;
}

std::string ListEipResourcesRequest::getEpsId() const
{
    return epsId_;
}

void ListEipResourcesRequest::setEpsId(const std::string& value)
{
    epsId_ = value;
    epsIdIsSet_ = true;
}

bool ListEipResourcesRequest::epsIdIsSet() const
{
    return epsIdIsSet_;
}

void ListEipResourcesRequest::unsetepsId()
{
    epsIdIsSet_ = false;
}

}
}
}
}
}


