

#include "huaweicloud/gaussdb/v3/model/UpgradeSrKernelVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpgradeSrKernelVersionRequest::UpgradeSrKernelVersionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpgradeSrKernelVersionRequest::~UpgradeSrKernelVersionRequest() = default;

void UpgradeSrKernelVersionRequest::validate()
{
}

web::json::value UpgradeSrKernelVersionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpgradeSrKernelVersionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpgradeSrKernelVersionRequestV3 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpgradeSrKernelVersionRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpgradeSrKernelVersionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpgradeSrKernelVersionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpgradeSrKernelVersionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpgradeSrKernelVersionRequest::getInstanceId() const
{
    return instanceId_;
}

void UpgradeSrKernelVersionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpgradeSrKernelVersionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpgradeSrKernelVersionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpgradeSrKernelVersionRequestV3 UpgradeSrKernelVersionRequest::getBody() const
{
    return body_;
}

void UpgradeSrKernelVersionRequest::setBody(const UpgradeSrKernelVersionRequestV3& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpgradeSrKernelVersionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpgradeSrKernelVersionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


