

#include "huaweicloud/codeartsbuild/v3/model/ListKeystoreResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListKeystoreResponse::ListKeystoreResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListKeystoreResponse::~ListKeystoreResponse() = default;

void ListKeystoreResponse::validate()
{
}

web::json::value ListKeystoreResponse::toJson() const
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
bool ListKeystoreResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<ListKeystore_result> refVal;
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


std::vector<ListKeystore_result>& ListKeystoreResponse::getResult()
{
    return result_;
}

void ListKeystoreResponse::setResult(const std::vector<ListKeystore_result>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListKeystoreResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListKeystoreResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListKeystoreResponse::getStatus() const
{
    return status_;
}

void ListKeystoreResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListKeystoreResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListKeystoreResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


