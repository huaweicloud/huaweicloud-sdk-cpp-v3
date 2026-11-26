

#include "huaweicloud/modelarts/v1/model/OperatorArgTypeEnum.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {



OperatorArgTypeEnum::OperatorArgTypeEnum()
{
}

OperatorArgTypeEnum::~OperatorArgTypeEnum()
{
}

void OperatorArgTypeEnum::validate()
{
}

web::json::value OperatorArgTypeEnum::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eOperatorArgTypeEnum::OperatorArgTypeEnum_INT) val = web::json::value::string(U("INT"));
    if (value_ == eOperatorArgTypeEnum::OperatorArgTypeEnum_FLOAT) val = web::json::value::string(U("FLOAT"));
    if (value_ == eOperatorArgTypeEnum::OperatorArgTypeEnum_STRING) val = web::json::value::string(U("STRING"));
    if (value_ == eOperatorArgTypeEnum::OperatorArgTypeEnum_ENUM) val = web::json::value::string(U("ENUM"));
    if (value_ == eOperatorArgTypeEnum::OperatorArgTypeEnum_LIST) val = web::json::value::string(U("LIST"));
    if (value_ == eOperatorArgTypeEnum::OperatorArgTypeEnum_BOOLEAN) val = web::json::value::string(U("BOOLEAN"));
    if (value_ == eOperatorArgTypeEnum::OperatorArgTypeEnum_LARGE_MODEL) val = web::json::value::string(U("LARGE_MODEL"));
    if (value_ == eOperatorArgTypeEnum::OperatorArgTypeEnum_OBS) val = web::json::value::string(U("OBS"));
    if (value_ == eOperatorArgTypeEnum::OperatorArgTypeEnum_LABEL_FILTER) val = web::json::value::string(U("LABEL_FILTER"));
    if (value_ == eOperatorArgTypeEnum::OperatorArgTypeEnum_DATASET) val = web::json::value::string(U("DATASET"));
    if (value_ == eOperatorArgTypeEnum::OperatorArgTypeEnum_DYNAMIC_INPUT_LIST) val = web::json::value::string(U("DYNAMIC_INPUT_LIST"));
    if (value_ == eOperatorArgTypeEnum::OperatorArgTypeEnum_PROMPT) val = web::json::value::string(U("PROMPT"));
    if (value_ == eOperatorArgTypeEnum::OperatorArgTypeEnum_OUTPUT_TASK_CATEGORY) val = web::json::value::string(U("OUTPUT_TASK_CATEGORY"));

    return val;
}

bool OperatorArgTypeEnum::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("INT")) value_ = eOperatorArgTypeEnum::OperatorArgTypeEnum_INT;
    if (s == utility::conversions::to_string_t("FLOAT")) value_ = eOperatorArgTypeEnum::OperatorArgTypeEnum_FLOAT;
    if (s == utility::conversions::to_string_t("STRING")) value_ = eOperatorArgTypeEnum::OperatorArgTypeEnum_STRING;
    if (s == utility::conversions::to_string_t("ENUM")) value_ = eOperatorArgTypeEnum::OperatorArgTypeEnum_ENUM;
    if (s == utility::conversions::to_string_t("LIST")) value_ = eOperatorArgTypeEnum::OperatorArgTypeEnum_LIST;
    if (s == utility::conversions::to_string_t("BOOLEAN")) value_ = eOperatorArgTypeEnum::OperatorArgTypeEnum_BOOLEAN;
    if (s == utility::conversions::to_string_t("LARGE_MODEL")) value_ = eOperatorArgTypeEnum::OperatorArgTypeEnum_LARGE_MODEL;
    if (s == utility::conversions::to_string_t("OBS")) value_ = eOperatorArgTypeEnum::OperatorArgTypeEnum_OBS;
    if (s == utility::conversions::to_string_t("LABEL_FILTER")) value_ = eOperatorArgTypeEnum::OperatorArgTypeEnum_LABEL_FILTER;
    if (s == utility::conversions::to_string_t("DATASET")) value_ = eOperatorArgTypeEnum::OperatorArgTypeEnum_DATASET;
    if (s == utility::conversions::to_string_t("DYNAMIC_INPUT_LIST")) value_ = eOperatorArgTypeEnum::OperatorArgTypeEnum_DYNAMIC_INPUT_LIST;
    if (s == utility::conversions::to_string_t("PROMPT")) value_ = eOperatorArgTypeEnum::OperatorArgTypeEnum_PROMPT;
    if (s == utility::conversions::to_string_t("OUTPUT_TASK_CATEGORY")) value_ = eOperatorArgTypeEnum::OperatorArgTypeEnum_OUTPUT_TASK_CATEGORY;
    return true;
}

OperatorArgTypeEnum::eOperatorArgTypeEnum OperatorArgTypeEnum::getValue() const
{
   return value_;
}

void OperatorArgTypeEnum::setValue(OperatorArgTypeEnum::eOperatorArgTypeEnum const value)
{
   value_ = value;
}


}
}
}
}
}


