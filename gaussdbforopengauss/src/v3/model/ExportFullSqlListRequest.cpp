

#include "huaweicloud/gaussdbforopengauss/v3/model/ExportFullSqlListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExportFullSqlListRequest::ExportFullSqlListRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExportFullSqlListRequest::~ExportFullSqlListRequest() = default;

void ExportFullSqlListRequest::validate()
{
}

web::json::value ExportFullSqlListRequest::toJson() const
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
bool ExportFullSqlListRequest::fromJson(const web::json::value& val)
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
            ListEnhanceFullSqlsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExportFullSqlListRequest::getXLanguage() const
{
    return xLanguage_;
}

void ExportFullSqlListRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ExportFullSqlListRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ExportFullSqlListRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ExportFullSqlListRequest::getInstanceId() const
{
    return instanceId_;
}

void ExportFullSqlListRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ExportFullSqlListRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ExportFullSqlListRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ListEnhanceFullSqlsRequestBody ExportFullSqlListRequest::getBody() const
{
    return body_;
}

void ExportFullSqlListRequest::setBody(const ListEnhanceFullSqlsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExportFullSqlListRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExportFullSqlListRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


