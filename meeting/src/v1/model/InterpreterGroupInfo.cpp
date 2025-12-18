

#include "huaweicloud/meeting/v1/model/InterpreterGroupInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




InterpreterGroupInfo::InterpreterGroupInfo()
{
    groupID_ = "";
    groupIDIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
    groupType_ = "";
    groupTypeIsSet_ = false;
    firstLanguage_ = "";
    firstLanguageIsSet_ = false;
    secondLanguage_ = "";
    secondLanguageIsSet_ = false;
    interpretersIsSet_ = false;
}

InterpreterGroupInfo::~InterpreterGroupInfo() = default;

void InterpreterGroupInfo::validate()
{
}

web::json::value InterpreterGroupInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIDIsSet_) {
        val[utility::conversions::to_string_t("groupID")] = ModelBase::toJson(groupID_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("groupName")] = ModelBase::toJson(groupName_);
    }
    if(groupTypeIsSet_) {
        val[utility::conversions::to_string_t("groupType")] = ModelBase::toJson(groupType_);
    }
    if(firstLanguageIsSet_) {
        val[utility::conversions::to_string_t("firstLanguage")] = ModelBase::toJson(firstLanguage_);
    }
    if(secondLanguageIsSet_) {
        val[utility::conversions::to_string_t("secondLanguage")] = ModelBase::toJson(secondLanguage_);
    }
    if(interpretersIsSet_) {
        val[utility::conversions::to_string_t("interpreters")] = ModelBase::toJson(interpreters_);
    }

    return val;
}
bool InterpreterGroupInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("groupID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groupID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("groupName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groupName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("groupType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groupType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("firstLanguage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firstLanguage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirstLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secondLanguage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secondLanguage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecondLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interpreters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interpreters"));
        if(!fieldValue.is_null())
        {
            std::vector<InterpreterInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterpreters(refVal);
        }
    }
    return ok;
}


std::string InterpreterGroupInfo::getGroupID() const
{
    return groupID_;
}

void InterpreterGroupInfo::setGroupID(const std::string& value)
{
    groupID_ = value;
    groupIDIsSet_ = true;
}

bool InterpreterGroupInfo::groupIDIsSet() const
{
    return groupIDIsSet_;
}

void InterpreterGroupInfo::unsetgroupID()
{
    groupIDIsSet_ = false;
}

std::string InterpreterGroupInfo::getGroupName() const
{
    return groupName_;
}

void InterpreterGroupInfo::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool InterpreterGroupInfo::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void InterpreterGroupInfo::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string InterpreterGroupInfo::getGroupType() const
{
    return groupType_;
}

void InterpreterGroupInfo::setGroupType(const std::string& value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool InterpreterGroupInfo::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void InterpreterGroupInfo::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

std::string InterpreterGroupInfo::getFirstLanguage() const
{
    return firstLanguage_;
}

void InterpreterGroupInfo::setFirstLanguage(const std::string& value)
{
    firstLanguage_ = value;
    firstLanguageIsSet_ = true;
}

bool InterpreterGroupInfo::firstLanguageIsSet() const
{
    return firstLanguageIsSet_;
}

void InterpreterGroupInfo::unsetfirstLanguage()
{
    firstLanguageIsSet_ = false;
}

std::string InterpreterGroupInfo::getSecondLanguage() const
{
    return secondLanguage_;
}

void InterpreterGroupInfo::setSecondLanguage(const std::string& value)
{
    secondLanguage_ = value;
    secondLanguageIsSet_ = true;
}

bool InterpreterGroupInfo::secondLanguageIsSet() const
{
    return secondLanguageIsSet_;
}

void InterpreterGroupInfo::unsetsecondLanguage()
{
    secondLanguageIsSet_ = false;
}

std::vector<InterpreterInfo>& InterpreterGroupInfo::getInterpreters()
{
    return interpreters_;
}

void InterpreterGroupInfo::setInterpreters(const std::vector<InterpreterInfo>& value)
{
    interpreters_ = value;
    interpretersIsSet_ = true;
}

bool InterpreterGroupInfo::interpretersIsSet() const
{
    return interpretersIsSet_;
}

void InterpreterGroupInfo::unsetinterpreters()
{
    interpretersIsSet_ = false;
}

}
}
}
}
}


