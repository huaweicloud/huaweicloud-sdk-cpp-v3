

#include "huaweicloud/modelarts/v1/model/ShowTrainingQuotasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowTrainingQuotasRequest::ShowTrainingQuotasRequest()
{
    userId_ = "";
    userIdIsSet_ = false;
    resource_ = "";
    resourceIsSet_ = false;
}

ShowTrainingQuotasRequest::~ShowTrainingQuotasRequest() = default;

void ShowTrainingQuotasRequest::validate()
{
}

web::json::value ShowTrainingQuotasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }

    return val;
}
bool ShowTrainingQuotasRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    return ok;
}


std::string ShowTrainingQuotasRequest::getUserId() const
{
    return userId_;
}

void ShowTrainingQuotasRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ShowTrainingQuotasRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void ShowTrainingQuotasRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string ShowTrainingQuotasRequest::getResource() const
{
    return resource_;
}

void ShowTrainingQuotasRequest::setResource(const std::string& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool ShowTrainingQuotasRequest::resourceIsSet() const
{
    return resourceIsSet_;
}

void ShowTrainingQuotasRequest::unsetresource()
{
    resourceIsSet_ = false;
}

}
}
}
}
}


