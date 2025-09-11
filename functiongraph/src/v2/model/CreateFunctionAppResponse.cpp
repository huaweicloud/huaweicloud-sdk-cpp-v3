

#include "huaweicloud/functiongraph/v2/model/CreateFunctionAppResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateFunctionAppResponse::CreateFunctionAppResponse()
{
    applicationId_ = "";
    applicationIdIsSet_ = false;
}

CreateFunctionAppResponse::~CreateFunctionAppResponse() = default;

void CreateFunctionAppResponse::validate()
{
}

web::json::value CreateFunctionAppResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationIdIsSet_) {
        val[utility::conversions::to_string_t("application_id")] = ModelBase::toJson(applicationId_);
    }

    return val;
}
bool CreateFunctionAppResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationId(refVal);
        }
    }
    return ok;
}


std::string CreateFunctionAppResponse::getApplicationId() const
{
    return applicationId_;
}

void CreateFunctionAppResponse::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool CreateFunctionAppResponse::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void CreateFunctionAppResponse::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

}
}
}
}
}


