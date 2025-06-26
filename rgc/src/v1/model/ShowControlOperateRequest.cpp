

#include "huaweicloud/rgc/v1/model/ShowControlOperateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowControlOperateRequest::ShowControlOperateRequest()
{
    operationControlStatusId_ = "";
    operationControlStatusIdIsSet_ = false;
}

ShowControlOperateRequest::~ShowControlOperateRequest() = default;

void ShowControlOperateRequest::validate()
{
}

web::json::value ShowControlOperateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationControlStatusIdIsSet_) {
        val[utility::conversions::to_string_t("operation_control_status_id")] = ModelBase::toJson(operationControlStatusId_);
    }

    return val;
}
bool ShowControlOperateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operation_control_status_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_control_status_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationControlStatusId(refVal);
        }
    }
    return ok;
}


std::string ShowControlOperateRequest::getOperationControlStatusId() const
{
    return operationControlStatusId_;
}

void ShowControlOperateRequest::setOperationControlStatusId(const std::string& value)
{
    operationControlStatusId_ = value;
    operationControlStatusIdIsSet_ = true;
}

bool ShowControlOperateRequest::operationControlStatusIdIsSet() const
{
    return operationControlStatusIdIsSet_;
}

void ShowControlOperateRequest::unsetoperationControlStatusId()
{
    operationControlStatusIdIsSet_ = false;
}

}
}
}
}
}


