

#include "huaweicloud/cpcs/v1/model/ListCcspTenantImagesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ListCcspTenantImagesResponse::ListCcspTenantImagesResponse()
{
    totalNum_ = 0;
    totalNumIsSet_ = false;
    resultIsSet_ = false;
}

ListCcspTenantImagesResponse::~ListCcspTenantImagesResponse() = default;

void ListCcspTenantImagesResponse::validate()
{
}

web::json::value ListCcspTenantImagesResponse::toJson() const
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
bool ListCcspTenantImagesResponse::fromJson(const web::json::value& val)
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
            std::vector<ImageInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


int32_t ListCcspTenantImagesResponse::getTotalNum() const
{
    return totalNum_;
}

void ListCcspTenantImagesResponse::setTotalNum(int32_t value)
{
    totalNum_ = value;
    totalNumIsSet_ = true;
}

bool ListCcspTenantImagesResponse::totalNumIsSet() const
{
    return totalNumIsSet_;
}

void ListCcspTenantImagesResponse::unsettotalNum()
{
    totalNumIsSet_ = false;
}

std::vector<ImageInfo>& ListCcspTenantImagesResponse::getResult()
{
    return result_;
}

void ListCcspTenantImagesResponse::setResult(const std::vector<ImageInfo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListCcspTenantImagesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListCcspTenantImagesResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


