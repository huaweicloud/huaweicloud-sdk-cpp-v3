

#include "huaweicloud/gaussdbforopengauss/v3/model/ExportSlowSqlRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExportSlowSqlRequest::ExportSlowSqlRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExportSlowSqlRequest::~ExportSlowSqlRequest() = default;

void ExportSlowSqlRequest::validate()
{
}

web::json::value ExportSlowSqlRequest::toJson() const
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
bool ExportSlowSqlRequest::fromJson(const web::json::value& val)
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
            ExportTableVolumeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExportSlowSqlRequest::getXLanguage() const
{
    return xLanguage_;
}

void ExportSlowSqlRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ExportSlowSqlRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ExportSlowSqlRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ExportSlowSqlRequest::getInstanceId() const
{
    return instanceId_;
}

void ExportSlowSqlRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ExportSlowSqlRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ExportSlowSqlRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ExportTableVolumeRequestBody ExportSlowSqlRequest::getBody() const
{
    return body_;
}

void ExportSlowSqlRequest::setBody(const ExportTableVolumeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExportSlowSqlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExportSlowSqlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


