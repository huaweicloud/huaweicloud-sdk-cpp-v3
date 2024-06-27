

#include "huaweicloud/gaussdb/v3/model/RebootClickHouseInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RebootClickHouseInstanceRequest::RebootClickHouseInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

RebootClickHouseInstanceRequest::~RebootClickHouseInstanceRequest() = default;

void RebootClickHouseInstanceRequest::validate()
{
}

web::json::value RebootClickHouseInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool RebootClickHouseInstanceRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string RebootClickHouseInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void RebootClickHouseInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RebootClickHouseInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RebootClickHouseInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string RebootClickHouseInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void RebootClickHouseInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RebootClickHouseInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RebootClickHouseInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


