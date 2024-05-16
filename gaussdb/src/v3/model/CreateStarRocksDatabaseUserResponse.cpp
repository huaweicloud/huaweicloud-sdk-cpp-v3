

#include "huaweicloud/gaussdb/v3/model/CreateStarRocksDatabaseUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateStarRocksDatabaseUserResponse::CreateStarRocksDatabaseUserResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

CreateStarRocksDatabaseUserResponse::~CreateStarRocksDatabaseUserResponse() = default;

void CreateStarRocksDatabaseUserResponse::validate()
{
}

web::json::value CreateStarRocksDatabaseUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool CreateStarRocksDatabaseUserResponse::fromJson(const web::json::value& val)
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


std::string CreateStarRocksDatabaseUserResponse::getResult() const
{
    return result_;
}

void CreateStarRocksDatabaseUserResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateStarRocksDatabaseUserResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateStarRocksDatabaseUserResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


