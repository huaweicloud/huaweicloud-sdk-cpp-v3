

#include "huaweicloud/codeartsdeploy/v2/model/ListDeployTaskHistoryByDateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListDeployTaskHistoryByDateResponse::ListDeployTaskHistoryByDateResponse()
{
    resultIsSet_ = false;
    totalNum_ = 0;
    totalNumIsSet_ = false;
}

ListDeployTaskHistoryByDateResponse::~ListDeployTaskHistoryByDateResponse() = default;

void ListDeployTaskHistoryByDateResponse::validate()
{
}

web::json::value ListDeployTaskHistoryByDateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(totalNumIsSet_) {
        val[utility::conversions::to_string_t("total_num")] = ModelBase::toJson(totalNum_);
    }

    return val;
}
bool ListDeployTaskHistoryByDateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<ExecuteRecordV2Body> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalNum(refVal);
        }
    }
    return ok;
}


std::vector<ExecuteRecordV2Body>& ListDeployTaskHistoryByDateResponse::getResult()
{
    return result_;
}

void ListDeployTaskHistoryByDateResponse::setResult(const std::vector<ExecuteRecordV2Body>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListDeployTaskHistoryByDateResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListDeployTaskHistoryByDateResponse::unsetresult()
{
    resultIsSet_ = false;
}

int32_t ListDeployTaskHistoryByDateResponse::getTotalNum() const
{
    return totalNum_;
}

void ListDeployTaskHistoryByDateResponse::setTotalNum(int32_t value)
{
    totalNum_ = value;
    totalNumIsSet_ = true;
}

bool ListDeployTaskHistoryByDateResponse::totalNumIsSet() const
{
    return totalNumIsSet_;
}

void ListDeployTaskHistoryByDateResponse::unsettotalNum()
{
    totalNumIsSet_ = false;
}

}
}
}
}
}


