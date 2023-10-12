

#include "huaweicloud/ecs/v2/model/BatchResetServersPasswordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchResetServersPasswordResponse::BatchResetServersPasswordResponse()
{
    responseIsSet_ = false;
}

BatchResetServersPasswordResponse::~BatchResetServersPasswordResponse() = default;

void BatchResetServersPasswordResponse::validate()
{
}

web::json::value BatchResetServersPasswordResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(responseIsSet_) {
        val[utility::conversions::to_string_t("response")] = ModelBase::toJson(response_);
    }

    return val;
}
bool BatchResetServersPasswordResponse::fromJson(const web::json::value& val)
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


std::vector<ServerId>& BatchResetServersPasswordResponse::getResponse()
{
    return response_;
}

void BatchResetServersPasswordResponse::setResponse(const std::vector<ServerId>& value)
{
    response_ = value;
    responseIsSet_ = true;
}

bool BatchResetServersPasswordResponse::responseIsSet() const
{
    return responseIsSet_;
}

void BatchResetServersPasswordResponse::unsetresponse()
{
    responseIsSet_ = false;
}

}
}
}
}
}


