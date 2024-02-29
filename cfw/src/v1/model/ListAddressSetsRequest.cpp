

#include "huaweicloud/cfw/v1/model/ListAddressSetsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAddressSetsRequest::ListAddressSetsRequest()
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
    queryAddressSetType_ = 0;
    queryAddressSetTypeIsSet_ = false;
}

ListAddressSetsRequest::~ListAddressSetsRequest() = default;

void ListAddressSetsRequest::validate()
{
}

web::json::value ListAddressSetsRequest::toJson() const
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
    if(queryAddressSetTypeIsSet_) {
        val[utility::conversions::to_string_t("query_address_set_type")] = ModelBase::toJson(queryAddressSetType_);
    }

    return val;
}
bool ListAddressSetsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("query_address_set_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_address_set_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryAddressSetType(refVal);
        }
    }
    return ok;
}


std::string ListAddressSetsRequest::getObjectId() const
{
    return objectId_;
}

void ListAddressSetsRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ListAddressSetsRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ListAddressSetsRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string ListAddressSetsRequest::getKeyWord() const
{
    return keyWord_;
}

void ListAddressSetsRequest::setKeyWord(const std::string& value)
{
    keyWord_ = value;
    keyWordIsSet_ = true;
}

bool ListAddressSetsRequest::keyWordIsSet() const
{
    return keyWordIsSet_;
}

void ListAddressSetsRequest::unsetkeyWord()
{
    keyWordIsSet_ = false;
}

int32_t ListAddressSetsRequest::getLimit() const
{
    return limit_;
}

void ListAddressSetsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAddressSetsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAddressSetsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListAddressSetsRequest::getOffset() const
{
    return offset_;
}

void ListAddressSetsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAddressSetsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAddressSetsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAddressSetsRequest::getAddress() const
{
    return address_;
}

void ListAddressSetsRequest::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool ListAddressSetsRequest::addressIsSet() const
{
    return addressIsSet_;
}

void ListAddressSetsRequest::unsetaddress()
{
    addressIsSet_ = false;
}

int32_t ListAddressSetsRequest::getAddressType() const
{
    return addressType_;
}

void ListAddressSetsRequest::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool ListAddressSetsRequest::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void ListAddressSetsRequest::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

std::string ListAddressSetsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListAddressSetsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListAddressSetsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListAddressSetsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListAddressSetsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListAddressSetsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListAddressSetsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListAddressSetsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ListAddressSetsRequest::getQueryAddressSetType() const
{
    return queryAddressSetType_;
}

void ListAddressSetsRequest::setQueryAddressSetType(int32_t value)
{
    queryAddressSetType_ = value;
    queryAddressSetTypeIsSet_ = true;
}

bool ListAddressSetsRequest::queryAddressSetTypeIsSet() const
{
    return queryAddressSetTypeIsSet_;
}

void ListAddressSetsRequest::unsetqueryAddressSetType()
{
    queryAddressSetTypeIsSet_ = false;
}

}
}
}
}
}


