

#include "huaweicloud/rds/v3/model/ExecuteOptimizeTableSpaceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ExecuteOptimizeTableSpaceResponse::ExecuteOptimizeTableSpaceResponse()
{
    resp_ = "";
    respIsSet_ = false;
}

ExecuteOptimizeTableSpaceResponse::~ExecuteOptimizeTableSpaceResponse() = default;

void ExecuteOptimizeTableSpaceResponse::validate()
{
}

web::json::value ExecuteOptimizeTableSpaceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(respIsSet_) {
        val[utility::conversions::to_string_t("resp")] = ModelBase::toJson(resp_);
    }

    return val;
}
bool ExecuteOptimizeTableSpaceResponse::fromJson(const web::json::value& val)
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


std::string ExecuteOptimizeTableSpaceResponse::getResp() const
{
    return resp_;
}

void ExecuteOptimizeTableSpaceResponse::setResp(const std::string& value)
{
    resp_ = value;
    respIsSet_ = true;
}

bool ExecuteOptimizeTableSpaceResponse::respIsSet() const
{
    return respIsSet_;
}

void ExecuteOptimizeTableSpaceResponse::unsetresp()
{
    respIsSet_ = false;
}

}
}
}
}
}


