

#include "huaweicloud/modelarts/v1/model/BatchBindInferApiKeysResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchBindInferApiKeysResponse::BatchBindInferApiKeysResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    successCount_ = 0;
    successCountIsSet_ = false;
    successItemsIsSet_ = false;
    failureCount_ = 0;
    failureCountIsSet_ = false;
    failureItemsIsSet_ = false;
}

BatchBindInferApiKeysResponse::~BatchBindInferApiKeysResponse() = default;

void BatchBindInferApiKeysResponse::validate()
{
}

web::json::value BatchBindInferApiKeysResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(successCountIsSet_) {
        val[utility::conversions::to_string_t("success_count")] = ModelBase::toJson(successCount_);
    }
    if(successItemsIsSet_) {
        val[utility::conversions::to_string_t("success_items")] = ModelBase::toJson(successItems_);
    }
    if(failureCountIsSet_) {
        val[utility::conversions::to_string_t("failure_count")] = ModelBase::toJson(failureCount_);
    }
    if(failureItemsIsSet_) {
        val[utility::conversions::to_string_t("failure_items")] = ModelBase::toJson(failureItems_);
    }

    return val;
}
bool BatchBindInferApiKeysResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success_items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_items"));
        if(!fieldValue.is_null())
        {
            std::vector<ApiKeyResponseV2> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessItems(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failure_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failure_items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_items"));
        if(!fieldValue.is_null())
        {
            std::vector<ApiKeyFailureResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureItems(refVal);
        }
    }
    return ok;
}


int32_t BatchBindInferApiKeysResponse::getTotal() const
{
    return total_;
}

void BatchBindInferApiKeysResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool BatchBindInferApiKeysResponse::totalIsSet() const
{
    return totalIsSet_;
}

void BatchBindInferApiKeysResponse::unsettotal()
{
    totalIsSet_ = false;
}

int32_t BatchBindInferApiKeysResponse::getSuccessCount() const
{
    return successCount_;
}

void BatchBindInferApiKeysResponse::setSuccessCount(int32_t value)
{
    successCount_ = value;
    successCountIsSet_ = true;
}

bool BatchBindInferApiKeysResponse::successCountIsSet() const
{
    return successCountIsSet_;
}

void BatchBindInferApiKeysResponse::unsetsuccessCount()
{
    successCountIsSet_ = false;
}

std::vector<ApiKeyResponseV2>& BatchBindInferApiKeysResponse::getSuccessItems()
{
    return successItems_;
}

void BatchBindInferApiKeysResponse::setSuccessItems(const std::vector<ApiKeyResponseV2>& value)
{
    successItems_ = value;
    successItemsIsSet_ = true;
}

bool BatchBindInferApiKeysResponse::successItemsIsSet() const
{
    return successItemsIsSet_;
}

void BatchBindInferApiKeysResponse::unsetsuccessItems()
{
    successItemsIsSet_ = false;
}

int32_t BatchBindInferApiKeysResponse::getFailureCount() const
{
    return failureCount_;
}

void BatchBindInferApiKeysResponse::setFailureCount(int32_t value)
{
    failureCount_ = value;
    failureCountIsSet_ = true;
}

bool BatchBindInferApiKeysResponse::failureCountIsSet() const
{
    return failureCountIsSet_;
}

void BatchBindInferApiKeysResponse::unsetfailureCount()
{
    failureCountIsSet_ = false;
}

std::vector<ApiKeyFailureResponse>& BatchBindInferApiKeysResponse::getFailureItems()
{
    return failureItems_;
}

void BatchBindInferApiKeysResponse::setFailureItems(const std::vector<ApiKeyFailureResponse>& value)
{
    failureItems_ = value;
    failureItemsIsSet_ = true;
}

bool BatchBindInferApiKeysResponse::failureItemsIsSet() const
{
    return failureItemsIsSet_;
}

void BatchBindInferApiKeysResponse::unsetfailureItems()
{
    failureItemsIsSet_ = false;
}

}
}
}
}
}


