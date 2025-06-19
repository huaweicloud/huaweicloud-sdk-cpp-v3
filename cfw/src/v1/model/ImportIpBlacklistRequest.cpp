

#include "huaweicloud/cfw/v1/model/ImportIpBlacklistRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ImportIpBlacklistRequest::ImportIpBlacklistRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ImportIpBlacklistRequest::~ImportIpBlacklistRequest() = default;

void ImportIpBlacklistRequest::validate()
{
}

web::json::value ImportIpBlacklistRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ImportIpBlacklistRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IpBlacklistImportDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ImportIpBlacklistRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ImportIpBlacklistRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ImportIpBlacklistRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ImportIpBlacklistRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

IpBlacklistImportDto ImportIpBlacklistRequest::getBody() const
{
    return body_;
}

void ImportIpBlacklistRequest::setBody(const IpBlacklistImportDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ImportIpBlacklistRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ImportIpBlacklistRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


