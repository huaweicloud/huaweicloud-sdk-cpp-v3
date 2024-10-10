

#include "huaweicloud/gaussdb/v3/model/CheckStarrocksParamsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CheckStarrocksParamsResponse::CheckStarrocksParamsResponse()
{
    differencesIsSet_ = false;
}

CheckStarrocksParamsResponse::~CheckStarrocksParamsResponse() = default;

void CheckStarrocksParamsResponse::validate()
{
}

web::json::value CheckStarrocksParamsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(differencesIsSet_) {
        val[utility::conversions::to_string_t("differences")] = ModelBase::toJson(differences_);
    }

    return val;
}
bool CheckStarrocksParamsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("differences"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("differences"));
        if(!fieldValue.is_null())
        {
            std::vector<ParamGroupParameterDifferences> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDifferences(refVal);
        }
    }
    return ok;
}


std::vector<ParamGroupParameterDifferences>& CheckStarrocksParamsResponse::getDifferences()
{
    return differences_;
}

void CheckStarrocksParamsResponse::setDifferences(const std::vector<ParamGroupParameterDifferences>& value)
{
    differences_ = value;
    differencesIsSet_ = true;
}

bool CheckStarrocksParamsResponse::differencesIsSet() const
{
    return differencesIsSet_;
}

void CheckStarrocksParamsResponse::unsetdifferences()
{
    differencesIsSet_ = false;
}

}
}
}
}
}


