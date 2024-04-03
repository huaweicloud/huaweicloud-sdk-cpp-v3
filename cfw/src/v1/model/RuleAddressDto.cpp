

#include "huaweicloud/cfw/v1/model/RuleAddressDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




RuleAddressDto::RuleAddressDto()
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
    predefinedGroupIsSet_ = false;
}

RuleAddressDto::~RuleAddressDto() = default;

void RuleAddressDto::validate()
{
}

web::json::value RuleAddressDto::toJson() const
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
    if(predefinedGroupIsSet_) {
        val[utility::conversions::to_string_t("predefined_group")] = ModelBase::toJson(predefinedGroup_);
    }

    return val;
}
bool RuleAddressDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("predefined_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("predefined_group"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPredefinedGroup(refVal);
        }
    }
    return ok;
}


int32_t RuleAddressDto::getType() const
{
    return type_;
}

void RuleAddressDto::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RuleAddressDto::typeIsSet() const
{
    return typeIsSet_;
}

void RuleAddressDto::unsettype()
{
    typeIsSet_ = false;
}

int32_t RuleAddressDto::getAddressType() const
{
    return addressType_;
}

void RuleAddressDto::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool RuleAddressDto::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void RuleAddressDto::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

std::string RuleAddressDto::getAddress() const
{
    return address_;
}

void RuleAddressDto::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool RuleAddressDto::addressIsSet() const
{
    return addressIsSet_;
}

void RuleAddressDto::unsetaddress()
{
    addressIsSet_ = false;
}

std::string RuleAddressDto::getAddressSetId() const
{
    return addressSetId_;
}

void RuleAddressDto::setAddressSetId(const std::string& value)
{
    addressSetId_ = value;
    addressSetIdIsSet_ = true;
}

bool RuleAddressDto::addressSetIdIsSet() const
{
    return addressSetIdIsSet_;
}

void RuleAddressDto::unsetaddressSetId()
{
    addressSetIdIsSet_ = false;
}

std::string RuleAddressDto::getAddressSetName() const
{
    return addressSetName_;
}

void RuleAddressDto::setAddressSetName(const std::string& value)
{
    addressSetName_ = value;
    addressSetNameIsSet_ = true;
}

bool RuleAddressDto::addressSetNameIsSet() const
{
    return addressSetNameIsSet_;
}

void RuleAddressDto::unsetaddressSetName()
{
    addressSetNameIsSet_ = false;
}

std::string RuleAddressDto::getDomainAddressName() const
{
    return domainAddressName_;
}

void RuleAddressDto::setDomainAddressName(const std::string& value)
{
    domainAddressName_ = value;
    domainAddressNameIsSet_ = true;
}

bool RuleAddressDto::domainAddressNameIsSet() const
{
    return domainAddressNameIsSet_;
}

void RuleAddressDto::unsetdomainAddressName()
{
    domainAddressNameIsSet_ = false;
}

std::string RuleAddressDto::getRegionListJson() const
{
    return regionListJson_;
}

void RuleAddressDto::setRegionListJson(const std::string& value)
{
    regionListJson_ = value;
    regionListJsonIsSet_ = true;
}

bool RuleAddressDto::regionListJsonIsSet() const
{
    return regionListJsonIsSet_;
}

void RuleAddressDto::unsetregionListJson()
{
    regionListJsonIsSet_ = false;
}

std::vector<IpRegionDto>& RuleAddressDto::getRegionList()
{
    return regionList_;
}

void RuleAddressDto::setRegionList(const std::vector<IpRegionDto>& value)
{
    regionList_ = value;
    regionListIsSet_ = true;
}

bool RuleAddressDto::regionListIsSet() const
{
    return regionListIsSet_;
}

void RuleAddressDto::unsetregionList()
{
    regionListIsSet_ = false;
}

std::string RuleAddressDto::getDomainSetId() const
{
    return domainSetId_;
}

void RuleAddressDto::setDomainSetId(const std::string& value)
{
    domainSetId_ = value;
    domainSetIdIsSet_ = true;
}

bool RuleAddressDto::domainSetIdIsSet() const
{
    return domainSetIdIsSet_;
}

void RuleAddressDto::unsetdomainSetId()
{
    domainSetIdIsSet_ = false;
}

std::string RuleAddressDto::getDomainSetName() const
{
    return domainSetName_;
}

void RuleAddressDto::setDomainSetName(const std::string& value)
{
    domainSetName_ = value;
    domainSetNameIsSet_ = true;
}

bool RuleAddressDto::domainSetNameIsSet() const
{
    return domainSetNameIsSet_;
}

void RuleAddressDto::unsetdomainSetName()
{
    domainSetNameIsSet_ = false;
}

std::vector<std::string>& RuleAddressDto::getIpAddress()
{
    return ipAddress_;
}

void RuleAddressDto::setIpAddress(const std::vector<std::string>& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool RuleAddressDto::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void RuleAddressDto::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

std::vector<std::string>& RuleAddressDto::getAddressGroup()
{
    return addressGroup_;
}

void RuleAddressDto::setAddressGroup(const std::vector<std::string>& value)
{
    addressGroup_ = value;
    addressGroupIsSet_ = true;
}

bool RuleAddressDto::addressGroupIsSet() const
{
    return addressGroupIsSet_;
}

void RuleAddressDto::unsetaddressGroup()
{
    addressGroupIsSet_ = false;
}

std::vector<AddressGroupVO>& RuleAddressDto::getAddressGroupNames()
{
    return addressGroupNames_;
}

void RuleAddressDto::setAddressGroupNames(const std::vector<AddressGroupVO>& value)
{
    addressGroupNames_ = value;
    addressGroupNamesIsSet_ = true;
}

bool RuleAddressDto::addressGroupNamesIsSet() const
{
    return addressGroupNamesIsSet_;
}

void RuleAddressDto::unsetaddressGroupNames()
{
    addressGroupNamesIsSet_ = false;
}

int32_t RuleAddressDto::getAddressSetType() const
{
    return addressSetType_;
}

void RuleAddressDto::setAddressSetType(int32_t value)
{
    addressSetType_ = value;
    addressSetTypeIsSet_ = true;
}

bool RuleAddressDto::addressSetTypeIsSet() const
{
    return addressSetTypeIsSet_;
}

void RuleAddressDto::unsetaddressSetType()
{
    addressSetTypeIsSet_ = false;
}

std::vector<std::string>& RuleAddressDto::getPredefinedGroup()
{
    return predefinedGroup_;
}

void RuleAddressDto::setPredefinedGroup(const std::vector<std::string>& value)
{
    predefinedGroup_ = value;
    predefinedGroupIsSet_ = true;
}

bool RuleAddressDto::predefinedGroupIsSet() const
{
    return predefinedGroupIsSet_;
}

void RuleAddressDto::unsetpredefinedGroup()
{
    predefinedGroupIsSet_ = false;
}

}
}
}
}
}


