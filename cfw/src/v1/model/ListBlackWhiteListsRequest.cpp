

#include "huaweicloud/cfw/v1/model/ListBlackWhiteListsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListBlackWhiteListsRequest::ListBlackWhiteListsRequest()
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

ListBlackWhiteListsRequest::~ListBlackWhiteListsRequest() = default;

void ListBlackWhiteListsRequest::validate()
{
}

web::json::value ListBlackWhiteListsRequest::toJson() const
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
bool ListBlackWhiteListsRequest::fromJson(const web::json::value& val)
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


std::string ListBlackWhiteListsRequest::getObjectId() const
{
    return objectId_;
}

void ListBlackWhiteListsRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ListBlackWhiteListsRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ListBlackWhiteListsRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

int32_t ListBlackWhiteListsRequest::getListType() const
{
    return listType_;
}

void ListBlackWhiteListsRequest::setListType(int32_t value)
{
    listType_ = value;
    listTypeIsSet_ = true;
}

bool ListBlackWhiteListsRequest::listTypeIsSet() const
{
    return listTypeIsSet_;
}

void ListBlackWhiteListsRequest::unsetlistType()
{
    listTypeIsSet_ = false;
}

int32_t ListBlackWhiteListsRequest::getAddressType() const
{
    return addressType_;
}

void ListBlackWhiteListsRequest::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool ListBlackWhiteListsRequest::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void ListBlackWhiteListsRequest::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

std::string ListBlackWhiteListsRequest::getAddress() const
{
    return address_;
}

void ListBlackWhiteListsRequest::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool ListBlackWhiteListsRequest::addressIsSet() const
{
    return addressIsSet_;
}

void ListBlackWhiteListsRequest::unsetaddress()
{
    addressIsSet_ = false;
}

std::string ListBlackWhiteListsRequest::getPort() const
{
    return port_;
}

void ListBlackWhiteListsRequest::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool ListBlackWhiteListsRequest::portIsSet() const
{
    return portIsSet_;
}

void ListBlackWhiteListsRequest::unsetport()
{
    portIsSet_ = false;
}

int32_t ListBlackWhiteListsRequest::getLimit() const
{
    return limit_;
}

void ListBlackWhiteListsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBlackWhiteListsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListBlackWhiteListsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListBlackWhiteListsRequest::getOffset() const
{
    return offset_;
}

void ListBlackWhiteListsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListBlackWhiteListsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListBlackWhiteListsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListBlackWhiteListsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListBlackWhiteListsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListBlackWhiteListsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListBlackWhiteListsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListBlackWhiteListsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListBlackWhiteListsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListBlackWhiteListsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListBlackWhiteListsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


