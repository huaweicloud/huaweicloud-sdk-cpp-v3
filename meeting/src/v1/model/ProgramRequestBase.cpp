

#include "huaweicloud/meeting/v1/model/ProgramRequestBase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ProgramRequestBase::ProgramRequestBase()
{
    programName_ = "";
    programNameIsSet_ = false;
}

ProgramRequestBase::~ProgramRequestBase() = default;

void ProgramRequestBase::validate()
{
}

web::json::value ProgramRequestBase::toJson() const
{
    web::json::value val = web::json::value::object();

    if(programNameIsSet_) {
        val[utility::conversions::to_string_t("programName")] = ModelBase::toJson(programName_);
    }

    return val;
}
bool ProgramRequestBase::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ProgramRequestBase::getProgramName() const
{
    return programName_;
}

void ProgramRequestBase::setProgramName(const std::string& value)
{
    programName_ = value;
    programNameIsSet_ = true;
}

bool ProgramRequestBase::programNameIsSet() const
{
    return programNameIsSet_;
}

void ProgramRequestBase::unsetprogramName()
{
    programNameIsSet_ = false;
}

}
}
}
}
}


