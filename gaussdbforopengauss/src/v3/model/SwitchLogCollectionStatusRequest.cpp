

#include "huaweicloud/gaussdbforopengauss/v3/model/SwitchLogCollectionStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SwitchLogCollectionStatusRequest::SwitchLogCollectionStatusRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

SwitchLogCollectionStatusRequest::~SwitchLogCollectionStatusRequest() = default;

void SwitchLogCollectionStatusRequest::validate()
{
}

web::json::value SwitchLogCollectionStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SwitchLogCollectionStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string SwitchLogCollectionStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void SwitchLogCollectionStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SwitchLogCollectionStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SwitchLogCollectionStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SwitchLogCollectionStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchLogCollectionStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchLogCollectionStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchLogCollectionStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SwitchLogCollectionStatusRequest::getStatus() const
{
    return status_;
}

void SwitchLogCollectionStatusRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SwitchLogCollectionStatusRequest::statusIsSet() const
{
    return statusIsSet_;
}

void SwitchLogCollectionStatusRequest::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


