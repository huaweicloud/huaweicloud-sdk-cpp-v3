

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowSlowSqlStackResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowSlowSqlStackResponse::ShowSlowSqlStackResponse()
{
    gsStack_ = "";
    gsStackIsSet_ = false;
}

ShowSlowSqlStackResponse::~ShowSlowSqlStackResponse() = default;

void ShowSlowSqlStackResponse::validate()
{
}

web::json::value ShowSlowSqlStackResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(gsStackIsSet_) {
        val[utility::conversions::to_string_t("gs_stack")] = ModelBase::toJson(gsStack_);
    }

    return val;
}
bool ShowSlowSqlStackResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("gs_stack"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gs_stack"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGsStack(refVal);
        }
    }
    return ok;
}


std::string ShowSlowSqlStackResponse::getGsStack() const
{
    return gsStack_;
}

void ShowSlowSqlStackResponse::setGsStack(const std::string& value)
{
    gsStack_ = value;
    gsStackIsSet_ = true;
}

bool ShowSlowSqlStackResponse::gsStackIsSet() const
{
    return gsStackIsSet_;
}

void ShowSlowSqlStackResponse::unsetgsStack()
{
    gsStackIsSet_ = false;
}

}
}
}
}
}


