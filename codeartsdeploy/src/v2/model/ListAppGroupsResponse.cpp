

#include "huaweicloud/codeartsdeploy/v2/model/ListAppGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListAppGroupsResponse::ListAppGroupsResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListAppGroupsResponse::~ListAppGroupsResponse() = default;

void ListAppGroupsResponse::validate()
{
}

web::json::value ListAppGroupsResponse::toJson() const
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
bool ListAppGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<AppGroupsEntity> refVal;
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


std::vector<AppGroupsEntity>& ListAppGroupsResponse::getResult()
{
    return result_;
}

void ListAppGroupsResponse::setResult(const std::vector<AppGroupsEntity>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListAppGroupsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListAppGroupsResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListAppGroupsResponse::getStatus() const
{
    return status_;
}

void ListAppGroupsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAppGroupsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListAppGroupsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


