

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateCrossCloudConstructDisasterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateCrossCloudConstructDisasterRequest::CreateCrossCloudConstructDisasterRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateCrossCloudConstructDisasterRequest::~CreateCrossCloudConstructDisasterRequest() = default;

void CreateCrossCloudConstructDisasterRequest::validate()
{
}

web::json::value CreateCrossCloudConstructDisasterRequest::toJson() const
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
bool CreateCrossCloudConstructDisasterRequest::fromJson(const web::json::value& val)
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
            ConstructReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateCrossCloudConstructDisasterRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateCrossCloudConstructDisasterRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateCrossCloudConstructDisasterRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateCrossCloudConstructDisasterRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateCrossCloudConstructDisasterRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateCrossCloudConstructDisasterRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateCrossCloudConstructDisasterRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateCrossCloudConstructDisasterRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ConstructReq CreateCrossCloudConstructDisasterRequest::getBody() const
{
    return body_;
}

void CreateCrossCloudConstructDisasterRequest::setBody(const ConstructReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateCrossCloudConstructDisasterRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateCrossCloudConstructDisasterRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


