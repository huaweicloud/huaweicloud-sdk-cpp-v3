

#include "huaweicloud/drs/v3/model/StructProcessResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




StructProcessResp::StructProcessResp()
{
    createTime_ = "";
    createTimeIsSet_ = false;
    resultIsSet_ = false;
}

StructProcessResp::~StructProcessResp() = default;

void StructProcessResp::validate()
{
}

web::json::value StructProcessResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool StructProcessResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<StructProcessVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}

std::string StructProcessResp::getCreateTime() const
{
    return createTime_;
}

void StructProcessResp::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool StructProcessResp::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void StructProcessResp::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::vector<StructProcessVO>& StructProcessResp::getResult()
{
    return result_;
}

void StructProcessResp::setResult(const std::vector<StructProcessVO>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool StructProcessResp::resultIsSet() const
{
    return resultIsSet_;
}

void StructProcessResp::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


