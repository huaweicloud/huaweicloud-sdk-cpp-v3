

#include "huaweicloud/ecs/v2/model/ListRecycleBinServersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListRecycleBinServersRequest::ListRecycleBinServersRequest()
{
    allTenants_ = "";
    allTenantsIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    expectFields_ = "";
    expectFieldsIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    tagsIsSet_ = false;
    tagsKeyIsSet_ = false;
}

ListRecycleBinServersRequest::~ListRecycleBinServersRequest() = default;

void ListRecycleBinServersRequest::validate()
{
}

web::json::value ListRecycleBinServersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(allTenantsIsSet_) {
        val[utility::conversions::to_string_t("all_tenants")] = ModelBase::toJson(allTenants_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(expectFieldsIsSet_) {
        val[utility::conversions::to_string_t("expect-fields")] = ModelBase::toJson(expectFields_);
    }
    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(tagsKeyIsSet_) {
        val[utility::conversions::to_string_t("tags_key")] = ModelBase::toJson(tagsKey_);
    }

    return val;
}
bool ListRecycleBinServersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("all_tenants"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_tenants"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllTenants(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expect-fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expect-fields"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpectFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAddress(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags_key"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagsKey(refVal);
        }
    }
    return ok;
}


std::string ListRecycleBinServersRequest::getAllTenants() const
{
    return allTenants_;
}

void ListRecycleBinServersRequest::setAllTenants(const std::string& value)
{
    allTenants_ = value;
    allTenantsIsSet_ = true;
}

bool ListRecycleBinServersRequest::allTenantsIsSet() const
{
    return allTenantsIsSet_;
}

void ListRecycleBinServersRequest::unsetallTenants()
{
    allTenantsIsSet_ = false;
}

std::string ListRecycleBinServersRequest::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ListRecycleBinServersRequest::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ListRecycleBinServersRequest::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ListRecycleBinServersRequest::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string ListRecycleBinServersRequest::getExpectFields() const
{
    return expectFields_;
}

void ListRecycleBinServersRequest::setExpectFields(const std::string& value)
{
    expectFields_ = value;
    expectFieldsIsSet_ = true;
}

bool ListRecycleBinServersRequest::expectFieldsIsSet() const
{
    return expectFieldsIsSet_;
}

void ListRecycleBinServersRequest::unsetexpectFields()
{
    expectFieldsIsSet_ = false;
}

std::string ListRecycleBinServersRequest::getIpAddress() const
{
    return ipAddress_;
}

void ListRecycleBinServersRequest::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool ListRecycleBinServersRequest::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void ListRecycleBinServersRequest::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

int32_t ListRecycleBinServersRequest::getLimit() const
{
    return limit_;
}

void ListRecycleBinServersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRecycleBinServersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRecycleBinServersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListRecycleBinServersRequest::getMarker() const
{
    return marker_;
}

void ListRecycleBinServersRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListRecycleBinServersRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListRecycleBinServersRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListRecycleBinServersRequest::getName() const
{
    return name_;
}

void ListRecycleBinServersRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListRecycleBinServersRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListRecycleBinServersRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListRecycleBinServersRequest::getOffset() const
{
    return offset_;
}

void ListRecycleBinServersRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRecycleBinServersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRecycleBinServersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::vector<std::string>& ListRecycleBinServersRequest::getTags()
{
    return tags_;
}

void ListRecycleBinServersRequest::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListRecycleBinServersRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListRecycleBinServersRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<std::string>& ListRecycleBinServersRequest::getTagsKey()
{
    return tagsKey_;
}

void ListRecycleBinServersRequest::setTagsKey(const std::vector<std::string>& value)
{
    tagsKey_ = value;
    tagsKeyIsSet_ = true;
}

bool ListRecycleBinServersRequest::tagsKeyIsSet() const
{
    return tagsKeyIsSet_;
}

void ListRecycleBinServersRequest::unsettagsKey()
{
    tagsKeyIsSet_ = false;
}

}
}
}
}
}


