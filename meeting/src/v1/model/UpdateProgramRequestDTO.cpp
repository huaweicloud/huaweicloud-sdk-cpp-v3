

#include "huaweicloud/meeting/v1/model/UpdateProgramRequestDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateProgramRequestDTO::UpdateProgramRequestDTO()
{
    programName_ = "";
    programNameIsSet_ = false;
    programItemListIsSet_ = false;
}

UpdateProgramRequestDTO::~UpdateProgramRequestDTO() = default;

void UpdateProgramRequestDTO::validate()
{
}

web::json::value UpdateProgramRequestDTO::toJson() const
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
bool UpdateProgramRequestDTO::fromJson(const web::json::value& val)
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


std::string UpdateProgramRequestDTO::getProgramName() const
{
    return programName_;
}

void UpdateProgramRequestDTO::setProgramName(const std::string& value)
{
    programName_ = value;
    programNameIsSet_ = true;
}

bool UpdateProgramRequestDTO::programNameIsSet() const
{
    return programNameIsSet_;
}

void UpdateProgramRequestDTO::unsetprogramName()
{
    programNameIsSet_ = false;
}

std::vector<ProgramItemRequestBase>& UpdateProgramRequestDTO::getProgramItemList()
{
    return programItemList_;
}

void UpdateProgramRequestDTO::setProgramItemList(const std::vector<ProgramItemRequestBase>& value)
{
    programItemList_ = value;
    programItemListIsSet_ = true;
}

bool UpdateProgramRequestDTO::programItemListIsSet() const
{
    return programItemListIsSet_;
}

void UpdateProgramRequestDTO::unsetprogramItemList()
{
    programItemListIsSet_ = false;
}

}
}
}
}
}


