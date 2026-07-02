

#include "huaweicloud/rds/v3/model/RefreshPublicationSnapshotResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RefreshPublicationSnapshotResponse::RefreshPublicationSnapshotResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

RefreshPublicationSnapshotResponse::~RefreshPublicationSnapshotResponse() = default;

void RefreshPublicationSnapshotResponse::validate()
{
}

web::json::value RefreshPublicationSnapshotResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool RefreshPublicationSnapshotResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResp(refVal);
        }
    }
    return ok;
}


std::string RefreshPublicationSnapshotResponse::getResp() const
{
    return resp_;
}

void RefreshPublicationSnapshotResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool RefreshPublicationSnapshotResponse::respIsSet() const
{
    return respIsSet_;
}

void RefreshPublicationSnapshotResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


