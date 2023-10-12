

#include "huaweicloud/cfw/v1/model/ListAddressSetListUsingGetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAddressSetListUsingGetRequest::ListAddressSetListUsingGetRequest()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    keyWord_ = "";
    keyWordIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    addressType_ = 0;
    addressTypeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

ListAddressSetListUsingGetRequest::~ListAddressSetListUsingGetRequest() = default;

void ListAddressSetListUsingGetRequest::validate()
{
}

web::json::value ListAddressSetListUsingGetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(keyWordIsSet_) {
        val[utility::conversions::to_string_t("key_word")] = ModelBase::toJson(keyWord_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(addressTypeIsSet_) {
        val[utility::conversions::to_string_t("address_type")] = ModelBase::toJson(addressType_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }

    return val;
}
bool ListAddressSetListUsingGetRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
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
    return ok;
}


std::string ListAddressSetListUsingGetRequest::getObjectId() const
{
    return objectId_;
}

void ListAddressSetListUsingGetRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ListAddressSetListUsingGetRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ListAddressSetListUsingGetRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string ListAddressSetListUsingGetRequest::getKeyWord() const
{
    return keyWord_;
}

void ListAddressSetListUsingGetRequest::setKeyWord(const std::string& value)
{
    keyWord_ = value;
    keyWordIsSet_ = true;
}

bool ListAddressSetListUsingGetRequest::keyWordIsSet() const
{
    return keyWordIsSet_;
}

void ListAddressSetListUsingGetRequest::unsetkeyWord()
{
    keyWordIsSet_ = false;
}

int32_t ListAddressSetListUsingGetRequest::getLimit() const
{
    return limit_;
}

void ListAddressSetListUsingGetRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAddressSetListUsingGetRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAddressSetListUsingGetRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListAddressSetListUsingGetRequest::getOffset() const
{
    return offset_;
}

void ListAddressSetListUsingGetRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAddressSetListUsingGetRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAddressSetListUsingGetRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAddressSetListUsingGetRequest::getAddress() const
{
    return address_;
}

void ListAddressSetListUsingGetRequest::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool ListAddressSetListUsingGetRequest::addressIsSet() const
{
    return addressIsSet_;
}

void ListAddressSetListUsingGetRequest::unsetaddress()
{
    addressIsSet_ = false;
}

int32_t ListAddressSetListUsingGetRequest::getAddressType() const
{
    return addressType_;
}

void ListAddressSetListUsingGetRequest::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool ListAddressSetListUsingGetRequest::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void ListAddressSetListUsingGetRequest::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

std::string ListAddressSetListUsingGetRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListAddressSetListUsingGetRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListAddressSetListUsingGetRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListAddressSetListUsingGetRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListAddressSetListUsingGetRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListAddressSetListUsingGetRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListAddressSetListUsingGetRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListAddressSetListUsingGetRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


