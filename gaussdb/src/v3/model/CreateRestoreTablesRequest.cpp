

#include "huaweicloud/gaussdb/v3/model/CreateRestoreTablesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateRestoreTablesRequest::CreateRestoreTablesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateRestoreTablesRequest::~CreateRestoreTablesRequest() = default;

void CreateRestoreTablesRequest::validate()
{
}

web::json::value CreateRestoreTablesRequest::toJson() const
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
bool CreateRestoreTablesRequest::fromJson(const web::json::value& val)
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
            CreateRestoreTablesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateRestoreTablesRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateRestoreTablesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateRestoreTablesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateRestoreTablesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateRestoreTablesRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateRestoreTablesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateRestoreTablesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateRestoreTablesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateRestoreTablesRequestBody CreateRestoreTablesRequest::getBody() const
{
    return body_;
}

void CreateRestoreTablesRequest::setBody(const CreateRestoreTablesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRestoreTablesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRestoreTablesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


