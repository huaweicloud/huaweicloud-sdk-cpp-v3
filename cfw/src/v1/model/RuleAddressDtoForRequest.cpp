

#include "huaweicloud/cfw/v1/model/RuleAddressDtoForRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




RuleAddressDtoForRequest::RuleAddressDtoForRequest()
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
    addressSetType_ = 0;
    addressSetTypeIsSet_ = false;
    predefinedGroupIsSet_ = false;
    addressGroupIsSet_ = false;
}

RuleAddressDtoForRequest::~RuleAddressDtoForRequest() = default;

void RuleAddressDtoForRequest::validate()
{
}

web::json::value RuleAddressDtoForRequest::toJson() const
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
    if(addressSetTypeIsSet_) {
        val[utility::conversions::to_string_t("address_set_type")] = ModelBase::toJson(addressSetType_);
    }
    if(predefinedGroupIsSet_) {
        val[utility::conversions::to_string_t("predefined_group")] = ModelBase::toJson(predefinedGroup_);
    }
    if(addressGroupIsSet_) {
        val[utility::conversions::to_string_t("address_group")] = ModelBase::toJson(addressGroup_);
    }

    return val;
}
bool RuleAddressDtoForRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("address_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_group"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressGroup(refVal);
        }
    }
    return ok;
}


int32_t RuleAddressDtoForRequest::getType() const
{
    return type_;
}

void RuleAddressDtoForRequest::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RuleAddressDtoForRequest::typeIsSet() const
{
    return typeIsSet_;
}

void RuleAddressDtoForRequest::unsettype()
{
    typeIsSet_ = false;
}

int32_t RuleAddressDtoForRequest::getAddressType() const
{
    return addressType_;
}

void RuleAddressDtoForRequest::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool RuleAddressDtoForRequest::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void RuleAddressDtoForRequest::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

std::string RuleAddressDtoForRequest::getAddress() const
{
    return address_;
}

void RuleAddressDtoForRequest::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool RuleAddressDtoForRequest::addressIsSet() const
{
    return addressIsSet_;
}

void RuleAddressDtoForRequest::unsetaddress()
{
    addressIsSet_ = false;
}

std::string RuleAddressDtoForRequest::getAddressSetId() const
{
    return addressSetId_;
}

void RuleAddressDtoForRequest::setAddressSetId(const std::string& value)
{
    addressSetId_ = value;
    addressSetIdIsSet_ = true;
}

bool RuleAddressDtoForRequest::addressSetIdIsSet() const
{
    return addressSetIdIsSet_;
}

void RuleAddressDtoForRequest::unsetaddressSetId()
{
    addressSetIdIsSet_ = false;
}

std::string RuleAddressDtoForRequest::getAddressSetName() const
{
    return addressSetName_;
}

void RuleAddressDtoForRequest::setAddressSetName(const std::string& value)
{
    addressSetName_ = value;
    addressSetNameIsSet_ = true;
}

bool RuleAddressDtoForRequest::addressSetNameIsSet() const
{
    return addressSetNameIsSet_;
}

void RuleAddressDtoForRequest::unsetaddressSetName()
{
    addressSetNameIsSet_ = false;
}

std::string RuleAddressDtoForRequest::getDomainAddressName() const
{
    return domainAddressName_;
}

void RuleAddressDtoForRequest::setDomainAddressName(const std::string& value)
{
    domainAddressName_ = value;
    domainAddressNameIsSet_ = true;
}

bool RuleAddressDtoForRequest::domainAddressNameIsSet() const
{
    return domainAddressNameIsSet_;
}

void RuleAddressDtoForRequest::unsetdomainAddressName()
{
    domainAddressNameIsSet_ = false;
}

std::string RuleAddressDtoForRequest::getRegionListJson() const
{
    return regionListJson_;
}

void RuleAddressDtoForRequest::setRegionListJson(const std::string& value)
{
    regionListJson_ = value;
    regionListJsonIsSet_ = true;
}

bool RuleAddressDtoForRequest::regionListJsonIsSet() const
{
    return regionListJsonIsSet_;
}

void RuleAddressDtoForRequest::unsetregionListJson()
{
    regionListJsonIsSet_ = false;
}

std::vector<IpRegionDto>& RuleAddressDtoForRequest::getRegionList()
{
    return regionList_;
}

void RuleAddressDtoForRequest::setRegionList(const std::vector<IpRegionDto>& value)
{
    regionList_ = value;
    regionListIsSet_ = true;
}

bool RuleAddressDtoForRequest::regionListIsSet() const
{
    return regionListIsSet_;
}

void RuleAddressDtoForRequest::unsetregionList()
{
    regionListIsSet_ = false;
}

std::string RuleAddressDtoForRequest::getDomainSetId() const
{
    return domainSetId_;
}

void RuleAddressDtoForRequest::setDomainSetId(const std::string& value)
{
    domainSetId_ = value;
    domainSetIdIsSet_ = true;
}

bool RuleAddressDtoForRequest::domainSetIdIsSet() const
{
    return domainSetIdIsSet_;
}

void RuleAddressDtoForRequest::unsetdomainSetId()
{
    domainSetIdIsSet_ = false;
}

std::string RuleAddressDtoForRequest::getDomainSetName() const
{
    return domainSetName_;
}

void RuleAddressDtoForRequest::setDomainSetName(const std::string& value)
{
    domainSetName_ = value;
    domainSetNameIsSet_ = true;
}

bool RuleAddressDtoForRequest::domainSetNameIsSet() const
{
    return domainSetNameIsSet_;
}

void RuleAddressDtoForRequest::unsetdomainSetName()
{
    domainSetNameIsSet_ = false;
}

std::vector<std::string>& RuleAddressDtoForRequest::getIpAddress()
{
    return ipAddress_;
}

void RuleAddressDtoForRequest::setIpAddress(const std::vector<std::string>& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool RuleAddressDtoForRequest::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void RuleAddressDtoForRequest::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

int32_t RuleAddressDtoForRequest::getAddressSetType() const
{
    return addressSetType_;
}

void RuleAddressDtoForRequest::setAddressSetType(int32_t value)
{
    addressSetType_ = value;
    addressSetTypeIsSet_ = true;
}

bool RuleAddressDtoForRequest::addressSetTypeIsSet() const
{
    return addressSetTypeIsSet_;
}

void RuleAddressDtoForRequest::unsetaddressSetType()
{
    addressSetTypeIsSet_ = false;
}

std::vector<std::string>& RuleAddressDtoForRequest::getPredefinedGroup()
{
    return predefinedGroup_;
}

void RuleAddressDtoForRequest::setPredefinedGroup(const std::vector<std::string>& value)
{
    predefinedGroup_ = value;
    predefinedGroupIsSet_ = true;
}

bool RuleAddressDtoForRequest::predefinedGroupIsSet() const
{
    return predefinedGroupIsSet_;
}

void RuleAddressDtoForRequest::unsetpredefinedGroup()
{
    predefinedGroupIsSet_ = false;
}

std::vector<std::string>& RuleAddressDtoForRequest::getAddressGroup()
{
    return addressGroup_;
}

void RuleAddressDtoForRequest::setAddressGroup(const std::vector<std::string>& value)
{
    addressGroup_ = value;
    addressGroupIsSet_ = true;
}

bool RuleAddressDtoForRequest::addressGroupIsSet() const
{
    return addressGroupIsSet_;
}

void RuleAddressDtoForRequest::unsetaddressGroup()
{
    addressGroupIsSet_ = false;
}

}
}
}
}
}


