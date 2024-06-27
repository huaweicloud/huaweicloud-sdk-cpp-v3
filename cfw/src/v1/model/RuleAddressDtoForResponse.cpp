

#include "huaweicloud/cfw/v1/model/RuleAddressDtoForResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




RuleAddressDtoForResponse::RuleAddressDtoForResponse()
{
    type_ = 0;
    typeIsSet_ = false;
    addressType_ = 0;
    addressTypeIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    addressSetId_ = "";
    addressSetIdIsSet_ = false;
    addressSetName_ = "";
    addressSetNameIsSet_ = false;
    domainAddressName_ = "";
    domainAddressNameIsSet_ = false;
    regionListJson_ = "";
    regionListJsonIsSet_ = false;
    regionListIsSet_ = false;
    domainSetId_ = "";
    domainSetIdIsSet_ = false;
    domainSetName_ = "";
    domainSetNameIsSet_ = false;
    ipAddressIsSet_ = false;
    addressGroupIsSet_ = false;
    addressGroupNamesIsSet_ = false;
    addressSetType_ = 0;
    addressSetTypeIsSet_ = false;
}

RuleAddressDtoForResponse::~RuleAddressDtoForResponse() = default;

void RuleAddressDtoForResponse::validate()
{
}

web::json::value RuleAddressDtoForResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(addressTypeIsSet_) {
        val[utility::conversions::to_string_t("address_type")] = ModelBase::toJson(addressType_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(addressSetIdIsSet_) {
        val[utility::conversions::to_string_t("address_set_id")] = ModelBase::toJson(addressSetId_);
    }
    if(addressSetNameIsSet_) {
        val[utility::conversions::to_string_t("address_set_name")] = ModelBase::toJson(addressSetName_);
    }
    if(domainAddressNameIsSet_) {
        val[utility::conversions::to_string_t("domain_address_name")] = ModelBase::toJson(domainAddressName_);
    }
    if(regionListJsonIsSet_) {
        val[utility::conversions::to_string_t("region_list_json")] = ModelBase::toJson(regionListJson_);
    }
    if(regionListIsSet_) {
        val[utility::conversions::to_string_t("region_list")] = ModelBase::toJson(regionList_);
    }
    if(domainSetIdIsSet_) {
        val[utility::conversions::to_string_t("domain_set_id")] = ModelBase::toJson(domainSetId_);
    }
    if(domainSetNameIsSet_) {
        val[utility::conversions::to_string_t("domain_set_name")] = ModelBase::toJson(domainSetName_);
    }
    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }
    if(addressGroupIsSet_) {
        val[utility::conversions::to_string_t("address_group")] = ModelBase::toJson(addressGroup_);
    }
    if(addressGroupNamesIsSet_) {
        val[utility::conversions::to_string_t("address_group_names")] = ModelBase::toJson(addressGroupNames_);
    }
    if(addressSetTypeIsSet_) {
        val[utility::conversions::to_string_t("address_set_type")] = ModelBase::toJson(addressSetType_);
    }

    return val;
}
bool RuleAddressDtoForResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("address_set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressSetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address_set_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_set_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressSetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_address_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_address_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainAddressName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_list_json"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_list_json"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionListJson(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_list"));
        if(!fieldValue.is_null())
        {
            std::vector<IpRegionDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainSetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_set_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_set_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainSetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_address"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_group"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address_group_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_group_names"));
        if(!fieldValue.is_null())
        {
            std::vector<AddressGroupVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressGroupNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address_set_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_set_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressSetType(refVal);
        }
    }
    return ok;
}


int32_t RuleAddressDtoForResponse::getType() const
{
    return type_;
}

void RuleAddressDtoForResponse::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RuleAddressDtoForResponse::typeIsSet() const
{
    return typeIsSet_;
}

void RuleAddressDtoForResponse::unsettype()
{
    typeIsSet_ = false;
}

int32_t RuleAddressDtoForResponse::getAddressType() const
{
    return addressType_;
}

void RuleAddressDtoForResponse::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool RuleAddressDtoForResponse::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void RuleAddressDtoForResponse::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

std::string RuleAddressDtoForResponse::getAddress() const
{
    return address_;
}

void RuleAddressDtoForResponse::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool RuleAddressDtoForResponse::addressIsSet() const
{
    return addressIsSet_;
}

void RuleAddressDtoForResponse::unsetaddress()
{
    addressIsSet_ = false;
}

std::string RuleAddressDtoForResponse::getAddressSetId() const
{
    return addressSetId_;
}

void RuleAddressDtoForResponse::setAddressSetId(const std::string& value)
{
    addressSetId_ = value;
    addressSetIdIsSet_ = true;
}

bool RuleAddressDtoForResponse::addressSetIdIsSet() const
{
    return addressSetIdIsSet_;
}

void RuleAddressDtoForResponse::unsetaddressSetId()
{
    addressSetIdIsSet_ = false;
}

std::string RuleAddressDtoForResponse::getAddressSetName() const
{
    return addressSetName_;
}

void RuleAddressDtoForResponse::setAddressSetName(const std::string& value)
{
    addressSetName_ = value;
    addressSetNameIsSet_ = true;
}

bool RuleAddressDtoForResponse::addressSetNameIsSet() const
{
    return addressSetNameIsSet_;
}

void RuleAddressDtoForResponse::unsetaddressSetName()
{
    addressSetNameIsSet_ = false;
}

std::string RuleAddressDtoForResponse::getDomainAddressName() const
{
    return domainAddressName_;
}

void RuleAddressDtoForResponse::setDomainAddressName(const std::string& value)
{
    domainAddressName_ = value;
    domainAddressNameIsSet_ = true;
}

bool RuleAddressDtoForResponse::domainAddressNameIsSet() const
{
    return domainAddressNameIsSet_;
}

void RuleAddressDtoForResponse::unsetdomainAddressName()
{
    domainAddressNameIsSet_ = false;
}

std::string RuleAddressDtoForResponse::getRegionListJson() const
{
    return regionListJson_;
}

void RuleAddressDtoForResponse::setRegionListJson(const std::string& value)
{
    regionListJson_ = value;
    regionListJsonIsSet_ = true;
}

bool RuleAddressDtoForResponse::regionListJsonIsSet() const
{
    return regionListJsonIsSet_;
}

void RuleAddressDtoForResponse::unsetregionListJson()
{
    regionListJsonIsSet_ = false;
}

std::vector<IpRegionDto>& RuleAddressDtoForResponse::getRegionList()
{
    return regionList_;
}

void RuleAddressDtoForResponse::setRegionList(const std::vector<IpRegionDto>& value)
{
    regionList_ = value;
    regionListIsSet_ = true;
}

bool RuleAddressDtoForResponse::regionListIsSet() const
{
    return regionListIsSet_;
}

void RuleAddressDtoForResponse::unsetregionList()
{
    regionListIsSet_ = false;
}

std::string RuleAddressDtoForResponse::getDomainSetId() const
{
    return domainSetId_;
}

void RuleAddressDtoForResponse::setDomainSetId(const std::string& value)
{
    domainSetId_ = value;
    domainSetIdIsSet_ = true;
}

bool RuleAddressDtoForResponse::domainSetIdIsSet() const
{
    return domainSetIdIsSet_;
}

void RuleAddressDtoForResponse::unsetdomainSetId()
{
    domainSetIdIsSet_ = false;
}

std::string RuleAddressDtoForResponse::getDomainSetName() const
{
    return domainSetName_;
}

void RuleAddressDtoForResponse::setDomainSetName(const std::string& value)
{
    domainSetName_ = value;
    domainSetNameIsSet_ = true;
}

bool RuleAddressDtoForResponse::domainSetNameIsSet() const
{
    return domainSetNameIsSet_;
}

void RuleAddressDtoForResponse::unsetdomainSetName()
{
    domainSetNameIsSet_ = false;
}

std::vector<std::string>& RuleAddressDtoForResponse::getIpAddress()
{
    return ipAddress_;
}

void RuleAddressDtoForResponse::setIpAddress(const std::vector<std::string>& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool RuleAddressDtoForResponse::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void RuleAddressDtoForResponse::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

std::vector<std::string>& RuleAddressDtoForResponse::getAddressGroup()
{
    return addressGroup_;
}

void RuleAddressDtoForResponse::setAddressGroup(const std::vector<std::string>& value)
{
    addressGroup_ = value;
    addressGroupIsSet_ = true;
}

bool RuleAddressDtoForResponse::addressGroupIsSet() const
{
    return addressGroupIsSet_;
}

void RuleAddressDtoForResponse::unsetaddressGroup()
{
    addressGroupIsSet_ = false;
}

std::vector<AddressGroupVO>& RuleAddressDtoForResponse::getAddressGroupNames()
{
    return addressGroupNames_;
}

void RuleAddressDtoForResponse::setAddressGroupNames(const std::vector<AddressGroupVO>& value)
{
    addressGroupNames_ = value;
    addressGroupNamesIsSet_ = true;
}

bool RuleAddressDtoForResponse::addressGroupNamesIsSet() const
{
    return addressGroupNamesIsSet_;
}

void RuleAddressDtoForResponse::unsetaddressGroupNames()
{
    addressGroupNamesIsSet_ = false;
}

int32_t RuleAddressDtoForResponse::getAddressSetType() const
{
    return addressSetType_;
}

void RuleAddressDtoForResponse::setAddressSetType(int32_t value)
{
    addressSetType_ = value;
    addressSetTypeIsSet_ = true;
}

bool RuleAddressDtoForResponse::addressSetTypeIsSet() const
{
    return addressSetTypeIsSet_;
}

void RuleAddressDtoForResponse::unsetaddressSetType()
{
    addressSetTypeIsSet_ = false;
}

}
}
}
}
}


