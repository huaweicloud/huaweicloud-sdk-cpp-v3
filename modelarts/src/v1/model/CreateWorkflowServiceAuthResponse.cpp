

#include "huaweicloud/modelarts/v1/model/CreateWorkflowServiceAuthResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateWorkflowServiceAuthResponse::CreateWorkflowServiceAuthResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

CreateWorkflowServiceAuthResponse::~CreateWorkflowServiceAuthResponse() = default;

void CreateWorkflowServiceAuthResponse::validate()
{
}

web::json::value CreateWorkflowServiceAuthResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool CreateWorkflowServiceAuthResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string CreateWorkflowServiceAuthResponse::getResult() const
{
    return result_;
}

void CreateWorkflowServiceAuthResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateWorkflowServiceAuthResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateWorkflowServiceAuthResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


