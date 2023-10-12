

#include "huaweicloud/cfw/v1/model/ListAddressItemsUsingGetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAddressItemsUsingGetRequest::ListAddressItemsUsingGetRequest()
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

ListAddressItemsUsingGetRequest::~ListAddressItemsUsingGetRequest() = default;

void ListAddressItemsUsingGetRequest::validate()
{
}

web::json::value ListAddressItemsUsingGetRequest::toJson() const
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
bool ListAddressItemsUsingGetRequest::fromJson(const web::json::value& val)
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


std::string ListAddressItemsUsingGetRequest::getSetId() const
{
    return setId_;
}

void ListAddressItemsUsingGetRequest::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool ListAddressItemsUsingGetRequest::setIdIsSet() const
{
    return setIdIsSet_;
}

void ListAddressItemsUsingGetRequest::unsetsetId()
{
    setIdIsSet_ = false;
}

std::string ListAddressItemsUsingGetRequest::getKeyWord() const
{
    return keyWord_;
}

void ListAddressItemsUsingGetRequest::setKeyWord(const std::string& value)
{
    keyWord_ = value;
    keyWordIsSet_ = true;
}

bool ListAddressItemsUsingGetRequest::keyWordIsSet() const
{
    return keyWordIsSet_;
}

void ListAddressItemsUsingGetRequest::unsetkeyWord()
{
    keyWordIsSet_ = false;
}

int32_t ListAddressItemsUsingGetRequest::getLimit() const
{
    return limit_;
}

void ListAddressItemsUsingGetRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAddressItemsUsingGetRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAddressItemsUsingGetRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListAddressItemsUsingGetRequest::getOffset() const
{
    return offset_;
}

void ListAddressItemsUsingGetRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAddressItemsUsingGetRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAddressItemsUsingGetRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAddressItemsUsingGetRequest::getAddress() const
{
    return address_;
}

void ListAddressItemsUsingGetRequest::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool ListAddressItemsUsingGetRequest::addressIsSet() const
{
    return addressIsSet_;
}

void ListAddressItemsUsingGetRequest::unsetaddress()
{
    addressIsSet_ = false;
}

std::string ListAddressItemsUsingGetRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListAddressItemsUsingGetRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListAddressItemsUsingGetRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListAddressItemsUsingGetRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListAddressItemsUsingGetRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListAddressItemsUsingGetRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListAddressItemsUsingGetRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListAddressItemsUsingGetRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


