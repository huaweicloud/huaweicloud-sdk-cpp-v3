

#include "huaweicloud/gaussdbforopengauss/v3/model/ExportTopSqlListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExportTopSqlListRequest::ExportTopSqlListRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExportTopSqlListRequest::~ExportTopSqlListRequest() = default;

void ExportTopSqlListRequest::validate()
{
}

web::json::value ExportTopSqlListRequest::toJson() const
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
bool ExportTopSqlListRequest::fromJson(const web::json::value& val)
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
            ListTopSqlsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExportTopSqlListRequest::getXLanguage() const
{
    return xLanguage_;
}

void ExportTopSqlListRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ExportTopSqlListRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ExportTopSqlListRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ExportTopSqlListRequest::getInstanceId() const
{
    return instanceId_;
}

void ExportTopSqlListRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ExportTopSqlListRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ExportTopSqlListRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ListTopSqlsRequestBody ExportTopSqlListRequest::getBody() const
{
    return body_;
}

void ExportTopSqlListRequest::setBody(const ListTopSqlsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExportTopSqlListRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExportTopSqlListRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


