

#include "huaweicloud/cfw/v1/model/ListEipsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListEipsRequest::ListEipsRequest()
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
    tags_ = "";
    tagsIsSet_ = false;
}

ListEipsRequest::~ListEipsRequest() = default;

void ListEipsRequest::validate()
{
}

web::json::value ListEipsRequest::toJson() const
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
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListEipsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string ListEipsRequest::getObjectId() const
{
    return objectId_;
}

void ListEipsRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ListEipsRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ListEipsRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string ListEipsRequest::getKeyWord() const
{
    return keyWord_;
}

void ListEipsRequest::setKeyWord(const std::string& value)
{
    keyWord_ = value;
    keyWordIsSet_ = true;
}

bool ListEipsRequest::keyWordIsSet() const
{
    return keyWordIsSet_;
}

void ListEipsRequest::unsetkeyWord()
{
    keyWordIsSet_ = false;
}

std::string ListEipsRequest::getStatus() const
{
    return status_;
}

void ListEipsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListEipsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListEipsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ListEipsRequest::getSync() const
{
    return sync_;
}

void ListEipsRequest::setSync(int32_t value)
{
    sync_ = value;
    syncIsSet_ = true;
}

bool ListEipsRequest::syncIsSet() const
{
    return syncIsSet_;
}

void ListEipsRequest::unsetsync()
{
    syncIsSet_ = false;
}

int32_t ListEipsRequest::getLimit() const
{
    return limit_;
}

void ListEipsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListEipsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListEipsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListEipsRequest::getOffset() const
{
    return offset_;
}

void ListEipsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListEipsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListEipsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListEipsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListEipsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListEipsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListEipsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListEipsRequest::getDeviceKey() const
{
    return deviceKey_;
}

void ListEipsRequest::setDeviceKey(const std::string& value)
{
    deviceKey_ = value;
    deviceKeyIsSet_ = true;
}

bool ListEipsRequest::deviceKeyIsSet() const
{
    return deviceKeyIsSet_;
}

void ListEipsRequest::unsetdeviceKey()
{
    deviceKeyIsSet_ = false;
}

int32_t ListEipsRequest::getAddressType() const
{
    return addressType_;
}

void ListEipsRequest::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool ListEipsRequest::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void ListEipsRequest::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

std::string ListEipsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListEipsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListEipsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListEipsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string ListEipsRequest::getFwKeyWord() const
{
    return fwKeyWord_;
}

void ListEipsRequest::setFwKeyWord(const std::string& value)
{
    fwKeyWord_ = value;
    fwKeyWordIsSet_ = true;
}

bool ListEipsRequest::fwKeyWordIsSet() const
{
    return fwKeyWordIsSet_;
}

void ListEipsRequest::unsetfwKeyWord()
{
    fwKeyWordIsSet_ = false;
}

std::string ListEipsRequest::getEpsId() const
{
    return epsId_;
}

void ListEipsRequest::setEpsId(const std::string& value)
{
    epsId_ = value;
    epsIdIsSet_ = true;
}

bool ListEipsRequest::epsIdIsSet() const
{
    return epsIdIsSet_;
}

void ListEipsRequest::unsetepsId()
{
    epsIdIsSet_ = false;
}

std::string ListEipsRequest::getTags() const
{
    return tags_;
}

void ListEipsRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListEipsRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListEipsRequest::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


