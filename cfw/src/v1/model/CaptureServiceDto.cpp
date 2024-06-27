

#include "huaweicloud/cfw/v1/model/CaptureServiceDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CaptureServiceDto::CaptureServiceDto()
{
    destPort_ = "";
    destPortIsSet_ = false;
    protocol_ = 0;
    protocolIsSet_ = false;
    sourcePort_ = "";
    sourcePortIsSet_ = false;
}

CaptureServiceDto::~CaptureServiceDto() = default;

void CaptureServiceDto::validate()
{
}

web::json::value CaptureServiceDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(destPortIsSet_) {
        val[utility::conversions::to_string_t("dest_port")] = ModelBase::toJson(destPort_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(sourcePortIsSet_) {
        val[utility::conversions::to_string_t("source_port")] = ModelBase::toJson(sourcePort_);
    }

    return val;
}
bool CaptureServiceDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dest_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dest_port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestPort(refVal);
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
    return ok;
}


std::string CaptureServiceDto::getDestPort() const
{
    return destPort_;
}

void CaptureServiceDto::setDestPort(const std::string& value)
{
    destPort_ = value;
    destPortIsSet_ = true;
}

bool CaptureServiceDto::destPortIsSet() const
{
    return destPortIsSet_;
}

void CaptureServiceDto::unsetdestPort()
{
    destPortIsSet_ = false;
}

int32_t CaptureServiceDto::getProtocol() const
{
    return protocol_;
}

void CaptureServiceDto::setProtocol(int32_t value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool CaptureServiceDto::protocolIsSet() const
{
    return protocolIsSet_;
}

void CaptureServiceDto::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string CaptureServiceDto::getSourcePort() const
{
    return sourcePort_;
}

void CaptureServiceDto::setSourcePort(const std::string& value)
{
    sourcePort_ = value;
    sourcePortIsSet_ = true;
}

bool CaptureServiceDto::sourcePortIsSet() const
{
    return sourcePortIsSet_;
}

void CaptureServiceDto::unsetsourcePort()
{
    sourcePortIsSet_ = false;
}

}
}
}
}
}


