

#include "huaweicloud/projectman/v4/model/BatchDeleteScrumWorkitemResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchDeleteScrumWorkitemResponse::BatchDeleteScrumWorkitemResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

BatchDeleteScrumWorkitemResponse::~BatchDeleteScrumWorkitemResponse() = default;

void BatchDeleteScrumWorkitemResponse::validate()
{
}

web::json::value BatchDeleteScrumWorkitemResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool BatchDeleteScrumWorkitemResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            BatchDeletesResponse_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


BatchDeletesResponse_result BatchDeleteScrumWorkitemResponse::getResult() const
{
    return result_;
}

void BatchDeleteScrumWorkitemResponse::setResult(const BatchDeletesResponse_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchDeleteScrumWorkitemResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BatchDeleteScrumWorkitemResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string BatchDeleteScrumWorkitemResponse::getStatus() const
{
    return status_;
}

void BatchDeleteScrumWorkitemResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchDeleteScrumWorkitemResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchDeleteScrumWorkitemResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


