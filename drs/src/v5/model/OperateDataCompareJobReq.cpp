

#include "huaweicloud/drs/v5/model/OperateDataCompareJobReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




OperateDataCompareJobReq::OperateDataCompareJobReq()
{
    compareJobIdsIsSet_ = false;
}

OperateDataCompareJobReq::~OperateDataCompareJobReq() = default;

void OperateDataCompareJobReq::validate()
{
}

web::json::value OperateDataCompareJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(compareJobIdsIsSet_) {
        val[utility::conversions::to_string_t("compare_job_ids")] = ModelBase::toJson(compareJobIds_);
    }

    return val;
}
bool OperateDataCompareJobReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("compare_job_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_job_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareJobIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& OperateDataCompareJobReq::getCompareJobIds()
{
    return compareJobIds_;
}

void OperateDataCompareJobReq::setCompareJobIds(const std::vector<std::string>& value)
{
    compareJobIds_ = value;
    compareJobIdsIsSet_ = true;
}

bool OperateDataCompareJobReq::compareJobIdsIsSet() const
{
    return compareJobIdsIsSet_;
}

void OperateDataCompareJobReq::unsetcompareJobIds()
{
    compareJobIdsIsSet_ = false;
}

}
}
}
}
}


