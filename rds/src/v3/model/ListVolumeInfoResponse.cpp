

#include "huaweicloud/rds/v3/model/ListVolumeInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListVolumeInfoResponse::ListVolumeInfoResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

ListVolumeInfoResponse::~ListVolumeInfoResponse() = default;

void ListVolumeInfoResponse::validate()
{
}

web::json::value ListVolumeInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListVolumeInfoResponse::fromJson(const web::json::value& val)
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


std::string ListVolumeInfoResponse::getBody() const
{
    return body_;
}

void ListVolumeInfoResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListVolumeInfoResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListVolumeInfoResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


