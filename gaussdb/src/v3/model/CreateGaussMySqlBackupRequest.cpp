

#include "huaweicloud/gaussdb/v3/model/CreateGaussMySqlBackupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateGaussMySqlBackupRequest::CreateGaussMySqlBackupRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateGaussMySqlBackupRequest::~CreateGaussMySqlBackupRequest() = default;

void CreateGaussMySqlBackupRequest::validate()
{
}

web::json::value CreateGaussMySqlBackupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateGaussMySqlBackupRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            MysqlCreateBackupRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateGaussMySqlBackupRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateGaussMySqlBackupRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateGaussMySqlBackupRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateGaussMySqlBackupRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

MysqlCreateBackupRequest CreateGaussMySqlBackupRequest::getBody() const
{
    return body_;
}

void CreateGaussMySqlBackupRequest::setBody(const MysqlCreateBackupRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateGaussMySqlBackupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateGaussMySqlBackupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


