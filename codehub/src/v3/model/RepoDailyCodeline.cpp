

#include "huaweicloud/codehub/v3/model/RepoDailyCodeline.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




RepoDailyCodeline::RepoDailyCodeline()
{
    additions_ = 0;
    additionsIsSet_ = false;
    date_ = "";
    dateIsSet_ = false;
    deletions_ = 0;
    deletionsIsSet_ = false;
}

RepoDailyCodeline::~RepoDailyCodeline() = default;

void RepoDailyCodeline::validate()
{
}

web::json::value RepoDailyCodeline::toJson() const
{
    web::json::value val = web::json::value::object();

    if(additionsIsSet_) {
        val[utility::conversions::to_string_t("additions")] = ModelBase::toJson(additions_);
    }
    if(dateIsSet_) {
        val[utility::conversions::to_string_t("date")] = ModelBase::toJson(date_);
    }
    if(deletionsIsSet_) {
        val[utility::conversions::to_string_t("deletions")] = ModelBase::toJson(deletions_);
    }

    return val;
}
bool RepoDailyCodeline::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("additions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("additions"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdditions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deletions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deletions"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeletions(refVal);
        }
    }
    return ok;
}


int32_t RepoDailyCodeline::getAdditions() const
{
    return additions_;
}

void RepoDailyCodeline::setAdditions(int32_t value)
{
    additions_ = value;
    additionsIsSet_ = true;
}

bool RepoDailyCodeline::additionsIsSet() const
{
    return additionsIsSet_;
}

void RepoDailyCodeline::unsetadditions()
{
    additionsIsSet_ = false;
}

std::string RepoDailyCodeline::getDate() const
{
    return date_;
}

void RepoDailyCodeline::setDate(const std::string& value)
{
    date_ = value;
    dateIsSet_ = true;
}

bool RepoDailyCodeline::dateIsSet() const
{
    return dateIsSet_;
}

void RepoDailyCodeline::unsetdate()
{
    dateIsSet_ = false;
}

int32_t RepoDailyCodeline::getDeletions() const
{
    return deletions_;
}

void RepoDailyCodeline::setDeletions(int32_t value)
{
    deletions_ = value;
    deletionsIsSet_ = true;
}

bool RepoDailyCodeline::deletionsIsSet() const
{
    return deletionsIsSet_;
}

void RepoDailyCodeline::unsetdeletions()
{
    deletionsIsSet_ = false;
}

}
}
}
}
}


