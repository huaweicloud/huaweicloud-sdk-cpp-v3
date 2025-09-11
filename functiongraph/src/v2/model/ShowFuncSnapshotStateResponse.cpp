

#include "huaweicloud/functiongraph/v2/model/ShowFuncSnapshotStateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowFuncSnapshotStateResponse::ShowFuncSnapshotStateResponse()
{
    state_ = "";
    stateIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
}

ShowFuncSnapshotStateResponse::~ShowFuncSnapshotStateResponse() = default;

void ShowFuncSnapshotStateResponse::validate()
{
}

web::json::value ShowFuncSnapshotStateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }

    return val;
}
bool ShowFuncSnapshotStateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    return ok;
}


std::string ShowFuncSnapshotStateResponse::getState() const
{
    return state_;
}

void ShowFuncSnapshotStateResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ShowFuncSnapshotStateResponse::stateIsSet() const
{
    return stateIsSet_;
}

void ShowFuncSnapshotStateResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string ShowFuncSnapshotStateResponse::getCode() const
{
    return code_;
}

void ShowFuncSnapshotStateResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ShowFuncSnapshotStateResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ShowFuncSnapshotStateResponse::unsetcode()
{
    codeIsSet_ = false;
}

}
}
}
}
}


