

#include "huaweicloud/cfw/v1/model/ListAddressItemsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAddressItemsRequest::ListAddressItemsRequest()
{
    setId_ = "";
    setIdIsSet_ = false;
    keyWord_ = "";
    keyWordIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

ListAddressItemsRequest::~ListAddressItemsRequest() = default;

void ListAddressItemsRequest::validate()
{
}

web::json::value ListAddressItemsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(setIdIsSet_) {
        val[utility::conversions::to_string_t("set_id")] = ModelBase::toJson(setId_);
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
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }

    return val;
}
bool ListAddressItemsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetId(refVal);
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


std::string ListAddressItemsRequest::getSetId() const
{
    return setId_;
}

void ListAddressItemsRequest::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool ListAddressItemsRequest::setIdIsSet() const
{
    return setIdIsSet_;
}

void ListAddressItemsRequest::unsetsetId()
{
    setIdIsSet_ = false;
}

std::string ListAddressItemsRequest::getKeyWord() const
{
    return keyWord_;
}

void ListAddressItemsRequest::setKeyWord(const std::string& value)
{
    keyWord_ = value;
    keyWordIsSet_ = true;
}

bool ListAddressItemsRequest::keyWordIsSet() const
{
    return keyWordIsSet_;
}

void ListAddressItemsRequest::unsetkeyWord()
{
    keyWordIsSet_ = false;
}

int32_t ListAddressItemsRequest::getLimit() const
{
    return limit_;
}

void ListAddressItemsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAddressItemsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAddressItemsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListAddressItemsRequest::getOffset() const
{
    return offset_;
}

void ListAddressItemsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAddressItemsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAddressItemsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAddressItemsRequest::getAddress() const
{
    return address_;
}

void ListAddressItemsRequest::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool ListAddressItemsRequest::addressIsSet() const
{
    return addressIsSet_;
}

void ListAddressItemsRequest::unsetaddress()
{
    addressIsSet_ = false;
}

std::string ListAddressItemsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListAddressItemsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListAddressItemsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListAddressItemsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListAddressItemsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListAddressItemsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListAddressItemsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListAddressItemsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


