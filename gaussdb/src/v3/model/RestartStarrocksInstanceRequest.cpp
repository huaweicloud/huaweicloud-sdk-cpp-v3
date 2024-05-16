

#include "huaweicloud/gaussdb/v3/model/RestartStarrocksInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RestartStarrocksInstanceRequest::RestartStarrocksInstanceRequest()
{
    starrocksInstanceId_ = "";
    starrocksInstanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

RestartStarrocksInstanceRequest::~RestartStarrocksInstanceRequest() = default;

void RestartStarrocksInstanceRequest::validate()
{
}

web::json::value RestartStarrocksInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(starrocksInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("starrocks_instance_id")] = ModelBase::toJson(starrocksInstanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool RestartStarrocksInstanceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string RestartStarrocksInstanceRequest::getStarrocksInstanceId() const
{
    return starrocksInstanceId_;
}

void RestartStarrocksInstanceRequest::setStarrocksInstanceId(const std::string& value)
{
    starrocksInstanceId_ = value;
    starrocksInstanceIdIsSet_ = true;
}

bool RestartStarrocksInstanceRequest::starrocksInstanceIdIsSet() const
{
    return starrocksInstanceIdIsSet_;
}

void RestartStarrocksInstanceRequest::unsetstarrocksInstanceId()
{
    starrocksInstanceIdIsSet_ = false;
}

std::string RestartStarrocksInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void RestartStarrocksInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RestartStarrocksInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RestartStarrocksInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


