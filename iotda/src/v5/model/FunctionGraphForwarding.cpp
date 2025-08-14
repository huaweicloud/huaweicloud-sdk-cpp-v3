

#include "huaweicloud/iotda/v5/model/FunctionGraphForwarding.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




FunctionGraphForwarding::FunctionGraphForwarding()
{
    funcUrn_ = "";
    funcUrnIsSet_ = false;
    funcName_ = "";
    funcNameIsSet_ = false;
}

FunctionGraphForwarding::~FunctionGraphForwarding() = default;

void FunctionGraphForwarding::validate()
{
}

web::json::value FunctionGraphForwarding::toJson() const
{
    web::json::value val = web::json::value::object();

    if(funcUrnIsSet_) {
        val[utility::conversions::to_string_t("func_urn")] = ModelBase::toJson(funcUrn_);
    }
    if(funcNameIsSet_) {
        val[utility::conversions::to_string_t("func_name")] = ModelBase::toJson(funcName_);
    }

    return val;
}
bool FunctionGraphForwarding::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("func_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("func_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncName(refVal);
        }
    }
    return ok;
}


std::string FunctionGraphForwarding::getFuncUrn() const
{
    return funcUrn_;
}

void FunctionGraphForwarding::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool FunctionGraphForwarding::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void FunctionGraphForwarding::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

std::string FunctionGraphForwarding::getFuncName() const
{
    return funcName_;
}

void FunctionGraphForwarding::setFuncName(const std::string& value)
{
    funcName_ = value;
    funcNameIsSet_ = true;
}

bool FunctionGraphForwarding::funcNameIsSet() const
{
    return funcNameIsSet_;
}

void FunctionGraphForwarding::unsetfuncName()
{
    funcNameIsSet_ = false;
}

}
}
}
}
}


