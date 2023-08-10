

#include "huaweicloud/codeartsdeploy/v2/model/ListDeployTasksResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListDeployTasksResponse::ListDeployTasksResponse()
{
    totalNum_ = 0;
    totalNumIsSet_ = false;
    resultIsSet_ = false;
}

ListDeployTasksResponse::~ListDeployTasksResponse() = default;

void ListDeployTasksResponse::validate()
{
}

web::json::value ListDeployTasksResponse::toJson() const
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

bool ListDeployTasksResponse::fromJson(const web::json::value& val)
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
            std::vector<TaskInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}

int32_t ListDeployTasksResponse::getTotalNum() const
{
    return totalNum_;
}

void ListDeployTasksResponse::setTotalNum(int32_t value)
{
    totalNum_ = value;
    totalNumIsSet_ = true;
}

bool ListDeployTasksResponse::totalNumIsSet() const
{
    return totalNumIsSet_;
}

void ListDeployTasksResponse::unsettotalNum()
{
    totalNumIsSet_ = false;
}

std::vector<TaskInfo>& ListDeployTasksResponse::getResult()
{
    return result_;
}

void ListDeployTasksResponse::setResult(const std::vector<TaskInfo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListDeployTasksResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListDeployTasksResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


