

#include "huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstanceOpsWindowRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateGaussMySqlInstanceOpsWindowRequest::UpdateGaussMySqlInstanceOpsWindowRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateGaussMySqlInstanceOpsWindowRequest::~UpdateGaussMySqlInstanceOpsWindowRequest() = default;

void UpdateGaussMySqlInstanceOpsWindowRequest::validate()
{
}

web::json::value UpdateGaussMySqlInstanceOpsWindowRequest::toJson() const
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

bool UpdateGaussMySqlInstanceOpsWindowRequest::fromJson(const web::json::value& val)
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
            ModifyOpsWindow refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateGaussMySqlInstanceOpsWindowRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateGaussMySqlInstanceOpsWindowRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateGaussMySqlInstanceOpsWindowRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateGaussMySqlInstanceOpsWindowRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateGaussMySqlInstanceOpsWindowRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateGaussMySqlInstanceOpsWindowRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateGaussMySqlInstanceOpsWindowRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateGaussMySqlInstanceOpsWindowRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ModifyOpsWindow UpdateGaussMySqlInstanceOpsWindowRequest::getBody() const
{
    return body_;
}

void UpdateGaussMySqlInstanceOpsWindowRequest::setBody(const ModifyOpsWindow& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateGaussMySqlInstanceOpsWindowRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateGaussMySqlInstanceOpsWindowRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


