

#include "huaweicloud/vpc/v2/model/CreateFlowLogReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateFlowLogReqBody::CreateFlowLogReqBody()
{
    flowLogIsSet_ = false;
}

CreateFlowLogReqBody::~CreateFlowLogReqBody() = default;

void CreateFlowLogReqBody::validate()
{
}

web::json::value CreateFlowLogReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flowLogIsSet_) {
        val[utility::conversions::to_string_t("flow_log")] = ModelBase::toJson(flowLog_);
    }

    return val;
}
bool CreateFlowLogReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flow_log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flow_log"));
        if(!fieldValue.is_null())
        {
            CreateFlowLogReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlowLog(refVal);
        }
    }
    return ok;
}


CreateFlowLogReq CreateFlowLogReqBody::getFlowLog() const
{
    return flowLog_;
}

void CreateFlowLogReqBody::setFlowLog(const CreateFlowLogReq& value)
{
    flowLog_ = value;
    flowLogIsSet_ = true;
}

bool CreateFlowLogReqBody::flowLogIsSet() const
{
    return flowLogIsSet_;
}

void CreateFlowLogReqBody::unsetflowLog()
{
    flowLogIsSet_ = false;
}

}
}
}
}
}


