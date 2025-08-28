

#include "huaweicloud/metastudio/v1/model/CreateInstructionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateInstructionResponse::CreateInstructionResponse()
{
    instructionId_ = "";
    instructionIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateInstructionResponse::~CreateInstructionResponse() = default;

void CreateInstructionResponse::validate()
{
}

web::json::value CreateInstructionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instructionIdIsSet_) {
        val[utility::conversions::to_string_t("instruction_id")] = ModelBase::toJson(instructionId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateInstructionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instruction_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instruction_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstructionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string CreateInstructionResponse::getInstructionId() const
{
    return instructionId_;
}

void CreateInstructionResponse::setInstructionId(const std::string& value)
{
    instructionId_ = value;
    instructionIdIsSet_ = true;
}

bool CreateInstructionResponse::instructionIdIsSet() const
{
    return instructionIdIsSet_;
}

void CreateInstructionResponse::unsetinstructionId()
{
    instructionIdIsSet_ = false;
}

std::string CreateInstructionResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateInstructionResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateInstructionResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateInstructionResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


