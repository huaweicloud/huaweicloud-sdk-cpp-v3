

#include "huaweicloud/rds/v3/model/DeleteInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteInstanceRequest::DeleteInstanceRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

DeleteInstanceRequest::~DeleteInstanceRequest() = default;

void DeleteInstanceRequest::validate()
{
}

web::json::value DeleteInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool DeleteInstanceRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteInstanceRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteInstanceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteInstanceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteInstanceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


