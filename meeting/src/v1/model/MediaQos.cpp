

#include "huaweicloud/meeting/v1/model/MediaQos.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




MediaQos::MediaQos()
{
    upListIsSet_ = false;
    downListIsSet_ = false;
}

MediaQos::~MediaQos() = default;

void MediaQos::validate()
{
}

web::json::value MediaQos::toJson() const
{
    web::json::value val = web::json::value::object();

    if(upListIsSet_) {
        val[utility::conversions::to_string_t("upList")] = ModelBase::toJson(upList_);
    }
    if(downListIsSet_) {
        val[utility::conversions::to_string_t("downList")] = ModelBase::toJson(downList_);
    }

    return val;
}
bool MediaQos::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("upList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upList"));
        if(!fieldValue.is_null())
        {
            std::vector<Qos> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("downList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("downList"));
        if(!fieldValue.is_null())
        {
            std::vector<Qos> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownList(refVal);
        }
    }
    return ok;
}


std::vector<Qos>& MediaQos::getUpList()
{
    return upList_;
}

void MediaQos::setUpList(const std::vector<Qos>& value)
{
    upList_ = value;
    upListIsSet_ = true;
}

bool MediaQos::upListIsSet() const
{
    return upListIsSet_;
}

void MediaQos::unsetupList()
{
    upListIsSet_ = false;
}

std::vector<Qos>& MediaQos::getDownList()
{
    return downList_;
}

void MediaQos::setDownList(const std::vector<Qos>& value)
{
    downList_ = value;
    downListIsSet_ = true;
}

bool MediaQos::downListIsSet() const
{
    return downListIsSet_;
}

void MediaQos::unsetdownList()
{
    downListIsSet_ = false;
}

}
}
}
}
}


