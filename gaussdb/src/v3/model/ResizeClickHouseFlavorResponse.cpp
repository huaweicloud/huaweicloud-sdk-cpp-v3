

#include "huaweicloud/gaussdb/v3/model/ResizeClickHouseFlavorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ResizeClickHouseFlavorResponse::ResizeClickHouseFlavorResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

ResizeClickHouseFlavorResponse::~ResizeClickHouseFlavorResponse() = default;

void ResizeClickHouseFlavorResponse::validate()
{
}

web::json::value ResizeClickHouseFlavorResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ResizeClickHouseFlavorResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ResizeClickHouseFlavorResponse::getResult() const
{
    return result_;
}

void ResizeClickHouseFlavorResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ResizeClickHouseFlavorResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ResizeClickHouseFlavorResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


