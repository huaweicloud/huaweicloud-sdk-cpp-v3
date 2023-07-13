

#include "huaweicloud/vpc/v2/model/UpdateFlowLogReqBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdateFlowLogReqBody::UpdateFlowLogReqBody()
{
    flowLogIsSet_ = false;
}

UpdateFlowLogReqBody::~UpdateFlowLogReqBody() = default;

void UpdateFlowLogReqBody::validate()
{
}

web::json::value UpdateFlowLogReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flowLogIsSet_) {
        val[utility::conversions::to_string_t("flow_log")] = ModelBase::toJson(flowLog_);
    }

    return val;
}

bool UpdateFlowLogReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flow_log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flow_log"));
        if(!fieldValue.is_null())
        {
            UpdateFlowLogReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlowLog(refVal);
        }
    }
    return ok;
}

UpdateFlowLogReq UpdateFlowLogReqBody::getFlowLog() const
{
    return flowLog_;
}

void UpdateFlowLogReqBody::setFlowLog(const UpdateFlowLogReq& value)
{
    flowLog_ = value;
    flowLogIsSet_ = true;
}

bool UpdateFlowLogReqBody::flowLogIsSet() const
{
    return flowLogIsSet_;
}

void UpdateFlowLogReqBody::unsetflowLog()
{
    flowLogIsSet_ = false;
}

}
}
}
}
}


