

#include "huaweicloud/meeting/v1/model/CreateProgramRequestDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CreateProgramRequestDTO::CreateProgramRequestDTO()
{
    programName_ = "";
    programNameIsSet_ = false;
    programItemListIsSet_ = false;
}

CreateProgramRequestDTO::~CreateProgramRequestDTO() = default;

void CreateProgramRequestDTO::validate()
{
}

web::json::value CreateProgramRequestDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(programNameIsSet_) {
        val[utility::conversions::to_string_t("programName")] = ModelBase::toJson(programName_);
    }
    if(programItemListIsSet_) {
        val[utility::conversions::to_string_t("programItemList")] = ModelBase::toJson(programItemList_);
    }

    return val;
}
bool CreateProgramRequestDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("programName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("programName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgramName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("programItemList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("programItemList"));
        if(!fieldValue.is_null())
        {
            std::vector<ProgramItemRequestBase> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgramItemList(refVal);
        }
    }
    return ok;
}


std::string CreateProgramRequestDTO::getProgramName() const
{
    return programName_;
}

void CreateProgramRequestDTO::setProgramName(const std::string& value)
{
    programName_ = value;
    programNameIsSet_ = true;
}

bool CreateProgramRequestDTO::programNameIsSet() const
{
    return programNameIsSet_;
}

void CreateProgramRequestDTO::unsetprogramName()
{
    programNameIsSet_ = false;
}

std::vector<ProgramItemRequestBase>& CreateProgramRequestDTO::getProgramItemList()
{
    return programItemList_;
}

void CreateProgramRequestDTO::setProgramItemList(const std::vector<ProgramItemRequestBase>& value)
{
    programItemList_ = value;
    programItemListIsSet_ = true;
}

bool CreateProgramRequestDTO::programItemListIsSet() const
{
    return programItemListIsSet_;
}

void CreateProgramRequestDTO::unsetprogramItemList()
{
    programItemListIsSet_ = false;
}

}
}
}
}
}


