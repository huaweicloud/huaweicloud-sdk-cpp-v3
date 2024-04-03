

#include "huaweicloud/cfw/v1/model/RuleServiceDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




RuleServiceDto::RuleServiceDto()
{
    type_ = 0;
    typeIsSet_ = false;
    protocol_ = 0;
    protocolIsSet_ = false;
    protocolsIsSet_ = false;
    sourcePort_ = "";
    sourcePortIsSet_ = false;
    destPort_ = "";
    destPortIsSet_ = false;
    serviceSetId_ = "";
    serviceSetIdIsSet_ = false;
    serviceSetName_ = "";
    serviceSetNameIsSet_ = false;
    customServiceIsSet_ = false;
    predefinedGroupIsSet_ = false;
    serviceGroupIsSet_ = false;
    serviceGroupNamesIsSet_ = false;
    serviceSetType_ = 0;
    serviceSetTypeIsSet_ = false;
}

RuleServiceDto::~RuleServiceDto() = default;

void RuleServiceDto::validate()
{
}

web::json::value RuleServiceDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(protocolsIsSet_) {
        val[utility::conversions::to_string_t("protocols")] = ModelBase::toJson(protocols_);
    }
    if(sourcePortIsSet_) {
        val[utility::conversions::to_string_t("source_port")] = ModelBase::toJson(sourcePort_);
    }
    if(destPortIsSet_) {
        val[utility::conversions::to_string_t("dest_port")] = ModelBase::toJson(destPort_);
    }
    if(serviceSetIdIsSet_) {
        val[utility::conversions::to_string_t("service_set_id")] = ModelBase::toJson(serviceSetId_);
    }
    if(serviceSetNameIsSet_) {
        val[utility::conversions::to_string_t("service_set_name")] = ModelBase::toJson(serviceSetName_);
    }
    if(customServiceIsSet_) {
        val[utility::conversions::to_string_t("custom_service")] = ModelBase::toJson(customService_);
    }
    if(predefinedGroupIsSet_) {
        val[utility::conversions::to_string_t("predefined_group")] = ModelBase::toJson(predefinedGroup_);
    }
    if(serviceGroupIsSet_) {
        val[utility::conversions::to_string_t("service_group")] = ModelBase::toJson(serviceGroup_);
    }
    if(serviceGroupNamesIsSet_) {
        val[utility::conversions::to_string_t("service_group_names")] = ModelBase::toJson(serviceGroupNames_);
    }
    if(serviceSetTypeIsSet_) {
        val[utility::conversions::to_string_t("service_set_type")] = ModelBase::toJson(serviceSetType_);
    }

    return val;
}
bool RuleServiceDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocols"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocols"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocols(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourcePort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dest_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dest_port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceSetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_set_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_set_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceSetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_service"));
        if(!fieldValue.is_null())
        {
            std::vector<ServiceItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomService(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("service_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_group"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_group_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_group_names"));
        if(!fieldValue.is_null())
        {
            std::vector<AddressGroupVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceGroupNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_set_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_set_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceSetType(refVal);
        }
    }
    return ok;
}


int32_t RuleServiceDto::getType() const
{
    return type_;
}

void RuleServiceDto::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RuleServiceDto::typeIsSet() const
{
    return typeIsSet_;
}

void RuleServiceDto::unsettype()
{
    typeIsSet_ = false;
}

int32_t RuleServiceDto::getProtocol() const
{
    return protocol_;
}

void RuleServiceDto::setProtocol(int32_t value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool RuleServiceDto::protocolIsSet() const
{
    return protocolIsSet_;
}

void RuleServiceDto::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::vector<int32_t>& RuleServiceDto::getProtocols()
{
    return protocols_;
}

void RuleServiceDto::setProtocols(std::vector<int32_t> value)
{
    protocols_ = value;
    protocolsIsSet_ = true;
}

bool RuleServiceDto::protocolsIsSet() const
{
    return protocolsIsSet_;
}

void RuleServiceDto::unsetprotocols()
{
    protocolsIsSet_ = false;
}

std::string RuleServiceDto::getSourcePort() const
{
    return sourcePort_;
}

void RuleServiceDto::setSourcePort(const std::string& value)
{
    sourcePort_ = value;
    sourcePortIsSet_ = true;
}

bool RuleServiceDto::sourcePortIsSet() const
{
    return sourcePortIsSet_;
}

void RuleServiceDto::unsetsourcePort()
{
    sourcePortIsSet_ = false;
}

std::string RuleServiceDto::getDestPort() const
{
    return destPort_;
}

void RuleServiceDto::setDestPort(const std::string& value)
{
    destPort_ = value;
    destPortIsSet_ = true;
}

bool RuleServiceDto::destPortIsSet() const
{
    return destPortIsSet_;
}

void RuleServiceDto::unsetdestPort()
{
    destPortIsSet_ = false;
}

std::string RuleServiceDto::getServiceSetId() const
{
    return serviceSetId_;
}

void RuleServiceDto::setServiceSetId(const std::string& value)
{
    serviceSetId_ = value;
    serviceSetIdIsSet_ = true;
}

bool RuleServiceDto::serviceSetIdIsSet() const
{
    return serviceSetIdIsSet_;
}

void RuleServiceDto::unsetserviceSetId()
{
    serviceSetIdIsSet_ = false;
}

std::string RuleServiceDto::getServiceSetName() const
{
    return serviceSetName_;
}

void RuleServiceDto::setServiceSetName(const std::string& value)
{
    serviceSetName_ = value;
    serviceSetNameIsSet_ = true;
}

bool RuleServiceDto::serviceSetNameIsSet() const
{
    return serviceSetNameIsSet_;
}

void RuleServiceDto::unsetserviceSetName()
{
    serviceSetNameIsSet_ = false;
}

std::vector<ServiceItem>& RuleServiceDto::getCustomService()
{
    return customService_;
}

void RuleServiceDto::setCustomService(const std::vector<ServiceItem>& value)
{
    customService_ = value;
    customServiceIsSet_ = true;
}

bool RuleServiceDto::customServiceIsSet() const
{
    return customServiceIsSet_;
}

void RuleServiceDto::unsetcustomService()
{
    customServiceIsSet_ = false;
}

std::vector<std::string>& RuleServiceDto::getPredefinedGroup()
{
    return predefinedGroup_;
}

void RuleServiceDto::setPredefinedGroup(const std::vector<std::string>& value)
{
    predefinedGroup_ = value;
    predefinedGroupIsSet_ = true;
}

bool RuleServiceDto::predefinedGroupIsSet() const
{
    return predefinedGroupIsSet_;
}

void RuleServiceDto::unsetpredefinedGroup()
{
    predefinedGroupIsSet_ = false;
}

std::vector<std::string>& RuleServiceDto::getServiceGroup()
{
    return serviceGroup_;
}

void RuleServiceDto::setServiceGroup(const std::vector<std::string>& value)
{
    serviceGroup_ = value;
    serviceGroupIsSet_ = true;
}

bool RuleServiceDto::serviceGroupIsSet() const
{
    return serviceGroupIsSet_;
}

void RuleServiceDto::unsetserviceGroup()
{
    serviceGroupIsSet_ = false;
}

std::vector<AddressGroupVO>& RuleServiceDto::getServiceGroupNames()
{
    return serviceGroupNames_;
}

void RuleServiceDto::setServiceGroupNames(const std::vector<AddressGroupVO>& value)
{
    serviceGroupNames_ = value;
    serviceGroupNamesIsSet_ = true;
}

bool RuleServiceDto::serviceGroupNamesIsSet() const
{
    return serviceGroupNamesIsSet_;
}

void RuleServiceDto::unsetserviceGroupNames()
{
    serviceGroupNamesIsSet_ = false;
}

int32_t RuleServiceDto::getServiceSetType() const
{
    return serviceSetType_;
}

void RuleServiceDto::setServiceSetType(int32_t value)
{
    serviceSetType_ = value;
    serviceSetTypeIsSet_ = true;
}

bool RuleServiceDto::serviceSetTypeIsSet() const
{
    return serviceSetTypeIsSet_;
}

void RuleServiceDto::unsetserviceSetType()
{
    serviceSetTypeIsSet_ = false;
}

}
}
}
}
}


