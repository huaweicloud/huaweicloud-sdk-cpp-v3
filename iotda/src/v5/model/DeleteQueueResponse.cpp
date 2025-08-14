

#include "huaweicloud/iotda/v5/model/DeleteQueueResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteQueueResponse::DeleteQueueResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteQueueResponse::~DeleteQueueResponse() = default;

void DeleteQueueResponse::validate()
{
}

web::json::value DeleteQueueResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteQueueResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteQueueResponse::getBody() const
{
    return body_;
}

void DeleteQueueResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteQueueResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteQueueResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


