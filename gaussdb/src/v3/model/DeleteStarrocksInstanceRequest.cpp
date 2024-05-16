

#include "huaweicloud/gaussdb/v3/model/DeleteStarrocksInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteStarrocksInstanceRequest::DeleteStarrocksInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    starrocksInstanceId_ = "";
    starrocksInstanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

DeleteStarrocksInstanceRequest::~DeleteStarrocksInstanceRequest() = default;

void DeleteStarrocksInstanceRequest::validate()
{
}

web::json::value DeleteStarrocksInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(starrocksInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("starrocks_instance_id")] = ModelBase::toJson(starrocksInstanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool DeleteStarrocksInstanceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("starrocks_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("starrocks_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStarrocksInstanceId(refVal);
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


std::string DeleteStarrocksInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteStarrocksInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteStarrocksInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteStarrocksInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteStarrocksInstanceRequest::getStarrocksInstanceId() const
{
    return starrocksInstanceId_;
}

void DeleteStarrocksInstanceRequest::setStarrocksInstanceId(const std::string& value)
{
    starrocksInstanceId_ = value;
    starrocksInstanceIdIsSet_ = true;
}

bool DeleteStarrocksInstanceRequest::starrocksInstanceIdIsSet() const
{
    return starrocksInstanceIdIsSet_;
}

void DeleteStarrocksInstanceRequest::unsetstarrocksInstanceId()
{
    starrocksInstanceIdIsSet_ = false;
}

std::string DeleteStarrocksInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteStarrocksInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteStarrocksInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteStarrocksInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


