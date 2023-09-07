

#include "huaweicloud/drs/v5/model/ModifyStartPositionReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ModifyStartPositionReq::ModifyStartPositionReq()
{
    fileAndPosition_ = "";
    fileAndPositionIsSet_ = false;
    gtidSet_ = "";
    gtidSetIsSet_ = false;
}

ModifyStartPositionReq::~ModifyStartPositionReq() = default;

void ModifyStartPositionReq::validate()
{
}

web::json::value ModifyStartPositionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileAndPositionIsSet_) {
        val[utility::conversions::to_string_t("file_and_position")] = ModelBase::toJson(fileAndPosition_);
    }
    if(gtidSetIsSet_) {
        val[utility::conversions::to_string_t("gtid_set")] = ModelBase::toJson(gtidSet_);
    }

    return val;
}

bool ModifyStartPositionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_and_position"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_and_position"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileAndPosition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gtid_set"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gtid_set"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGtidSet(refVal);
        }
    }
    return ok;
}

std::string ModifyStartPositionReq::getFileAndPosition() const
{
    return fileAndPosition_;
}

void ModifyStartPositionReq::setFileAndPosition(const std::string& value)
{
    fileAndPosition_ = value;
    fileAndPositionIsSet_ = true;
}

bool ModifyStartPositionReq::fileAndPositionIsSet() const
{
    return fileAndPositionIsSet_;
}

void ModifyStartPositionReq::unsetfileAndPosition()
{
    fileAndPositionIsSet_ = false;
}

std::string ModifyStartPositionReq::getGtidSet() const
{
    return gtidSet_;
}

void ModifyStartPositionReq::setGtidSet(const std::string& value)
{
    gtidSet_ = value;
    gtidSetIsSet_ = true;
}

bool ModifyStartPositionReq::gtidSetIsSet() const
{
    return gtidSetIsSet_;
}

void ModifyStartPositionReq::unsetgtidSet()
{
    gtidSetIsSet_ = false;
}

}
}
}
}
}


