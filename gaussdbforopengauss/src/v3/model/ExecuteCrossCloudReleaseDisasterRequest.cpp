

#include "huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudReleaseDisasterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExecuteCrossCloudReleaseDisasterRequest::ExecuteCrossCloudReleaseDisasterRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExecuteCrossCloudReleaseDisasterRequest::~ExecuteCrossCloudReleaseDisasterRequest() = default;

void ExecuteCrossCloudReleaseDisasterRequest::validate()
{
}

web::json::value ExecuteCrossCloudReleaseDisasterRequest::toJson() const
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
bool ExecuteCrossCloudReleaseDisasterRequest::fromJson(const web::json::value& val)
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
            ReleaseDisasterReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExecuteCrossCloudReleaseDisasterRequest::getXLanguage() const
{
    return xLanguage_;
}

void ExecuteCrossCloudReleaseDisasterRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ExecuteCrossCloudReleaseDisasterRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ExecuteCrossCloudReleaseDisasterRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ExecuteCrossCloudReleaseDisasterRequest::getInstanceId() const
{
    return instanceId_;
}

void ExecuteCrossCloudReleaseDisasterRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ExecuteCrossCloudReleaseDisasterRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ExecuteCrossCloudReleaseDisasterRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ReleaseDisasterReq ExecuteCrossCloudReleaseDisasterRequest::getBody() const
{
    return body_;
}

void ExecuteCrossCloudReleaseDisasterRequest::setBody(const ReleaseDisasterReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExecuteCrossCloudReleaseDisasterRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExecuteCrossCloudReleaseDisasterRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


