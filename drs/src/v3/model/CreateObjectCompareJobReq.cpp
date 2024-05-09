

#include "huaweicloud/drs/v3/model/CreateObjectCompareJobReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CreateObjectCompareJobReq::CreateObjectCompareJobReq()
{
    compareTaskNum_ = 0;
    compareTaskNumIsSet_ = false;
}

CreateObjectCompareJobReq::~CreateObjectCompareJobReq() = default;

void CreateObjectCompareJobReq::validate()
{
}

web::json::value CreateObjectCompareJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(compareTaskNumIsSet_) {
        val[utility::conversions::to_string_t("compare_task_num")] = ModelBase::toJson(compareTaskNum_);
    }

    return val;
}
bool CreateObjectCompareJobReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("compare_task_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_task_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareTaskNum(refVal);
        }
    }
    return ok;
}


int32_t CreateObjectCompareJobReq::getCompareTaskNum() const
{
    return compareTaskNum_;
}

void CreateObjectCompareJobReq::setCompareTaskNum(int32_t value)
{
    compareTaskNum_ = value;
    compareTaskNumIsSet_ = true;
}

bool CreateObjectCompareJobReq::compareTaskNumIsSet() const
{
    return compareTaskNumIsSet_;
}

void CreateObjectCompareJobReq::unsetcompareTaskNum()
{
    compareTaskNumIsSet_ = false;
}

}
}
}
}
}


