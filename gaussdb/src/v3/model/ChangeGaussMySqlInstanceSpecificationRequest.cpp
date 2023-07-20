

#include "huaweicloud/gaussdb/v3/model/ChangeGaussMySqlInstanceSpecificationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChangeGaussMySqlInstanceSpecificationRequest::ChangeGaussMySqlInstanceSpecificationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeGaussMySqlInstanceSpecificationRequest::~ChangeGaussMySqlInstanceSpecificationRequest() = default;

void ChangeGaussMySqlInstanceSpecificationRequest::validate()
{
}

web::json::value ChangeGaussMySqlInstanceSpecificationRequest::toJson() const
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

bool ChangeGaussMySqlInstanceSpecificationRequest::fromJson(const web::json::value& val)
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
            MysqlChangeSpecificationRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ChangeGaussMySqlInstanceSpecificationRequest::getXLanguage() const
{
    return xLanguage_;
}

void ChangeGaussMySqlInstanceSpecificationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ChangeGaussMySqlInstanceSpecificationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ChangeGaussMySqlInstanceSpecificationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ChangeGaussMySqlInstanceSpecificationRequest::getInstanceId() const
{
    return instanceId_;
}

void ChangeGaussMySqlInstanceSpecificationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ChangeGaussMySqlInstanceSpecificationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ChangeGaussMySqlInstanceSpecificationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

MysqlChangeSpecificationRequest ChangeGaussMySqlInstanceSpecificationRequest::getBody() const
{
    return body_;
}

void ChangeGaussMySqlInstanceSpecificationRequest::setBody(const MysqlChangeSpecificationRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeGaussMySqlInstanceSpecificationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeGaussMySqlInstanceSpecificationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


