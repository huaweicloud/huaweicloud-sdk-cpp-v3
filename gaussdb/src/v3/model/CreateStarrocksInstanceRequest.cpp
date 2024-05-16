

#include "huaweicloud/gaussdb/v3/model/CreateStarrocksInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateStarrocksInstanceRequest::CreateStarrocksInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateStarrocksInstanceRequest::~CreateStarrocksInstanceRequest() = default;

void CreateStarrocksInstanceRequest::validate()
{
}

web::json::value CreateStarrocksInstanceRequest::toJson() const
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
bool CreateStarrocksInstanceRequest::fromJson(const web::json::value& val)
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
            StarRocksCreateRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateStarrocksInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateStarrocksInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateStarrocksInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateStarrocksInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateStarrocksInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateStarrocksInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateStarrocksInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateStarrocksInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

StarRocksCreateRequest CreateStarrocksInstanceRequest::getBody() const
{
    return body_;
}

void CreateStarrocksInstanceRequest::setBody(const StarRocksCreateRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateStarrocksInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateStarrocksInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


