

#include "huaweicloud/iotda/v5/model/DeleteFunctionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteFunctionsRequest::DeleteFunctionsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    functionId_ = "";
    functionIdIsSet_ = false;
}

DeleteFunctionsRequest::~DeleteFunctionsRequest() = default;

void DeleteFunctionsRequest::validate()
{
}

web::json::value DeleteFunctionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(functionIdIsSet_) {
        val[utility::conversions::to_string_t("function_id")] = ModelBase::toJson(functionId_);
    }

    return val;
}
bool DeleteFunctionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("function_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("function_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctionId(refVal);
        }
    }
    return ok;
}


std::string DeleteFunctionsRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteFunctionsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteFunctionsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteFunctionsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteFunctionsRequest::getFunctionId() const
{
    return functionId_;
}

void DeleteFunctionsRequest::setFunctionId(const std::string& value)
{
    functionId_ = value;
    functionIdIsSet_ = true;
}

bool DeleteFunctionsRequest::functionIdIsSet() const
{
    return functionIdIsSet_;
}

void DeleteFunctionsRequest::unsetfunctionId()
{
    functionIdIsSet_ = false;
}

}
}
}
}
}


