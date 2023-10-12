

#include "huaweicloud/dds/v3/model/AttachEipRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




AttachEipRequestBody::AttachEipRequestBody()
{
    publicIpId_ = "";
    publicIpIdIsSet_ = false;
    publicIp_ = "";
    publicIpIsSet_ = false;
}

AttachEipRequestBody::~AttachEipRequestBody() = default;

void AttachEipRequestBody::validate()
{
}

web::json::value AttachEipRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicIpIdIsSet_) {
        val[utility::conversions::to_string_t("public_ip_id")] = ModelBase::toJson(publicIpId_);
    }
    if(publicIpIsSet_) {
        val[utility::conversions::to_string_t("public_ip")] = ModelBase::toJson(publicIp_);
    }

    return val;
}
bool AttachEipRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("public_ip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIp(refVal);
        }
    }
    return ok;
}


std::string AttachEipRequestBody::getPublicIpId() const
{
    return publicIpId_;
}

void AttachEipRequestBody::setPublicIpId(const std::string& value)
{
    publicIpId_ = value;
    publicIpIdIsSet_ = true;
}

bool AttachEipRequestBody::publicIpIdIsSet() const
{
    return publicIpIdIsSet_;
}

void AttachEipRequestBody::unsetpublicIpId()
{
    publicIpIdIsSet_ = false;
}

std::string AttachEipRequestBody::getPublicIp() const
{
    return publicIp_;
}

void AttachEipRequestBody::setPublicIp(const std::string& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool AttachEipRequestBody::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void AttachEipRequestBody::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

}
}
}
}
}


