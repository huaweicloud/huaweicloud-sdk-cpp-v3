

#include "huaweicloud/gaussdbforopengauss/v3/model/DeleteShardingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DeleteShardingRequest::DeleteShardingRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteShardingRequest::~DeleteShardingRequest() = default;

void DeleteShardingRequest::validate()
{
}

web::json::value DeleteShardingRequest::toJson() const
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
bool DeleteShardingRequest::fromJson(const web::json::value& val)
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
            ReduceDnRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteShardingRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteShardingRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteShardingRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteShardingRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteShardingRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteShardingRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteShardingRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteShardingRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ReduceDnRequestBody DeleteShardingRequest::getBody() const
{
    return body_;
}

void DeleteShardingRequest::setBody(const ReduceDnRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteShardingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteShardingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


