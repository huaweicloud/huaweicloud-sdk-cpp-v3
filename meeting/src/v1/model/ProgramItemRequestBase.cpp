

#include "huaweicloud/meeting/v1/model/ProgramItemRequestBase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ProgramItemRequestBase::ProgramItemRequestBase()
{
    materialId_ = "";
    materialIdIsSet_ = false;
    playTime_ = 0;
    playTimeIsSet_ = false;
}

ProgramItemRequestBase::~ProgramItemRequestBase() = default;

void ProgramItemRequestBase::validate()
{
}

web::json::value ProgramItemRequestBase::toJson() const
{
    web::json::value val = web::json::value::object();

    if(materialIdIsSet_) {
        val[utility::conversions::to_string_t("materialId")] = ModelBase::toJson(materialId_);
    }
    if(playTimeIsSet_) {
        val[utility::conversions::to_string_t("playTime")] = ModelBase::toJson(playTime_);
    }

    return val;
}
bool ProgramItemRequestBase::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("materialId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("materialId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaterialId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("playTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("playTime"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlayTime(refVal);
        }
    }
    return ok;
}


std::string ProgramItemRequestBase::getMaterialId() const
{
    return materialId_;
}

void ProgramItemRequestBase::setMaterialId(const std::string& value)
{
    materialId_ = value;
    materialIdIsSet_ = true;
}

bool ProgramItemRequestBase::materialIdIsSet() const
{
    return materialIdIsSet_;
}

void ProgramItemRequestBase::unsetmaterialId()
{
    materialIdIsSet_ = false;
}

int32_t ProgramItemRequestBase::getPlayTime() const
{
    return playTime_;
}

void ProgramItemRequestBase::setPlayTime(int32_t value)
{
    playTime_ = value;
    playTimeIsSet_ = true;
}

bool ProgramItemRequestBase::playTimeIsSet() const
{
    return playTimeIsSet_;
}

void ProgramItemRequestBase::unsetplayTime()
{
    playTimeIsSet_ = false;
}

}
}
}
}
}


