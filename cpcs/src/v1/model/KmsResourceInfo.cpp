

#include "huaweicloud/cpcs/v1/model/KmsResourceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




KmsResourceInfo::KmsResourceInfo()
{
    totalNum_ = 0;
    totalNumIsSet_ = false;
    resultIsSet_ = false;
}

KmsResourceInfo::~KmsResourceInfo() = default;

void KmsResourceInfo::validate()
{
}

web::json::value KmsResourceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalNumIsSet_) {
        val[utility::conversions::to_string_t("total_num")] = ModelBase::toJson(totalNum_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool KmsResourceInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            KmsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


int32_t KmsResourceInfo::getTotalNum() const
{
    return totalNum_;
}

void KmsResourceInfo::setTotalNum(int32_t value)
{
    totalNum_ = value;
    totalNumIsSet_ = true;
}

bool KmsResourceInfo::totalNumIsSet() const
{
    return totalNumIsSet_;
}

void KmsResourceInfo::unsettotalNum()
{
    totalNumIsSet_ = false;
}

KmsInfo KmsResourceInfo::getResult() const
{
    return result_;
}

void KmsResourceInfo::setResult(const KmsInfo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool KmsResourceInfo::resultIsSet() const
{
    return resultIsSet_;
}

void KmsResourceInfo::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


