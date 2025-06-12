

#include "huaweicloud/metastudio/v1/model/CreateType.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {



CreateType::CreateType()
{
}

CreateType::~CreateType()
{
}

void CreateType::validate()
{
}

web::json::value CreateType::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eCreateType::CreateType_PACKAGE) val = web::json::value::string(U("PACKAGE"));
    if (value_ == eCreateType::CreateType_SEGMENT) val = web::json::value::string(U("SEGMENT"));

    return val;
}

bool CreateType::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("PACKAGE")) value_ = eCreateType::CreateType_PACKAGE;
    if (s == utility::conversions::to_string_t("SEGMENT")) value_ = eCreateType::CreateType_SEGMENT;
    return true;
}

CreateType::eCreateType CreateType::getValue() const
{
   return value_;
}

void CreateType::setValue(CreateType::eCreateType const value)
{
   value_ = value;
}


}
}
}
}
}


