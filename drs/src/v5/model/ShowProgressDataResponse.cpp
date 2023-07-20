

#include "huaweicloud/drs/v5/model/ShowProgressDataResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowProgressDataResponse::ShowProgressDataResponse()
{
    count_ = 0L;
    countIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    flowCompareDataIsSet_ = false;
}

ShowProgressDataResponse::~ShowProgressDataResponse() = default;

void ShowProgressDataResponse::validate()
{
}

web::json::value ShowProgressDataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(flowCompareDataIsSet_) {
        val[utility::conversions::to_string_t("flow_compare_data")] = ModelBase::toJson(flowCompareData_);
    }

    return val;
}

bool ShowProgressDataResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flow_compare_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flow_compare_data"));
        if(!fieldValue.is_null())
        {
            std::vector<FlowCompareData> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlowCompareData(refVal);
        }
    }
    return ok;
}

int64_t ShowProgressDataResponse::getCount() const
{
    return count_;
}

void ShowProgressDataResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowProgressDataResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowProgressDataResponse::unsetcount()
{
    countIsSet_ = false;
}

std::string ShowProgressDataResponse::getCreateTime() const
{
    return createTime_;
}

void ShowProgressDataResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowProgressDataResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowProgressDataResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::vector<FlowCompareData>& ShowProgressDataResponse::getFlowCompareData()
{
    return flowCompareData_;
}

void ShowProgressDataResponse::setFlowCompareData(const std::vector<FlowCompareData>& value)
{
    flowCompareData_ = value;
    flowCompareDataIsSet_ = true;
}

bool ShowProgressDataResponse::flowCompareDataIsSet() const
{
    return flowCompareDataIsSet_;
}

void ShowProgressDataResponse::unsetflowCompareData()
{
    flowCompareDataIsSet_ = false;
}

}
}
}
}
}


