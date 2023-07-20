

#include "huaweicloud/dds/v3/model/CopyConfigurationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CopyConfigurationRequest::CopyConfigurationRequest()
{
    configId_ = "";
    configIdIsSet_ = false;
    bodyIsSet_ = false;
}

CopyConfigurationRequest::~CopyConfigurationRequest() = default;

void CopyConfigurationRequest::validate()
{
}

web::json::value CopyConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configIdIsSet_) {
        val[utility::conversions::to_string_t("config_id")] = ModelBase::toJson(configId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CopyConfigurationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("config_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CopyConfigurationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CopyConfigurationRequest::getConfigId() const
{
    return configId_;
}

void CopyConfigurationRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool CopyConfigurationRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void CopyConfigurationRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

CopyConfigurationRequestBody CopyConfigurationRequest::getBody() const
{
    return body_;
}

void CopyConfigurationRequest::setBody(const CopyConfigurationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CopyConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CopyConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


