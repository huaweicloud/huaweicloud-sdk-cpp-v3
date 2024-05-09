

#include "huaweicloud/gaussdb/v3/model/CreateStarRocksDataReplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateStarRocksDataReplicationRequest::CreateStarRocksDataReplicationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

CreateStarRocksDataReplicationRequest::~CreateStarRocksDataReplicationRequest() = default;

void CreateStarRocksDataReplicationRequest::validate()
{
}

web::json::value CreateStarRocksDataReplicationRequest::toJson() const
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
bool CreateStarRocksDataReplicationRequest::fromJson(const web::json::value& val)
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
            CreateStarRocksDataReplication refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateStarRocksDataReplicationRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateStarRocksDataReplicationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateStarRocksDataReplicationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateStarRocksDataReplicationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateStarRocksDataReplicationRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateStarRocksDataReplicationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateStarRocksDataReplicationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateStarRocksDataReplicationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CreateStarRocksDataReplication CreateStarRocksDataReplicationRequest::getBody() const
{
    return body_;
}

void CreateStarRocksDataReplicationRequest::setBody(const CreateStarRocksDataReplication& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateStarRocksDataReplicationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateStarRocksDataReplicationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


