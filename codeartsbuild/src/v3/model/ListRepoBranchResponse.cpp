

#include "huaweicloud/codeartsbuild/v3/model/ListRepoBranchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListRepoBranchResponse::ListRepoBranchResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
}

ListRepoBranchResponse::~ListRepoBranchResponse() = default;

void ListRepoBranchResponse::validate()
{
}

web::json::value ListRepoBranchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ListRepoBranchResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListRepoBranchResponse::getStatus() const
{
    return status_;
}

void ListRepoBranchResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListRepoBranchResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListRepoBranchResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& ListRepoBranchResponse::getResult()
{
    return result_;
}

void ListRepoBranchResponse::setResult(const std::vector<std::string>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListRepoBranchResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListRepoBranchResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


