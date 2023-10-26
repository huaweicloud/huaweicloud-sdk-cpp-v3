

#include "huaweicloud/rds/v3/model/DiagnosisItemResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DiagnosisItemResult::DiagnosisItemResult()
{
    name_ = "";
    nameIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

DiagnosisItemResult::~DiagnosisItemResult() = default;

void DiagnosisItemResult::validate()
{
}

web::json::value DiagnosisItemResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool DiagnosisItemResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::string DiagnosisItemResult::getName() const
{
    return name_;
}

void DiagnosisItemResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DiagnosisItemResult::nameIsSet() const
{
    return nameIsSet_;
}

void DiagnosisItemResult::unsetname()
{
    nameIsSet_ = false;
}

int32_t DiagnosisItemResult::getCount() const
{
    return count_;
}

void DiagnosisItemResult::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool DiagnosisItemResult::countIsSet() const
{
    return countIsSet_;
}

void DiagnosisItemResult::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


