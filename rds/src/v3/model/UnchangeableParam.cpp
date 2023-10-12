

#include "huaweicloud/rds/v3/model/UnchangeableParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UnchangeableParam::UnchangeableParam()
{
    lowerCaseTableNames_ = "";
    lowerCaseTableNamesIsSet_ = false;
}

UnchangeableParam::~UnchangeableParam() = default;

void UnchangeableParam::validate()
{
}

web::json::value UnchangeableParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(lowerCaseTableNamesIsSet_) {
        val[utility::conversions::to_string_t("lower_case_table_names")] = ModelBase::toJson(lowerCaseTableNames_);
    }

    return val;
}
bool UnchangeableParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lower_case_table_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lower_case_table_names"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLowerCaseTableNames(refVal);
        }
    }
    return ok;
}


std::string UnchangeableParam::getLowerCaseTableNames() const
{
    return lowerCaseTableNames_;
}

void UnchangeableParam::setLowerCaseTableNames(const std::string& value)
{
    lowerCaseTableNames_ = value;
    lowerCaseTableNamesIsSet_ = true;
}

bool UnchangeableParam::lowerCaseTableNamesIsSet() const
{
    return lowerCaseTableNamesIsSet_;
}

void UnchangeableParam::unsetlowerCaseTableNames()
{
    lowerCaseTableNamesIsSet_ = false;
}

}
}
}
}
}


