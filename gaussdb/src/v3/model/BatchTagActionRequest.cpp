

#include "huaweicloud/gaussdb/v3/model/BatchTagActionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




BatchTagActionRequest::BatchTagActionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchTagActionRequest::~BatchTagActionRequest() = default;

void BatchTagActionRequest::validate()
{
}

web::json::value BatchTagActionRequest::toJson() const
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
bool BatchTagActionRequest::fromJson(const web::json::value& val)
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
            BatchOperateInstanceTagRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchTagActionRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchTagActionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchTagActionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchTagActionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string BatchTagActionRequest::getInstanceId() const
{
    return instanceId_;
}

void BatchTagActionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BatchTagActionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BatchTagActionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

BatchOperateInstanceTagRequestBody BatchTagActionRequest::getBody() const
{
    return body_;
}

void BatchTagActionRequest::setBody(const BatchOperateInstanceTagRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchTagActionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchTagActionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


