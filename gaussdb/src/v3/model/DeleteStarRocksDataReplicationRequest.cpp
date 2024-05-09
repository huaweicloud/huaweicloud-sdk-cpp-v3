

#include "huaweicloud/gaussdb/v3/model/DeleteStarRocksDataReplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteStarRocksDataReplicationRequest::DeleteStarRocksDataReplicationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteStarRocksDataReplicationRequest::~DeleteStarRocksDataReplicationRequest() = default;

void DeleteStarRocksDataReplicationRequest::validate()
{
}

web::json::value DeleteStarRocksDataReplicationRequest::toJson() const
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
bool DeleteStarRocksDataReplicationRequest::fromJson(const web::json::value& val)
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
            DeleteStarRocksDataReplication refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteStarRocksDataReplicationRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteStarRocksDataReplicationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteStarRocksDataReplicationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteStarRocksDataReplicationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteStarRocksDataReplicationRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteStarRocksDataReplicationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteStarRocksDataReplicationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteStarRocksDataReplicationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

DeleteStarRocksDataReplication DeleteStarRocksDataReplicationRequest::getBody() const
{
    return body_;
}

void DeleteStarRocksDataReplicationRequest::setBody(const DeleteStarRocksDataReplication& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteStarRocksDataReplicationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteStarRocksDataReplicationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


