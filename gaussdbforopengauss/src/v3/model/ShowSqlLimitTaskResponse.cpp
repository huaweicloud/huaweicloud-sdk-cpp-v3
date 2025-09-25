

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowSqlLimitTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowSqlLimitTaskResponse::ShowSqlLimitTaskResponse()
{
    limitCount_ = 0;
    limitCountIsSet_ = false;
}

ShowSqlLimitTaskResponse::~ShowSqlLimitTaskResponse() = default;

void ShowSqlLimitTaskResponse::validate()
{
}

web::json::value ShowSqlLimitTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitCountIsSet_) {
        val[utility::conversions::to_string_t("limit_count")] = ModelBase::toJson(limitCount_);
    }

    return val;
}
bool ShowSqlLimitTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitCount(refVal);
        }
    }
    return ok;
}


int32_t ShowSqlLimitTaskResponse::getLimitCount() const
{
    return limitCount_;
}

void ShowSqlLimitTaskResponse::setLimitCount(int32_t value)
{
    limitCount_ = value;
    limitCountIsSet_ = true;
}

bool ShowSqlLimitTaskResponse::limitCountIsSet() const
{
    return limitCountIsSet_;
}

void ShowSqlLimitTaskResponse::unsetlimitCount()
{
    limitCountIsSet_ = false;
}

}
}
}
}
}


