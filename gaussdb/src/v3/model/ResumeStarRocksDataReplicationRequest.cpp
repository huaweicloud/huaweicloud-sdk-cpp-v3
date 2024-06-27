

#include "huaweicloud/gaussdb/v3/model/ResumeStarRocksDataReplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ResumeStarRocksDataReplicationRequest::ResumeStarRocksDataReplicationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ResumeStarRocksDataReplicationRequest::~ResumeStarRocksDataReplicationRequest() = default;

void ResumeStarRocksDataReplicationRequest::validate()
{
}

web::json::value ResumeStarRocksDataReplicationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ResumeStarRocksDataReplicationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
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
            ResumeStarRocksDataReplication refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResumeStarRocksDataReplicationRequest::getInstanceId() const
{
    return instanceId_;
}

void ResumeStarRocksDataReplicationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ResumeStarRocksDataReplicationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ResumeStarRocksDataReplicationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ResumeStarRocksDataReplicationRequest::getXLanguage() const
{
    return xLanguage_;
}

void ResumeStarRocksDataReplicationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ResumeStarRocksDataReplicationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ResumeStarRocksDataReplicationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ResumeStarRocksDataReplication ResumeStarRocksDataReplicationRequest::getBody() const
{
    return body_;
}

void ResumeStarRocksDataReplicationRequest::setBody(const ResumeStarRocksDataReplication& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResumeStarRocksDataReplicationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResumeStarRocksDataReplicationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


