

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlFlavorsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlFlavorsResponse::ShowGaussMySqlFlavorsResponse()
{
    flavorsIsSet_ = false;
}

ShowGaussMySqlFlavorsResponse::~ShowGaussMySqlFlavorsResponse() = default;

void ShowGaussMySqlFlavorsResponse::validate()
{
}

web::json::value ShowGaussMySqlFlavorsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorsIsSet_) {
        val[utility::conversions::to_string_t("flavors")] = ModelBase::toJson(flavors_);
    }

    return val;
}

bool ShowGaussMySqlFlavorsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavors"));
        if(!fieldValue.is_null())
        {
            std::vector<MysqlFlavorsInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavors(refVal);
        }
    }
    return ok;
}

std::vector<MysqlFlavorsInfo>& ShowGaussMySqlFlavorsResponse::getFlavors()
{
    return flavors_;
}

void ShowGaussMySqlFlavorsResponse::setFlavors(const std::vector<MysqlFlavorsInfo>& value)
{
    flavors_ = value;
    flavorsIsSet_ = true;
}

bool ShowGaussMySqlFlavorsResponse::flavorsIsSet() const
{
    return flavorsIsSet_;
}

void ShowGaussMySqlFlavorsResponse::unsetflavors()
{
    flavorsIsSet_ = false;
}

}
}
}
}
}


