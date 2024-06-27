

#include "huaweicloud/cfw/v1/model/ServiceGroupVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ServiceGroupVO::ServiceGroupVO()
{
    name_ = "";
    nameIsSet_ = false;
    protocolsIsSet_ = false;
    serviceSetType_ = 0;
    serviceSetTypeIsSet_ = false;
    setId_ = "";
    setIdIsSet_ = false;
}

ServiceGroupVO::~ServiceGroupVO() = default;

void ServiceGroupVO::validate()
{
}

web::json::value ServiceGroupVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(protocolsIsSet_) {
        val[utility::conversions::to_string_t("protocols")] = ModelBase::toJson(protocols_);
    }
    if(serviceSetTypeIsSet_) {
        val[utility::conversions::to_string_t("service_set_type")] = ModelBase::toJson(serviceSetType_);
    }
    if(setIdIsSet_) {
        val[utility::conversions::to_string_t("set_id")] = ModelBase::toJson(setId_);
    }

    return val;
}
bool ServiceGroupVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("service_set_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_set_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceSetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetId(refVal);
        }
    }
    return ok;
}


std::string ServiceGroupVO::getName() const
{
    return name_;
}

void ServiceGroupVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ServiceGroupVO::nameIsSet() const
{
    return nameIsSet_;
}

void ServiceGroupVO::unsetname()
{
    nameIsSet_ = false;
}

std::vector<int32_t>& ServiceGroupVO::getProtocols()
{
    return protocols_;
}

void ServiceGroupVO::setProtocols(std::vector<int32_t> value)
{
    protocols_ = value;
    protocolsIsSet_ = true;
}

bool ServiceGroupVO::protocolsIsSet() const
{
    return protocolsIsSet_;
}

void ServiceGroupVO::unsetprotocols()
{
    protocolsIsSet_ = false;
}

int32_t ServiceGroupVO::getServiceSetType() const
{
    return serviceSetType_;
}

void ServiceGroupVO::setServiceSetType(int32_t value)
{
    serviceSetType_ = value;
    serviceSetTypeIsSet_ = true;
}

bool ServiceGroupVO::serviceSetTypeIsSet() const
{
    return serviceSetTypeIsSet_;
}

void ServiceGroupVO::unsetserviceSetType()
{
    serviceSetTypeIsSet_ = false;
}

std::string ServiceGroupVO::getSetId() const
{
    return setId_;
}

void ServiceGroupVO::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool ServiceGroupVO::setIdIsSet() const
{
    return setIdIsSet_;
}

void ServiceGroupVO::unsetsetId()
{
    setIdIsSet_ = false;
}

}
}
}
}
}


