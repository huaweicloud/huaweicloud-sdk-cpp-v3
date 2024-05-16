

#include "huaweicloud/gaussdb/v3/model/UpdateStarRocksDatabaseUserPasswordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateStarRocksDatabaseUserPasswordResponse::UpdateStarRocksDatabaseUserPasswordResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

UpdateStarRocksDatabaseUserPasswordResponse::~UpdateStarRocksDatabaseUserPasswordResponse() = default;

void UpdateStarRocksDatabaseUserPasswordResponse::validate()
{
}

web::json::value UpdateStarRocksDatabaseUserPasswordResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool UpdateStarRocksDatabaseUserPasswordResponse::fromJson(const web::json::value& val)
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


std::string UpdateStarRocksDatabaseUserPasswordResponse::getResult() const
{
    return result_;
}

void UpdateStarRocksDatabaseUserPasswordResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateStarRocksDatabaseUserPasswordResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateStarRocksDatabaseUserPasswordResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


