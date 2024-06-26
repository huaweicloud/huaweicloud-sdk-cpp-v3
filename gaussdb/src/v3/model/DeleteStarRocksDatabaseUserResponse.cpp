

#include "huaweicloud/gaussdb/v3/model/DeleteStarRocksDatabaseUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteStarRocksDatabaseUserResponse::DeleteStarRocksDatabaseUserResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

DeleteStarRocksDatabaseUserResponse::~DeleteStarRocksDatabaseUserResponse() = default;

void DeleteStarRocksDatabaseUserResponse::validate()
{
}

web::json::value DeleteStarRocksDatabaseUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool DeleteStarRocksDatabaseUserResponse::fromJson(const web::json::value& val)
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


std::string DeleteStarRocksDatabaseUserResponse::getResult() const
{
    return result_;
}

void DeleteStarRocksDatabaseUserResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteStarRocksDatabaseUserResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteStarRocksDatabaseUserResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


