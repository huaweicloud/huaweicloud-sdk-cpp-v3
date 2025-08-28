

#include "huaweicloud/metastudio/v1/model/CreateInstructionLibraryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateInstructionLibraryResponse::CreateInstructionLibraryResponse()
{
    instructionLibraryId_ = "";
    instructionLibraryIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateInstructionLibraryResponse::~CreateInstructionLibraryResponse() = default;

void CreateInstructionLibraryResponse::validate()
{
}

web::json::value CreateInstructionLibraryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instructionLibraryIdIsSet_) {
        val[utility::conversions::to_string_t("instruction_library_id")] = ModelBase::toJson(instructionLibraryId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateInstructionLibraryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instruction_library_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instruction_library_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstructionLibraryId(refVal);
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


std::string CreateInstructionLibraryResponse::getInstructionLibraryId() const
{
    return instructionLibraryId_;
}

void CreateInstructionLibraryResponse::setInstructionLibraryId(const std::string& value)
{
    instructionLibraryId_ = value;
    instructionLibraryIdIsSet_ = true;
}

bool CreateInstructionLibraryResponse::instructionLibraryIdIsSet() const
{
    return instructionLibraryIdIsSet_;
}

void CreateInstructionLibraryResponse::unsetinstructionLibraryId()
{
    instructionLibraryIdIsSet_ = false;
}

std::string CreateInstructionLibraryResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateInstructionLibraryResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateInstructionLibraryResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateInstructionLibraryResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


