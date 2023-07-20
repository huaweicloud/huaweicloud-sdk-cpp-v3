

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussShard.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussShard::OpenGaussShard()
{
    count_ = 0;
    countIsSet_ = false;
}

OpenGaussShard::~OpenGaussShard() = default;

void OpenGaussShard::validate()
{
}

web::json::value OpenGaussShard::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}

bool OpenGaussShard::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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

int32_t OpenGaussShard::getCount() const
{
    return count_;
}

void OpenGaussShard::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool OpenGaussShard::countIsSet() const
{
    return countIsSet_;
}

void OpenGaussShard::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


