

#include "huaweicloud/iotda/v5/model/DeleteBatchTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteBatchTaskResponse::DeleteBatchTaskResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteBatchTaskResponse::~DeleteBatchTaskResponse() = default;

void DeleteBatchTaskResponse::validate()
{
}

web::json::value DeleteBatchTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteBatchTaskResponse::fromJson(const web::json::value& val)
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


std::string DeleteBatchTaskResponse::getBody() const
{
    return body_;
}

void DeleteBatchTaskResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteBatchTaskResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteBatchTaskResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


