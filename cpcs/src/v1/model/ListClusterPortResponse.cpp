

#include "huaweicloud/cpcs/v1/model/ListClusterPortResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ListClusterPortResponse::ListClusterPortResponse()
{
    totalNum_ = 0;
    totalNumIsSet_ = false;
    resultIsSet_ = false;
}

ListClusterPortResponse::~ListClusterPortResponse() = default;

void ListClusterPortResponse::validate()
{
}

web::json::value ListClusterPortResponse::toJson() const
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
bool ListClusterPortResponse::fromJson(const web::json::value& val)
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
            std::vector<ElbClusterPortReponseBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


int32_t ListClusterPortResponse::getTotalNum() const
{
    return totalNum_;
}

void ListClusterPortResponse::setTotalNum(int32_t value)
{
    totalNum_ = value;
    totalNumIsSet_ = true;
}

bool ListClusterPortResponse::totalNumIsSet() const
{
    return totalNumIsSet_;
}

void ListClusterPortResponse::unsettotalNum()
{
    totalNumIsSet_ = false;
}

std::vector<ElbClusterPortReponseBody>& ListClusterPortResponse::getResult()
{
    return result_;
}

void ListClusterPortResponse::setResult(const std::vector<ElbClusterPortReponseBody>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListClusterPortResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListClusterPortResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


