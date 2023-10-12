

#include "huaweicloud/ivs/v2/model/VideoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




VideoResult::VideoResult()
{
    alive_ = false;
    aliveIsSet_ = false;
    actionsIsSet_ = false;
    picture_ = "";
    pictureIsSet_ = false;
}

VideoResult::~VideoResult() = default;

void VideoResult::validate()
{
}

web::json::value VideoResult::toJson() const
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
bool VideoResult::fromJson(const web::json::value& val)
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


bool VideoResult::isAlive() const
{
    return alive_;
}

void VideoResult::setAlive(bool value)
{
    alive_ = value;
    aliveIsSet_ = true;
}

bool VideoResult::aliveIsSet() const
{
    return aliveIsSet_;
}

void VideoResult::unsetalive()
{
    aliveIsSet_ = false;
}

std::vector<ActionsList>& VideoResult::getActions()
{
    return actions_;
}

void VideoResult::setActions(const std::vector<ActionsList>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool VideoResult::actionsIsSet() const
{
    return actionsIsSet_;
}

void VideoResult::unsetactions()
{
    actionsIsSet_ = false;
}

std::string VideoResult::getPicture() const
{
    return picture_;
}

void VideoResult::setPicture(const std::string& value)
{
    picture_ = value;
    pictureIsSet_ = true;
}

bool VideoResult::pictureIsSet() const
{
    return pictureIsSet_;
}

void VideoResult::unsetpicture()
{
    pictureIsSet_ = false;
}

}
}
}
}
}


