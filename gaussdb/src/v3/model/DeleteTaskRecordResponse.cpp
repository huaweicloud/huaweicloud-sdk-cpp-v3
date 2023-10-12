

#include "huaweicloud/gaussdb/v3/model/DeleteTaskRecordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteTaskRecordResponse::DeleteTaskRecordResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteTaskRecordResponse::~DeleteTaskRecordResponse() = default;

void DeleteTaskRecordResponse::validate()
{
}

web::json::value DeleteTaskRecordResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteTaskRecordResponse::fromJson(const web::json::value& val)
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


std::string DeleteTaskRecordResponse::getBody() const
{
    return body_;
}

void DeleteTaskRecordResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteTaskRecordResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteTaskRecordResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


