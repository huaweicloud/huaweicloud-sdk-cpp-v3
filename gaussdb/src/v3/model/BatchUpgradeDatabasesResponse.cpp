

#include "huaweicloud/gaussdb/v3/model/BatchUpgradeDatabasesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




BatchUpgradeDatabasesResponse::BatchUpgradeDatabasesResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

BatchUpgradeDatabasesResponse::~BatchUpgradeDatabasesResponse() = default;

void BatchUpgradeDatabasesResponse::validate()
{
}

web::json::value BatchUpgradeDatabasesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool BatchUpgradeDatabasesResponse::fromJson(const web::json::value& val)
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


std::string BatchUpgradeDatabasesResponse::getResp() const
{
    return resp_;
}

void BatchUpgradeDatabasesResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool BatchUpgradeDatabasesResponse::respIsSet() const
{
    return respIsSet_;
}

void BatchUpgradeDatabasesResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


