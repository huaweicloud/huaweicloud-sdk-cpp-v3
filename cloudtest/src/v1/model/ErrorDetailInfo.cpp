

#include "huaweicloud/cloudtest/v1/model/ErrorDetailInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ErrorDetailInfo::ErrorDetailInfo()
{
    failedIsSet_ = false;
}

ErrorDetailInfo::~ErrorDetailInfo() = default;

void ErrorDetailInfo::validate()
{
}

web::json::value ErrorDetailInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(failedIsSet_) {
        val[utility::conversions::to_string_t("failed")] = ModelBase::toJson(failed_);
    }

    return val;
}
bool ErrorDetailInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("failed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed"));
        if(!fieldValue.is_null())
        {
            std::vector<ErrorCaseInfoBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailed(refVal);
        }
    }
    return ok;
}


std::vector<ErrorCaseInfoBean>& ErrorDetailInfo::getFailed()
{
    return failed_;
}

void ErrorDetailInfo::setFailed(const std::vector<ErrorCaseInfoBean>& value)
{
    failed_ = value;
    failedIsSet_ = true;
}

bool ErrorDetailInfo::failedIsSet() const
{
    return failedIsSet_;
}

void ErrorDetailInfo::unsetfailed()
{
    failedIsSet_ = false;
}

}
}
}
}
}


