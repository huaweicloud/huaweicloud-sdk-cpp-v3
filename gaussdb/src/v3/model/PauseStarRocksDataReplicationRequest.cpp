

#include "huaweicloud/gaussdb/v3/model/PauseStarRocksDataReplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




PauseStarRocksDataReplicationRequest::PauseStarRocksDataReplicationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

PauseStarRocksDataReplicationRequest::~PauseStarRocksDataReplicationRequest() = default;

void PauseStarRocksDataReplicationRequest::validate()
{
}

web::json::value PauseStarRocksDataReplicationRequest::toJson() const
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
bool PauseStarRocksDataReplicationRequest::fromJson(const web::json::value& val)
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
            PauseStarRocksDataReplication refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string PauseStarRocksDataReplicationRequest::getInstanceId() const
{
    return instanceId_;
}

void PauseStarRocksDataReplicationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool PauseStarRocksDataReplicationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void PauseStarRocksDataReplicationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string PauseStarRocksDataReplicationRequest::getXLanguage() const
{
    return xLanguage_;
}

void PauseStarRocksDataReplicationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool PauseStarRocksDataReplicationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void PauseStarRocksDataReplicationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

PauseStarRocksDataReplication PauseStarRocksDataReplicationRequest::getBody() const
{
    return body_;
}

void PauseStarRocksDataReplicationRequest::setBody(const PauseStarRocksDataReplication& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PauseStarRocksDataReplicationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void PauseStarRocksDataReplicationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


