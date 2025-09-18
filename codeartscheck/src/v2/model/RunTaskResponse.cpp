

#include "huaweicloud/codeartscheck/v2/model/RunTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




RunTaskResponse::RunTaskResponse()
{
    execId_ = "";
    execIdIsSet_ = false;
}

RunTaskResponse::~RunTaskResponse() = default;

void RunTaskResponse::validate()
{
}

web::json::value RunTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(execIdIsSet_) {
        val[utility::conversions::to_string_t("exec_id")] = ModelBase::toJson(execId_);
    }

    return val;
}
bool RunTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("exec_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exec_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecId(refVal);
        }
    }
    return ok;
}


std::string RunTaskResponse::getExecId() const
{
    return execId_;
}

void RunTaskResponse::setExecId(const std::string& value)
{
    execId_ = value;
    execIdIsSet_ = true;
}

bool RunTaskResponse::execIdIsSet() const
{
    return execIdIsSet_;
}

void RunTaskResponse::unsetexecId()
{
    execIdIsSet_ = false;
}

}
}
}
}
}


