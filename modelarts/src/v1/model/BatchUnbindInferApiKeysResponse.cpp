

#include "huaweicloud/modelarts/v1/model/BatchUnbindInferApiKeysResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchUnbindInferApiKeysResponse::BatchUnbindInferApiKeysResponse()
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

BatchUnbindInferApiKeysResponse::~BatchUnbindInferApiKeysResponse() = default;

void BatchUnbindInferApiKeysResponse::validate()
{
}

web::json::value BatchUnbindInferApiKeysResponse::toJson() const
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
bool BatchUnbindInferApiKeysResponse::fromJson(const web::json::value& val)
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


int32_t BatchUnbindInferApiKeysResponse::getTotal() const
{
    return total_;
}

void BatchUnbindInferApiKeysResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool BatchUnbindInferApiKeysResponse::totalIsSet() const
{
    return totalIsSet_;
}

void BatchUnbindInferApiKeysResponse::unsettotal()
{
    totalIsSet_ = false;
}

int32_t BatchUnbindInferApiKeysResponse::getSuccessCount() const
{
    return successCount_;
}

void BatchUnbindInferApiKeysResponse::setSuccessCount(int32_t value)
{
    successCount_ = value;
    successCountIsSet_ = true;
}

bool BatchUnbindInferApiKeysResponse::successCountIsSet() const
{
    return successCountIsSet_;
}

void BatchUnbindInferApiKeysResponse::unsetsuccessCount()
{
    successCountIsSet_ = false;
}

std::vector<ApiKeyResponseV2>& BatchUnbindInferApiKeysResponse::getSuccessItems()
{
    return successItems_;
}

void BatchUnbindInferApiKeysResponse::setSuccessItems(const std::vector<ApiKeyResponseV2>& value)
{
    successItems_ = value;
    successItemsIsSet_ = true;
}

bool BatchUnbindInferApiKeysResponse::successItemsIsSet() const
{
    return successItemsIsSet_;
}

void BatchUnbindInferApiKeysResponse::unsetsuccessItems()
{
    successItemsIsSet_ = false;
}

int32_t BatchUnbindInferApiKeysResponse::getFailureCount() const
{
    return failureCount_;
}

void BatchUnbindInferApiKeysResponse::setFailureCount(int32_t value)
{
    failureCount_ = value;
    failureCountIsSet_ = true;
}

bool BatchUnbindInferApiKeysResponse::failureCountIsSet() const
{
    return failureCountIsSet_;
}

void BatchUnbindInferApiKeysResponse::unsetfailureCount()
{
    failureCountIsSet_ = false;
}

std::vector<ApiKeyFailureResponse>& BatchUnbindInferApiKeysResponse::getFailureItems()
{
    return failureItems_;
}

void BatchUnbindInferApiKeysResponse::setFailureItems(const std::vector<ApiKeyFailureResponse>& value)
{
    failureItems_ = value;
    failureItemsIsSet_ = true;
}

bool BatchUnbindInferApiKeysResponse::failureItemsIsSet() const
{
    return failureItemsIsSet_;
}

void BatchUnbindInferApiKeysResponse::unsetfailureItems()
{
    failureItemsIsSet_ = false;
}

}
}
}
}
}


