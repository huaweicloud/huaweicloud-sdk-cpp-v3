

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
    sourcePort_ = "";
    sourcePortIsSet_ = false;
    destPort_ = "";
    destPortIsSet_ = false;
    serviceSetId_ = "";
    serviceSetIdIsSet_ = false;
    serviceSetName_ = "";
    serviceSetNameIsSet_ = false;
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

}
}
}
}
}


