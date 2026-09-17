

#include "huaweicloud/projectman/v4/model/CompleteSprintVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CompleteSprintVO::CompleteSprintVO()
{
    operate_ = "";
    operateIsSet_ = false;
    moveToSprintId_ = "";
    moveToSprintIdIsSet_ = false;
}

CompleteSprintVO::~CompleteSprintVO() = default;

void CompleteSprintVO::validate()
{
}

web::json::value CompleteSprintVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operateIsSet_) {
        val[utility::conversions::to_string_t("operate")] = ModelBase::toJson(operate_);
    }
    if(moveToSprintIdIsSet_) {
        val[utility::conversions::to_string_t("move_to_sprint_id")] = ModelBase::toJson(moveToSprintId_);
    }

    return val;
}
bool CompleteSprintVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("move_to_sprint_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("move_to_sprint_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMoveToSprintId(refVal);
        }
    }
    return ok;
}


std::string CompleteSprintVO::getOperate() const
{
    return operate_;
}

void CompleteSprintVO::setOperate(const std::string& value)
{
    operate_ = value;
    operateIsSet_ = true;
}

bool CompleteSprintVO::operateIsSet() const
{
    return operateIsSet_;
}

void CompleteSprintVO::unsetoperate()
{
    operateIsSet_ = false;
}

std::string CompleteSprintVO::getMoveToSprintId() const
{
    return moveToSprintId_;
}

void CompleteSprintVO::setMoveToSprintId(const std::string& value)
{
    moveToSprintId_ = value;
    moveToSprintIdIsSet_ = true;
}

bool CompleteSprintVO::moveToSprintIdIsSet() const
{
    return moveToSprintIdIsSet_;
}

void CompleteSprintVO::unsetmoveToSprintId()
{
    moveToSprintIdIsSet_ = false;
}

}
}
}
}
}


