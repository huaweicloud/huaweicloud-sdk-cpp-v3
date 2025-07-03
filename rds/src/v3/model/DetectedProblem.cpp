

#include "huaweicloud/rds/v3/model/DetectedProblem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DetectedProblem::DetectedProblem()
{
    dbObject_ = "";
    dbObjectIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

DetectedProblem::~DetectedProblem() = default;

void DetectedProblem::validate()
{
}

web::json::value DetectedProblem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbObjectIsSet_) {
        val[utility::conversions::to_string_t("db_object")] = ModelBase::toJson(dbObject_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool DetectedProblem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_object"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_object"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbObject(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string DetectedProblem::getDbObject() const
{
    return dbObject_;
}

void DetectedProblem::setDbObject(const std::string& value)
{
    dbObject_ = value;
    dbObjectIsSet_ = true;
}

bool DetectedProblem::dbObjectIsSet() const
{
    return dbObjectIsSet_;
}

void DetectedProblem::unsetdbObject()
{
    dbObjectIsSet_ = false;
}

std::string DetectedProblem::getLevel() const
{
    return level_;
}

void DetectedProblem::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool DetectedProblem::levelIsSet() const
{
    return levelIsSet_;
}

void DetectedProblem::unsetlevel()
{
    levelIsSet_ = false;
}

std::string DetectedProblem::getDescription() const
{
    return description_;
}

void DetectedProblem::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DetectedProblem::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DetectedProblem::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


