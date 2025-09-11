

#include "huaweicloud/functiongraph/v2/model/FuncReservedInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




FuncReservedInstance::FuncReservedInstance()
{
    funcUrn_ = "";
    funcUrnIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
}

FuncReservedInstance::~FuncReservedInstance() = default;

void FuncReservedInstance::validate()
{
}

web::json::value FuncReservedInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(funcUrnIsSet_) {
        val[utility::conversions::to_string_t("func_urn")] = ModelBase::toJson(funcUrn_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool FuncReservedInstance::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::string FuncReservedInstance::getFuncUrn() const
{
    return funcUrn_;
}

void FuncReservedInstance::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool FuncReservedInstance::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void FuncReservedInstance::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

int64_t FuncReservedInstance::getCount() const
{
    return count_;
}

void FuncReservedInstance::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool FuncReservedInstance::countIsSet() const
{
    return countIsSet_;
}

void FuncReservedInstance::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


