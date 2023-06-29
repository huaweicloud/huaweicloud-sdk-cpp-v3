

#include "huaweicloud/mpc/v1/model/ListQualityEnhanceDefaultTemplateResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListQualityEnhanceDefaultTemplateResponse::ListQualityEnhanceDefaultTemplateResponse()
{
    taskArrayIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListQualityEnhanceDefaultTemplateResponse::~ListQualityEnhanceDefaultTemplateResponse() = default;

void ListQualityEnhanceDefaultTemplateResponse::validate()
{
}

web::json::value ListQualityEnhanceDefaultTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskArrayIsSet_) {
        val[utility::conversions::to_string_t("task_array")] = ModelBase::toJson(taskArray_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}

bool ListQualityEnhanceDefaultTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_array"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_array"));
        if(!fieldValue.is_null())
        {
            std::vector<QualityEnhanceTemplateInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskArray(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<QualityEnhanceTemplateInfo>& ListQualityEnhanceDefaultTemplateResponse::getTaskArray()
{
    return taskArray_;
}

void ListQualityEnhanceDefaultTemplateResponse::setTaskArray(const std::vector<QualityEnhanceTemplateInfo>& value)
{
    taskArray_ = value;
    taskArrayIsSet_ = true;
}

bool ListQualityEnhanceDefaultTemplateResponse::taskArrayIsSet() const
{
    return taskArrayIsSet_;
}

void ListQualityEnhanceDefaultTemplateResponse::unsettaskArray()
{
    taskArrayIsSet_ = false;
}

int32_t ListQualityEnhanceDefaultTemplateResponse::getTotal() const
{
    return total_;
}

void ListQualityEnhanceDefaultTemplateResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListQualityEnhanceDefaultTemplateResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListQualityEnhanceDefaultTemplateResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


