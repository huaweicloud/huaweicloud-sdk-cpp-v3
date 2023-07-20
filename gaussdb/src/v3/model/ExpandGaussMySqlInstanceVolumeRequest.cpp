

#include "huaweicloud/gaussdb/v3/model/ExpandGaussMySqlInstanceVolumeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ExpandGaussMySqlInstanceVolumeRequest::ExpandGaussMySqlInstanceVolumeRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExpandGaussMySqlInstanceVolumeRequest::~ExpandGaussMySqlInstanceVolumeRequest() = default;

void ExpandGaussMySqlInstanceVolumeRequest::validate()
{
}

web::json::value ExpandGaussMySqlInstanceVolumeRequest::toJson() const
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

bool ExpandGaussMySqlInstanceVolumeRequest::fromJson(const web::json::value& val)
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
            MysqlExtendInstanceVolumeRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ExpandGaussMySqlInstanceVolumeRequest::getXLanguage() const
{
    return xLanguage_;
}

void ExpandGaussMySqlInstanceVolumeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ExpandGaussMySqlInstanceVolumeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ExpandGaussMySqlInstanceVolumeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ExpandGaussMySqlInstanceVolumeRequest::getInstanceId() const
{
    return instanceId_;
}

void ExpandGaussMySqlInstanceVolumeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ExpandGaussMySqlInstanceVolumeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ExpandGaussMySqlInstanceVolumeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

MysqlExtendInstanceVolumeRequest ExpandGaussMySqlInstanceVolumeRequest::getBody() const
{
    return body_;
}

void ExpandGaussMySqlInstanceVolumeRequest::setBody(const MysqlExtendInstanceVolumeRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExpandGaussMySqlInstanceVolumeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExpandGaussMySqlInstanceVolumeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


