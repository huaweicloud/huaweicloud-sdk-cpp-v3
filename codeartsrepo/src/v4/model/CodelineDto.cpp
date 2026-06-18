

#include "huaweicloud/codeartsrepo/v4/model/CodelineDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CodelineDto::CodelineDto()
{
    additions_ = 0;
    additionsIsSet_ = false;
    deletions_ = 0;
    deletionsIsSet_ = false;
    date_ = "";
    dateIsSet_ = false;
}

CodelineDto::~CodelineDto() = default;

void CodelineDto::validate()
{
}

web::json::value CodelineDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(additionsIsSet_) {
        val[utility::conversions::to_string_t("additions")] = ModelBase::toJson(additions_);
    }
    if(deletionsIsSet_) {
        val[utility::conversions::to_string_t("deletions")] = ModelBase::toJson(deletions_);
    }
    if(dateIsSet_) {
        val[utility::conversions::to_string_t("date")] = ModelBase::toJson(date_);
    }

    return val;
}
bool CodelineDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("deletions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deletions"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeletions(refVal);
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
    return ok;
}


int32_t CodelineDto::getAdditions() const
{
    return additions_;
}

void CodelineDto::setAdditions(int32_t value)
{
    additions_ = value;
    additionsIsSet_ = true;
}

bool CodelineDto::additionsIsSet() const
{
    return additionsIsSet_;
}

void CodelineDto::unsetadditions()
{
    additionsIsSet_ = false;
}

int32_t CodelineDto::getDeletions() const
{
    return deletions_;
}

void CodelineDto::setDeletions(int32_t value)
{
    deletions_ = value;
    deletionsIsSet_ = true;
}

bool CodelineDto::deletionsIsSet() const
{
    return deletionsIsSet_;
}

void CodelineDto::unsetdeletions()
{
    deletionsIsSet_ = false;
}

std::string CodelineDto::getDate() const
{
    return date_;
}

void CodelineDto::setDate(const std::string& value)
{
    date_ = value;
    dateIsSet_ = true;
}

bool CodelineDto::dateIsSet() const
{
    return dateIsSet_;
}

void CodelineDto::unsetdate()
{
    dateIsSet_ = false;
}

}
}
}
}
}


