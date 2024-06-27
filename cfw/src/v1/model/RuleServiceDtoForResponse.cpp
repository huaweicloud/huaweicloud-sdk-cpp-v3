

#include "huaweicloud/cfw/v1/model/RuleServiceDtoForResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




RuleServiceDtoForResponse::RuleServiceDtoForResponse()
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
    serviceGroupIsSet_ = false;
    serviceGroupNamesIsSet_ = false;
    serviceSetType_ = 0;
    serviceSetTypeIsSet_ = false;
}

RuleServiceDtoForResponse::~RuleServiceDtoForResponse() = default;

void RuleServiceDtoForResponse::validate()
{
}

web::json::value RuleServiceDtoForResponse::toJson() const
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
bool RuleServiceDtoForResponse::fromJson(const web::json::value& val)
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
            std::vector<ServiceGroupVO> refVal;
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


int32_t RuleServiceDtoForResponse::getType() const
{
    return type_;
}

void RuleServiceDtoForResponse::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RuleServiceDtoForResponse::typeIsSet() const
{
    return typeIsSet_;
}

void RuleServiceDtoForResponse::unsettype()
{
    typeIsSet_ = false;
}

int32_t RuleServiceDtoForResponse::getProtocol() const
{
    return protocol_;
}

void RuleServiceDtoForResponse::setProtocol(int32_t value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool RuleServiceDtoForResponse::protocolIsSet() const
{
    return protocolIsSet_;
}

void RuleServiceDtoForResponse::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::vector<int32_t>& RuleServiceDtoForResponse::getProtocols()
{
    return protocols_;
}

void RuleServiceDtoForResponse::setProtocols(std::vector<int32_t> value)
{
    protocols_ = value;
    protocolsIsSet_ = true;
}

bool RuleServiceDtoForResponse::protocolsIsSet() const
{
    return protocolsIsSet_;
}

void RuleServiceDtoForResponse::unsetprotocols()
{
    protocolsIsSet_ = false;
}

std::string RuleServiceDtoForResponse::getSourcePort() const
{
    return sourcePort_;
}

void RuleServiceDtoForResponse::setSourcePort(const std::string& value)
{
    sourcePort_ = value;
    sourcePortIsSet_ = true;
}

bool RuleServiceDtoForResponse::sourcePortIsSet() const
{
    return sourcePortIsSet_;
}

void RuleServiceDtoForResponse::unsetsourcePort()
{
    sourcePortIsSet_ = false;
}

std::string RuleServiceDtoForResponse::getDestPort() const
{
    return destPort_;
}

void RuleServiceDtoForResponse::setDestPort(const std::string& value)
{
    destPort_ = value;
    destPortIsSet_ = true;
}

bool RuleServiceDtoForResponse::destPortIsSet() const
{
    return destPortIsSet_;
}

void RuleServiceDtoForResponse::unsetdestPort()
{
    destPortIsSet_ = false;
}

std::string RuleServiceDtoForResponse::getServiceSetId() const
{
    return serviceSetId_;
}

void RuleServiceDtoForResponse::setServiceSetId(const std::string& value)
{
    serviceSetId_ = value;
    serviceSetIdIsSet_ = true;
}

bool RuleServiceDtoForResponse::serviceSetIdIsSet() const
{
    return serviceSetIdIsSet_;
}

void RuleServiceDtoForResponse::unsetserviceSetId()
{
    serviceSetIdIsSet_ = false;
}

std::string RuleServiceDtoForResponse::getServiceSetName() const
{
    return serviceSetName_;
}

void RuleServiceDtoForResponse::setServiceSetName(const std::string& value)
{
    serviceSetName_ = value;
    serviceSetNameIsSet_ = true;
}

bool RuleServiceDtoForResponse::serviceSetNameIsSet() const
{
    return serviceSetNameIsSet_;
}

void RuleServiceDtoForResponse::unsetserviceSetName()
{
    serviceSetNameIsSet_ = false;
}

std::vector<ServiceItem>& RuleServiceDtoForResponse::getCustomService()
{
    return customService_;
}

void RuleServiceDtoForResponse::setCustomService(const std::vector<ServiceItem>& value)
{
    customService_ = value;
    customServiceIsSet_ = true;
}

bool RuleServiceDtoForResponse::customServiceIsSet() const
{
    return customServiceIsSet_;
}

void RuleServiceDtoForResponse::unsetcustomService()
{
    customServiceIsSet_ = false;
}

std::vector<std::string>& RuleServiceDtoForResponse::getServiceGroup()
{
    return serviceGroup_;
}

void RuleServiceDtoForResponse::setServiceGroup(const std::vector<std::string>& value)
{
    serviceGroup_ = value;
    serviceGroupIsSet_ = true;
}

bool RuleServiceDtoForResponse::serviceGroupIsSet() const
{
    return serviceGroupIsSet_;
}

void RuleServiceDtoForResponse::unsetserviceGroup()
{
    serviceGroupIsSet_ = false;
}

std::vector<ServiceGroupVO>& RuleServiceDtoForResponse::getServiceGroupNames()
{
    return serviceGroupNames_;
}

void RuleServiceDtoForResponse::setServiceGroupNames(const std::vector<ServiceGroupVO>& value)
{
    serviceGroupNames_ = value;
    serviceGroupNamesIsSet_ = true;
}

bool RuleServiceDtoForResponse::serviceGroupNamesIsSet() const
{
    return serviceGroupNamesIsSet_;
}

void RuleServiceDtoForResponse::unsetserviceGroupNames()
{
    serviceGroupNamesIsSet_ = false;
}

int32_t RuleServiceDtoForResponse::getServiceSetType() const
{
    return serviceSetType_;
}

void RuleServiceDtoForResponse::setServiceSetType(int32_t value)
{
    serviceSetType_ = value;
    serviceSetTypeIsSet_ = true;
}

bool RuleServiceDtoForResponse::serviceSetTypeIsSet() const
{
    return serviceSetTypeIsSet_;
}

void RuleServiceDtoForResponse::unsetserviceSetType()
{
    serviceSetTypeIsSet_ = false;
}

}
}
}
}
}


