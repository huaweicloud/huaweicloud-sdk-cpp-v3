

#include "huaweicloud/cbr/v1/model/OpExtendInfoVaultDelete.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




OpExtendInfoVaultDelete::OpExtendInfoVaultDelete()
{
    failCount_ = 0;
    failCountIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

OpExtendInfoVaultDelete::~OpExtendInfoVaultDelete() = default;

void OpExtendInfoVaultDelete::validate()
{
}

web::json::value OpExtendInfoVaultDelete::toJson() const
{
    web::json::value val = web::json::value::object();

    if(failCountIsSet_) {
        val[utility::conversions::to_string_t("fail_count")] = ModelBase::toJson(failCount_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}

bool OpExtendInfoVaultDelete::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fail_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


int32_t OpExtendInfoVaultDelete::getFailCount() const
{
    return failCount_;
}

void OpExtendInfoVaultDelete::setFailCount(int32_t value)
{
    failCount_ = value;
    failCountIsSet_ = true;
}

bool OpExtendInfoVaultDelete::failCountIsSet() const
{
    return failCountIsSet_;
}

void OpExtendInfoVaultDelete::unsetfailCount()
{
    failCountIsSet_ = false;
}

int32_t OpExtendInfoVaultDelete::getTotalCount() const
{
    return totalCount_;
}

void OpExtendInfoVaultDelete::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool OpExtendInfoVaultDelete::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void OpExtendInfoVaultDelete::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


