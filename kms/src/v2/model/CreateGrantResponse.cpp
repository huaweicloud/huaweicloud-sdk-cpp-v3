

#include "huaweicloud/kms/v2/model/CreateGrantResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateGrantResponse::CreateGrantResponse()
{
    grantId_ = "";
    grantIdIsSet_ = false;
}

CreateGrantResponse::~CreateGrantResponse() = default;

void CreateGrantResponse::validate()
{
}

web::json::value CreateGrantResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(grantIdIsSet_) {
        val[utility::conversions::to_string_t("grant_id")] = ModelBase::toJson(grantId_);
    }

    return val;
}
bool CreateGrantResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("grant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGrantId(refVal);
        }
    }
    return ok;
}


std::string CreateGrantResponse::getGrantId() const
{
    return grantId_;
}

void CreateGrantResponse::setGrantId(const std::string& value)
{
    grantId_ = value;
    grantIdIsSet_ = true;
}

bool CreateGrantResponse::grantIdIsSet() const
{
    return grantIdIsSet_;
}

void CreateGrantResponse::unsetgrantId()
{
    grantIdIsSet_ = false;
}

}
}
}
}
}


