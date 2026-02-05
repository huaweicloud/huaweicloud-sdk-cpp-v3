

#include "huaweicloud/rds/v3/model/DeleteBackupSelectionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteBackupSelectionResponse::DeleteBackupSelectionResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

DeleteBackupSelectionResponse::~DeleteBackupSelectionResponse() = default;

void DeleteBackupSelectionResponse::validate()
{
}

web::json::value DeleteBackupSelectionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool DeleteBackupSelectionResponse::fromJson(const web::json::value& val)
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


std::string DeleteBackupSelectionResponse::getResp() const
{
    return resp_;
}

void DeleteBackupSelectionResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool DeleteBackupSelectionResponse::respIsSet() const
{
    return respIsSet_;
}

void DeleteBackupSelectionResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


