

#include "huaweicloud/codeartsbuild/v3/model/ListJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListJobResponse::ListJobResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListJobResponse::~ListJobResponse() = default;

void ListJobResponse::validate()
{
}

web::json::value ListJobResponse::toJson() const
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
bool ListJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ListJob_result refVal;
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


ListJob_result ListJobResponse::getResult() const
{
    return result_;
}

void ListJobResponse::setResult(const ListJob_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListJobResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListJobResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListJobResponse::getStatus() const
{
    return status_;
}

void ListJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


