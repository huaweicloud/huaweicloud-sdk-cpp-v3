

#include "huaweicloud/gaussdbforopengauss/v3/model/AddInstanceTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




AddInstanceTagsRequest::AddInstanceTagsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddInstanceTagsRequest::~AddInstanceTagsRequest() = default;

void AddInstanceTagsRequest::validate()
{
}

web::json::value AddInstanceTagsRequest::toJson() const
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
bool AddInstanceTagsRequest::fromJson(const web::json::value& val)
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
            AddTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddInstanceTagsRequest::getXLanguage() const
{
    return xLanguage_;
}

void AddInstanceTagsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool AddInstanceTagsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void AddInstanceTagsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string AddInstanceTagsRequest::getInstanceId() const
{
    return instanceId_;
}

void AddInstanceTagsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddInstanceTagsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddInstanceTagsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AddTagsRequestBody AddInstanceTagsRequest::getBody() const
{
    return body_;
}

void AddInstanceTagsRequest::setBody(const AddTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddInstanceTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddInstanceTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


