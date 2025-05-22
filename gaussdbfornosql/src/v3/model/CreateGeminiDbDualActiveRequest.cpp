

#include "huaweicloud/gaussdbfornosql/v3/model/CreateGeminiDbDualActiveRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CreateGeminiDbDualActiveRequest::CreateGeminiDbDualActiveRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateGeminiDbDualActiveRequest::~CreateGeminiDbDualActiveRequest() = default;

void CreateGeminiDbDualActiveRequest::validate()
{
}

web::json::value CreateGeminiDbDualActiveRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateGeminiDbDualActiveRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            DualActiveRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateGeminiDbDualActiveRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateGeminiDbDualActiveRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateGeminiDbDualActiveRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateGeminiDbDualActiveRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DualActiveRequestBody CreateGeminiDbDualActiveRequest::getBody() const
{
    return body_;
}

void CreateGeminiDbDualActiveRequest::setBody(const DualActiveRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateGeminiDbDualActiveRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateGeminiDbDualActiveRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


