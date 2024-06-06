

#include "huaweicloud/gaussdb/v3/model/RenameInstanceNodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RenameInstanceNodeRequest::RenameInstanceNodeRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

RenameInstanceNodeRequest::~RenameInstanceNodeRequest() = default;

void RenameInstanceNodeRequest::validate()
{
}

web::json::value RenameInstanceNodeRequest::toJson() const
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
bool RenameInstanceNodeRequest::fromJson(const web::json::value& val)
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
            RenameInstanceNodeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RenameInstanceNodeRequest::getXLanguage() const
{
    return xLanguage_;
}

void RenameInstanceNodeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RenameInstanceNodeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RenameInstanceNodeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string RenameInstanceNodeRequest::getInstanceId() const
{
    return instanceId_;
}

void RenameInstanceNodeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RenameInstanceNodeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RenameInstanceNodeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RenameInstanceNodeRequestBody RenameInstanceNodeRequest::getBody() const
{
    return body_;
}

void RenameInstanceNodeRequest::setBody(const RenameInstanceNodeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RenameInstanceNodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RenameInstanceNodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


