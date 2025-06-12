

#include "huaweicloud/metastudio/v1/model/BatchExecuteAssetActionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




BatchExecuteAssetActionResponse::BatchExecuteAssetActionResponse()
{
    resultsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

BatchExecuteAssetActionResponse::~BatchExecuteAssetActionResponse() = default;

void BatchExecuteAssetActionResponse::validate()
{
}

web::json::value BatchExecuteAssetActionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool BatchExecuteAssetActionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<AssetActionResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::vector<AssetActionResult>& BatchExecuteAssetActionResponse::getResults()
{
    return results_;
}

void BatchExecuteAssetActionResponse::setResults(const std::vector<AssetActionResult>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool BatchExecuteAssetActionResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void BatchExecuteAssetActionResponse::unsetresults()
{
    resultsIsSet_ = false;
}

std::string BatchExecuteAssetActionResponse::getXRequestId() const
{
    return xRequestId_;
}

void BatchExecuteAssetActionResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchExecuteAssetActionResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchExecuteAssetActionResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


