

#include "huaweicloud/ecs/v2/model/BatchUpdateServersNameResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchUpdateServersNameResponse::BatchUpdateServersNameResponse()
{
    responseIsSet_ = false;
}

BatchUpdateServersNameResponse::~BatchUpdateServersNameResponse() = default;

void BatchUpdateServersNameResponse::validate()
{
}

web::json::value BatchUpdateServersNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(responseIsSet_) {
        val[utility::conversions::to_string_t("response")] = ModelBase::toJson(response_);
    }

    return val;
}

bool BatchUpdateServersNameResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("response"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerId> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponse(refVal);
        }
    }
    return ok;
}

std::vector<ServerId>& BatchUpdateServersNameResponse::getResponse()
{
    return response_;
}

void BatchUpdateServersNameResponse::setResponse(const std::vector<ServerId>& value)
{
    response_ = value;
    responseIsSet_ = true;
}

bool BatchUpdateServersNameResponse::responseIsSet() const
{
    return responseIsSet_;
}

void BatchUpdateServersNameResponse::unsetresponse()
{
    responseIsSet_ = false;
}

}
}
}
}
}


