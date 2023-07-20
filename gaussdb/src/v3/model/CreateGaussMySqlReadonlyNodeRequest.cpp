

#include "huaweicloud/gaussdb/v3/model/CreateGaussMySqlReadonlyNodeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateGaussMySqlReadonlyNodeRequest::CreateGaussMySqlReadonlyNodeRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateGaussMySqlReadonlyNodeRequest::~CreateGaussMySqlReadonlyNodeRequest() = default;

void CreateGaussMySqlReadonlyNodeRequest::validate()
{
}

web::json::value CreateGaussMySqlReadonlyNodeRequest::toJson() const
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

bool CreateGaussMySqlReadonlyNodeRequest::fromJson(const web::json::value& val)
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
            MysqlCreateReadonlyNodeRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateGaussMySqlReadonlyNodeRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateGaussMySqlReadonlyNodeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateGaussMySqlReadonlyNodeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateGaussMySqlReadonlyNodeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateGaussMySqlReadonlyNodeRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateGaussMySqlReadonlyNodeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateGaussMySqlReadonlyNodeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateGaussMySqlReadonlyNodeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

MysqlCreateReadonlyNodeRequest CreateGaussMySqlReadonlyNodeRequest::getBody() const
{
    return body_;
}

void CreateGaussMySqlReadonlyNodeRequest::setBody(const MysqlCreateReadonlyNodeRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateGaussMySqlReadonlyNodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateGaussMySqlReadonlyNodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


