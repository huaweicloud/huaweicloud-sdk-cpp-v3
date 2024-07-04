

#include "huaweicloud/gaussdb/v3/model/UpdateStarrocksParamsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateStarrocksParamsRequest::UpdateStarrocksParamsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateStarrocksParamsRequest::~UpdateStarrocksParamsRequest() = default;

void UpdateStarrocksParamsRequest::validate()
{
}

web::json::value UpdateStarrocksParamsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateStarrocksParamsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateParamInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateStarrocksParamsRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateStarrocksParamsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateStarrocksParamsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateStarrocksParamsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateStarrocksParamsRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateStarrocksParamsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateStarrocksParamsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateStarrocksParamsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

UpdateParamInfo UpdateStarrocksParamsRequest::getBody() const
{
    return body_;
}

void UpdateStarrocksParamsRequest::setBody(const UpdateParamInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateStarrocksParamsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateStarrocksParamsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


