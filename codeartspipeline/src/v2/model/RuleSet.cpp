

#include "huaweicloud/codeartspipeline/v2/model/RuleSet.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RuleSet::RuleSet()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    operator_ = "";
    operatorIsSet_ = false;
    operateTime_ = 0L;
    operateTimeIsSet_ = false;
    isValid_ = false;
    isValidIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    isPublic_ = false;
    isPublicIsSet_ = false;
    isLegacy_ = false;
    isLegacyIsSet_ = false;
}

RuleSet::~RuleSet() = default;

void RuleSet::validate()
{
}

web::json::value RuleSet::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }
    if(operateTimeIsSet_) {
        val[utility::conversions::to_string_t("operate_time")] = ModelBase::toJson(operateTime_);
    }
    if(isValidIsSet_) {
        val[utility::conversions::to_string_t("is_valid")] = ModelBase::toJson(isValid_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(isPublicIsSet_) {
        val[utility::conversions::to_string_t("is_public")] = ModelBase::toJson(isPublic_);
    }
    if(isLegacyIsSet_) {
        val[utility::conversions::to_string_t("is_legacy")] = ModelBase::toJson(isLegacy_);
    }

    return val;
}
bool RuleSet::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_valid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_valid"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsValid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_public"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_public"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPublic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_legacy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_legacy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsLegacy(refVal);
        }
    }
    return ok;
}


std::string RuleSet::getId() const
{
    return id_;
}

void RuleSet::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RuleSet::idIsSet() const
{
    return idIsSet_;
}

void RuleSet::unsetid()
{
    idIsSet_ = false;
}

std::string RuleSet::getName() const
{
    return name_;
}

void RuleSet::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RuleSet::nameIsSet() const
{
    return nameIsSet_;
}

void RuleSet::unsetname()
{
    nameIsSet_ = false;
}

std::string RuleSet::getType() const
{
    return type_;
}

void RuleSet::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RuleSet::typeIsSet() const
{
    return typeIsSet_;
}

void RuleSet::unsettype()
{
    typeIsSet_ = false;
}

std::string RuleSet::getVersion() const
{
    return version_;
}

void RuleSet::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool RuleSet::versionIsSet() const
{
    return versionIsSet_;
}

void RuleSet::unsetversion()
{
    versionIsSet_ = false;
}

std::string RuleSet::getOperator() const
{
    return operator_;
}

void RuleSet::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool RuleSet::operatorIsSet() const
{
    return operatorIsSet_;
}

void RuleSet::unsetoperator()
{
    operatorIsSet_ = false;
}

int64_t RuleSet::getOperateTime() const
{
    return operateTime_;
}

void RuleSet::setOperateTime(int64_t value)
{
    operateTime_ = value;
    operateTimeIsSet_ = true;
}

bool RuleSet::operateTimeIsSet() const
{
    return operateTimeIsSet_;
}

void RuleSet::unsetoperateTime()
{
    operateTimeIsSet_ = false;
}

bool RuleSet::isIsValid() const
{
    return isValid_;
}

void RuleSet::setIsValid(bool value)
{
    isValid_ = value;
    isValidIsSet_ = true;
}

bool RuleSet::isValidIsSet() const
{
    return isValidIsSet_;
}

void RuleSet::unsetisValid()
{
    isValidIsSet_ = false;
}

std::string RuleSet::getLevel() const
{
    return level_;
}

void RuleSet::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool RuleSet::levelIsSet() const
{
    return levelIsSet_;
}

void RuleSet::unsetlevel()
{
    levelIsSet_ = false;
}

bool RuleSet::isIsPublic() const
{
    return isPublic_;
}

void RuleSet::setIsPublic(bool value)
{
    isPublic_ = value;
    isPublicIsSet_ = true;
}

bool RuleSet::isPublicIsSet() const
{
    return isPublicIsSet_;
}

void RuleSet::unsetisPublic()
{
    isPublicIsSet_ = false;
}

bool RuleSet::isIsLegacy() const
{
    return isLegacy_;
}

void RuleSet::setIsLegacy(bool value)
{
    isLegacy_ = value;
    isLegacyIsSet_ = true;
}

bool RuleSet::isLegacyIsSet() const
{
    return isLegacyIsSet_;
}

void RuleSet::unsetisLegacy()
{
    isLegacyIsSet_ = false;
}

}
}
}
}
}


