

#include "huaweicloud/gaussdbforopengauss/v3/model/ConfirmRestoredDataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ConfirmRestoredDataRequest::ConfirmRestoredDataRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ConfirmRestoredDataRequest::~ConfirmRestoredDataRequest() = default;

void ConfirmRestoredDataRequest::validate()
{
}

web::json::value ConfirmRestoredDataRequest::toJson() const
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
bool ConfirmRestoredDataRequest::fromJson(const web::json::value& val)
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


std::string ConfirmRestoredDataRequest::getXLanguage() const
{
    return xLanguage_;
}

void ConfirmRestoredDataRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ConfirmRestoredDataRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ConfirmRestoredDataRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ConfirmRestoredDataRequest::getInstanceId() const
{
    return instanceId_;
}

void ConfirmRestoredDataRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ConfirmRestoredDataRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ConfirmRestoredDataRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


