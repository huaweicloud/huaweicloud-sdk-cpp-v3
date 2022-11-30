

#include "huaweicloud/frs/v2/model/LiveDetectResp_videoresult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




LiveDetectResp_videoresult::LiveDetectResp_videoresult()
{
    alive_ = false;
    aliveIsSet_ = false;
    actionsIsSet_ = false;
    picture_ = "";
    pictureIsSet_ = false;
}

LiveDetectResp_videoresult::~LiveDetectResp_videoresult() = default;

void LiveDetectResp_videoresult::validate()
{
}

web::json::value LiveDetectResp_videoresult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aliveIsSet_) {
        val[utility::conversions::to_string_t("alive")] = ModelBase::toJson(alive_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }
    if(pictureIsSet_) {
        val[utility::conversions::to_string_t("picture")] = ModelBase::toJson(picture_);
    }

    return val;
}

bool LiveDetectResp_videoresult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alive"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<ActionsList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("picture"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("picture"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPicture(refVal);
        }
    }
    return ok;
}


bool LiveDetectResp_videoresult::isAlive() const
{
    return alive_;
}

void LiveDetectResp_videoresult::setAlive(bool value)
{
    alive_ = value;
    aliveIsSet_ = true;
}

bool LiveDetectResp_videoresult::aliveIsSet() const
{
    return aliveIsSet_;
}

void LiveDetectResp_videoresult::unsetalive()
{
    aliveIsSet_ = false;
}

std::vector<ActionsList>& LiveDetectResp_videoresult::getActions()
{
    return actions_;
}

void LiveDetectResp_videoresult::setActions(const std::vector<ActionsList>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool LiveDetectResp_videoresult::actionsIsSet() const
{
    return actionsIsSet_;
}

void LiveDetectResp_videoresult::unsetactions()
{
    actionsIsSet_ = false;
}

std::string LiveDetectResp_videoresult::getPicture() const
{
    return picture_;
}

void LiveDetectResp_videoresult::setPicture(const std::string& value)
{
    picture_ = value;
    pictureIsSet_ = true;
}

bool LiveDetectResp_videoresult::pictureIsSet() const
{
    return pictureIsSet_;
}

void LiveDetectResp_videoresult::unsetpicture()
{
    pictureIsSet_ = false;
}

}
}
}
}
}


