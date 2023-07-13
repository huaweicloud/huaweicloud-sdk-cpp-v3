

#include "huaweicloud/sis/v1/model/CustomResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




CustomResult::CustomResult()
{
    data_ = "";
    dataIsSet_ = false;
}

CustomResult::~CustomResult() = default;

void CustomResult::validate()
{
}

web::json::value CustomResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}

bool CustomResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}

std::string CustomResult::getData() const
{
    return data_;
}

void CustomResult::setData(const std::string& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool CustomResult::dataIsSet() const
{
    return dataIsSet_;
}

void CustomResult::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


