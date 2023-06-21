

#include "huaweicloud/cfw/v1/model/ListBlackWhiteListsUsingGetRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListBlackWhiteListsUsingGetRequest::ListBlackWhiteListsUsingGetRequest()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    listType_ = 0;
    listTypeIsSet_ = false;
    addressType_ = 0;
    addressTypeIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    port_ = "";
    portIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

ListBlackWhiteListsUsingGetRequest::~ListBlackWhiteListsUsingGetRequest() = default;

void ListBlackWhiteListsUsingGetRequest::validate()
{
}

web::json::value ListBlackWhiteListsUsingGetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(listTypeIsSet_) {
        val[utility::conversions::to_string_t("list_type")] = ModelBase::toJson(listType_);
    }
    if(addressTypeIsSet_) {
        val[utility::conversions::to_string_t("address_type")] = ModelBase::toJson(addressType_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
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
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }

    return val;
}

bool ListBlackWhiteListsUsingGetRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("list_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setListType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
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


std::string ListBlackWhiteListsUsingGetRequest::getObjectId() const
{
    return objectId_;
}

void ListBlackWhiteListsUsingGetRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ListBlackWhiteListsUsingGetRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ListBlackWhiteListsUsingGetRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

int32_t ListBlackWhiteListsUsingGetRequest::getListType() const
{
    return listType_;
}

void ListBlackWhiteListsUsingGetRequest::setListType(int32_t value)
{
    listType_ = value;
    listTypeIsSet_ = true;
}

bool ListBlackWhiteListsUsingGetRequest::listTypeIsSet() const
{
    return listTypeIsSet_;
}

void ListBlackWhiteListsUsingGetRequest::unsetlistType()
{
    listTypeIsSet_ = false;
}

int32_t ListBlackWhiteListsUsingGetRequest::getAddressType() const
{
    return addressType_;
}

void ListBlackWhiteListsUsingGetRequest::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool ListBlackWhiteListsUsingGetRequest::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void ListBlackWhiteListsUsingGetRequest::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

std::string ListBlackWhiteListsUsingGetRequest::getAddress() const
{
    return address_;
}

void ListBlackWhiteListsUsingGetRequest::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool ListBlackWhiteListsUsingGetRequest::addressIsSet() const
{
    return addressIsSet_;
}

void ListBlackWhiteListsUsingGetRequest::unsetaddress()
{
    addressIsSet_ = false;
}

std::string ListBlackWhiteListsUsingGetRequest::getPort() const
{
    return port_;
}

void ListBlackWhiteListsUsingGetRequest::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool ListBlackWhiteListsUsingGetRequest::portIsSet() const
{
    return portIsSet_;
}

void ListBlackWhiteListsUsingGetRequest::unsetport()
{
    portIsSet_ = false;
}

int32_t ListBlackWhiteListsUsingGetRequest::getLimit() const
{
    return limit_;
}

void ListBlackWhiteListsUsingGetRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBlackWhiteListsUsingGetRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListBlackWhiteListsUsingGetRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListBlackWhiteListsUsingGetRequest::getOffset() const
{
    return offset_;
}

void ListBlackWhiteListsUsingGetRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListBlackWhiteListsUsingGetRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListBlackWhiteListsUsingGetRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListBlackWhiteListsUsingGetRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListBlackWhiteListsUsingGetRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListBlackWhiteListsUsingGetRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListBlackWhiteListsUsingGetRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListBlackWhiteListsUsingGetRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListBlackWhiteListsUsingGetRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListBlackWhiteListsUsingGetRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListBlackWhiteListsUsingGetRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


