

#include "huaweicloud/gaussdbforopengauss/v3/model/ExportSlowSqlListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExportSlowSqlListRequest::ExportSlowSqlListRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExportSlowSqlListRequest::~ExportSlowSqlListRequest() = default;

void ExportSlowSqlListRequest::validate()
{
}

web::json::value ExportSlowSqlListRequest::toJson() const
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
bool ExportSlowSqlListRequest::fromJson(const web::json::value& val)
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
            ListSlowSqlsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExportSlowSqlListRequest::getXLanguage() const
{
    return xLanguage_;
}

void ExportSlowSqlListRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ExportSlowSqlListRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ExportSlowSqlListRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ExportSlowSqlListRequest::getInstanceId() const
{
    return instanceId_;
}

void ExportSlowSqlListRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ExportSlowSqlListRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ExportSlowSqlListRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ListSlowSqlsRequestBody ExportSlowSqlListRequest::getBody() const
{
    return body_;
}

void ExportSlowSqlListRequest::setBody(const ListSlowSqlsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExportSlowSqlListRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExportSlowSqlListRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


