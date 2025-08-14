

#include "huaweicloud/iotda/v5/model/DeleteBatchTaskFileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteBatchTaskFileResponse::DeleteBatchTaskFileResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteBatchTaskFileResponse::~DeleteBatchTaskFileResponse() = default;

void DeleteBatchTaskFileResponse::validate()
{
}

web::json::value DeleteBatchTaskFileResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteBatchTaskFileResponse::fromJson(const web::json::value& val)
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


std::string DeleteBatchTaskFileResponse::getBody() const
{
    return body_;
}

void DeleteBatchTaskFileResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteBatchTaskFileResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteBatchTaskFileResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


