

#include "huaweicloud/projectman/v4/model/CreateCustomfieldV1Req.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateCustomfieldV1Req::CreateCustomfieldV1Req()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    options_ = "";
    optionsIsSet_ = false;
    memo_ = "";
    memoIsSet_ = false;
    scrumType_ = "";
    scrumTypeIsSet_ = false;
}

CreateCustomfieldV1Req::~CreateCustomfieldV1Req() = default;

void CreateCustomfieldV1Req::validate()
{
}

web::json::value CreateCustomfieldV1Req::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(optionsIsSet_) {
        val[utility::conversions::to_string_t("options")] = ModelBase::toJson(options_);
    }
    if(memoIsSet_) {
        val[utility::conversions::to_string_t("memo")] = ModelBase::toJson(memo_);
    }
    if(scrumTypeIsSet_) {
        val[utility::conversions::to_string_t("scrum_type")] = ModelBase::toJson(scrumType_);
    }

    return val;
}
bool CreateCustomfieldV1Req::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("options"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scrum_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scrum_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScrumType(refVal);
        }
    }
    return ok;
}


std::string CreateCustomfieldV1Req::getName() const
{
    return name_;
}

void CreateCustomfieldV1Req::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateCustomfieldV1Req::nameIsSet() const
{
    return nameIsSet_;
}

void CreateCustomfieldV1Req::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateCustomfieldV1Req::getType() const
{
    return type_;
}

void CreateCustomfieldV1Req::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateCustomfieldV1Req::typeIsSet() const
{
    return typeIsSet_;
}

void CreateCustomfieldV1Req::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateCustomfieldV1Req::getOptions() const
{
    return options_;
}

void CreateCustomfieldV1Req::setOptions(const std::string& value)
{
    options_ = value;
    optionsIsSet_ = true;
}

bool CreateCustomfieldV1Req::optionsIsSet() const
{
    return optionsIsSet_;
}

void CreateCustomfieldV1Req::unsetoptions()
{
    optionsIsSet_ = false;
}

std::string CreateCustomfieldV1Req::getMemo() const
{
    return memo_;
}

void CreateCustomfieldV1Req::setMemo(const std::string& value)
{
    memo_ = value;
    memoIsSet_ = true;
}

bool CreateCustomfieldV1Req::memoIsSet() const
{
    return memoIsSet_;
}

void CreateCustomfieldV1Req::unsetmemo()
{
    memoIsSet_ = false;
}

std::string CreateCustomfieldV1Req::getScrumType() const
{
    return scrumType_;
}

void CreateCustomfieldV1Req::setScrumType(const std::string& value)
{
    scrumType_ = value;
    scrumTypeIsSet_ = true;
}

bool CreateCustomfieldV1Req::scrumTypeIsSet() const
{
    return scrumTypeIsSet_;
}

void CreateCustomfieldV1Req::unsetscrumType()
{
    scrumTypeIsSet_ = false;
}

}
}
}
}
}


