

#include "huaweicloud/cfw/v1/model/ListIpsWhitelistsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListIpsWhitelistsRequest::ListIpsWhitelistsRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    sourceAddress_ = "";
    sourceAddressIsSet_ = false;
    destAddress_ = "";
    destAddressIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListIpsWhitelistsRequest::~ListIpsWhitelistsRequest() = default;

void ListIpsWhitelistsRequest::validate()
{
}

web::json::value ListIpsWhitelistsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(sourceAddressIsSet_) {
        val[utility::conversions::to_string_t("source_address")] = ModelBase::toJson(sourceAddress_);
    }
    if(destAddressIsSet_) {
        val[utility::conversions::to_string_t("dest_address")] = ModelBase::toJson(destAddress_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListIpsWhitelistsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("dest_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dest_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestAddress(refVal);
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
    return ok;
}


std::string ListIpsWhitelistsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListIpsWhitelistsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListIpsWhitelistsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListIpsWhitelistsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string ListIpsWhitelistsRequest::getSourceAddress() const
{
    return sourceAddress_;
}

void ListIpsWhitelistsRequest::setSourceAddress(const std::string& value)
{
    sourceAddress_ = value;
    sourceAddressIsSet_ = true;
}

bool ListIpsWhitelistsRequest::sourceAddressIsSet() const
{
    return sourceAddressIsSet_;
}

void ListIpsWhitelistsRequest::unsetsourceAddress()
{
    sourceAddressIsSet_ = false;
}

std::string ListIpsWhitelistsRequest::getDestAddress() const
{
    return destAddress_;
}

void ListIpsWhitelistsRequest::setDestAddress(const std::string& value)
{
    destAddress_ = value;
    destAddressIsSet_ = true;
}

bool ListIpsWhitelistsRequest::destAddressIsSet() const
{
    return destAddressIsSet_;
}

void ListIpsWhitelistsRequest::unsetdestAddress()
{
    destAddressIsSet_ = false;
}

std::string ListIpsWhitelistsRequest::getName() const
{
    return name_;
}

void ListIpsWhitelistsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListIpsWhitelistsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListIpsWhitelistsRequest::unsetname()
{
    nameIsSet_ = false;
}

int32_t ListIpsWhitelistsRequest::getLimit() const
{
    return limit_;
}

void ListIpsWhitelistsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListIpsWhitelistsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListIpsWhitelistsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListIpsWhitelistsRequest::getOffset() const
{
    return offset_;
}

void ListIpsWhitelistsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListIpsWhitelistsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListIpsWhitelistsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


