

#include "huaweicloud/gaussdbfornosql/v3/model/RedisDeleteDbUserRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RedisDeleteDbUserRequest::RedisDeleteDbUserRequest()
{
    namesIsSet_ = false;
}

RedisDeleteDbUserRequest::~RedisDeleteDbUserRequest() = default;

void RedisDeleteDbUserRequest::validate()
{
}

web::json::value RedisDeleteDbUserRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(namesIsSet_) {
        val[utility::conversions::to_string_t("names")] = ModelBase::toJson(names_);
    }

    return val;
}

bool RedisDeleteDbUserRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNames(refVal);
        }
    }
    return ok;
}

std::vector<std::string>& RedisDeleteDbUserRequest::getNames()
{
    return names_;
}

void RedisDeleteDbUserRequest::setNames(const std::vector<std::string>& value)
{
    names_ = value;
    namesIsSet_ = true;
}

bool RedisDeleteDbUserRequest::namesIsSet() const
{
    return namesIsSet_;
}

void RedisDeleteDbUserRequest::unsetnames()
{
    namesIsSet_ = false;
}

}
}
}
}
}


