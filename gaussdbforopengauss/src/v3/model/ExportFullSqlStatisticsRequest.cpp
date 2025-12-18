

#include "huaweicloud/gaussdbforopengauss/v3/model/ExportFullSqlStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExportFullSqlStatisticsRequest::ExportFullSqlStatisticsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExportFullSqlStatisticsRequest::~ExportFullSqlStatisticsRequest() = default;

void ExportFullSqlStatisticsRequest::validate()
{
}

web::json::value ExportFullSqlStatisticsRequest::toJson() const
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
bool ExportFullSqlStatisticsRequest::fromJson(const web::json::value& val)
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
            ListEnhanceFullSqlStatisticsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExportFullSqlStatisticsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ExportFullSqlStatisticsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ExportFullSqlStatisticsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ExportFullSqlStatisticsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ExportFullSqlStatisticsRequest::getInstanceId() const
{
    return instanceId_;
}

void ExportFullSqlStatisticsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ExportFullSqlStatisticsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ExportFullSqlStatisticsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ListEnhanceFullSqlStatisticsRequestBody ExportFullSqlStatisticsRequest::getBody() const
{
    return body_;
}

void ExportFullSqlStatisticsRequest::setBody(const ListEnhanceFullSqlStatisticsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExportFullSqlStatisticsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExportFullSqlStatisticsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


