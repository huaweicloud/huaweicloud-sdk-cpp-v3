

#include "huaweicloud/codeartsdeploy/v2/model/ListAllAppResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListAllAppResponse::ListAllAppResponse()
{
    totalNum_ = 0;
    totalNumIsSet_ = false;
    resultIsSet_ = false;
}

ListAllAppResponse::~ListAllAppResponse() = default;

void ListAllAppResponse::validate()
{
}

web::json::value ListAllAppResponse::toJson() const
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
bool ListAllAppResponse::fromJson(const web::json::value& val)
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
            std::vector<AppExecutionInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


int32_t ListAllAppResponse::getTotalNum() const
{
    return totalNum_;
}

void ListAllAppResponse::setTotalNum(int32_t value)
{
    totalNum_ = value;
    totalNumIsSet_ = true;
}

bool ListAllAppResponse::totalNumIsSet() const
{
    return totalNumIsSet_;
}

void ListAllAppResponse::unsettotalNum()
{
    totalNumIsSet_ = false;
}

std::vector<AppExecutionInfo>& ListAllAppResponse::getResult()
{
    return result_;
}

void ListAllAppResponse::setResult(const std::vector<AppExecutionInfo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListAllAppResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListAllAppResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


