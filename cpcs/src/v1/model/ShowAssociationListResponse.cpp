

#include "huaweicloud/cpcs/v1/model/ShowAssociationListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowAssociationListResponse::ShowAssociationListResponse()
{
    totalNum_ = 0;
    totalNumIsSet_ = false;
    resultIsSet_ = false;
}

ShowAssociationListResponse::~ShowAssociationListResponse() = default;

void ShowAssociationListResponse::validate()
{
}

web::json::value ShowAssociationListResponse::toJson() const
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
bool ShowAssociationListResponse::fromJson(const web::json::value& val)
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
            std::vector<AssociationInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


int32_t ShowAssociationListResponse::getTotalNum() const
{
    return totalNum_;
}

void ShowAssociationListResponse::setTotalNum(int32_t value)
{
    totalNum_ = value;
    totalNumIsSet_ = true;
}

bool ShowAssociationListResponse::totalNumIsSet() const
{
    return totalNumIsSet_;
}

void ShowAssociationListResponse::unsettotalNum()
{
    totalNumIsSet_ = false;
}

std::vector<AssociationInfo>& ShowAssociationListResponse::getResult()
{
    return result_;
}

void ShowAssociationListResponse::setResult(const std::vector<AssociationInfo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowAssociationListResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowAssociationListResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


