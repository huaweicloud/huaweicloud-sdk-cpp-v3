

#include "huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterRestoreRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExecuteCrossCloudDisasterRestoreRequest::ExecuteCrossCloudDisasterRestoreRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExecuteCrossCloudDisasterRestoreRequest::~ExecuteCrossCloudDisasterRestoreRequest() = default;

void ExecuteCrossCloudDisasterRestoreRequest::validate()
{
}

web::json::value ExecuteCrossCloudDisasterRestoreRequest::toJson() const
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
bool ExecuteCrossCloudDisasterRestoreRequest::fromJson(const web::json::value& val)
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
            RestoreDisasterReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExecuteCrossCloudDisasterRestoreRequest::getXLanguage() const
{
    return xLanguage_;
}

void ExecuteCrossCloudDisasterRestoreRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ExecuteCrossCloudDisasterRestoreRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ExecuteCrossCloudDisasterRestoreRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ExecuteCrossCloudDisasterRestoreRequest::getInstanceId() const
{
    return instanceId_;
}

void ExecuteCrossCloudDisasterRestoreRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ExecuteCrossCloudDisasterRestoreRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ExecuteCrossCloudDisasterRestoreRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RestoreDisasterReq ExecuteCrossCloudDisasterRestoreRequest::getBody() const
{
    return body_;
}

void ExecuteCrossCloudDisasterRestoreRequest::setBody(const RestoreDisasterReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExecuteCrossCloudDisasterRestoreRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExecuteCrossCloudDisasterRestoreRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


