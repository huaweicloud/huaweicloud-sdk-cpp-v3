

#include "huaweicloud/metastudio/v1/model/CreateHotWordsReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateHotWordsReq::CreateHotWordsReq()
{
    hotWordsTypeIsSet_ = false;
    robotId_ = "";
    robotIdIsSet_ = false;
    sisHotWordsIsSet_ = false;
}

CreateHotWordsReq::~CreateHotWordsReq() = default;

void CreateHotWordsReq::validate()
{
}

web::json::value CreateHotWordsReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hotWordsTypeIsSet_) {
        val[utility::conversions::to_string_t("hot_words_type")] = ModelBase::toJson(hotWordsType_);
    }
    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }
    if(sisHotWordsIsSet_) {
        val[utility::conversions::to_string_t("sis_hot_words")] = ModelBase::toJson(sisHotWords_);
    }

    return val;
}
bool CreateHotWordsReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hot_words_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hot_words_type"));
        if(!fieldValue.is_null())
        {
            HotWordsTypeEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotWordsType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("robot_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("robot_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRobotId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sis_hot_words"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sis_hot_words"));
        if(!fieldValue.is_null())
        {
            CreateSisHotWords refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSisHotWords(refVal);
        }
    }
    return ok;
}


HotWordsTypeEnum CreateHotWordsReq::getHotWordsType() const
{
    return hotWordsType_;
}

void CreateHotWordsReq::setHotWordsType(const HotWordsTypeEnum& value)
{
    hotWordsType_ = value;
    hotWordsTypeIsSet_ = true;
}

bool CreateHotWordsReq::hotWordsTypeIsSet() const
{
    return hotWordsTypeIsSet_;
}

void CreateHotWordsReq::unsethotWordsType()
{
    hotWordsTypeIsSet_ = false;
}

std::string CreateHotWordsReq::getRobotId() const
{
    return robotId_;
}

void CreateHotWordsReq::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool CreateHotWordsReq::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void CreateHotWordsReq::unsetrobotId()
{
    robotIdIsSet_ = false;
}

CreateSisHotWords CreateHotWordsReq::getSisHotWords() const
{
    return sisHotWords_;
}

void CreateHotWordsReq::setSisHotWords(const CreateSisHotWords& value)
{
    sisHotWords_ = value;
    sisHotWordsIsSet_ = true;
}

bool CreateHotWordsReq::sisHotWordsIsSet() const
{
    return sisHotWordsIsSet_;
}

void CreateHotWordsReq::unsetsisHotWords()
{
    sisHotWordsIsSet_ = false;
}

}
}
}
}
}


