

#include "huaweicloud/meeting/v1/model/SearchDepartmentByNameResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchDepartmentByNameResponse::SearchDepartmentByNameResponse()
{
    bodyIsSet_ = false;
}

SearchDepartmentByNameResponse::~SearchDepartmentByNameResponse() = default;

void SearchDepartmentByNameResponse::validate()
{
}

web::json::value SearchDepartmentByNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SearchDepartmentByNameResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryDeptResultDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<QueryDeptResultDTO>& SearchDepartmentByNameResponse::getBody()
{
    return body_;
}

void SearchDepartmentByNameResponse::setBody(const std::vector<QueryDeptResultDTO>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SearchDepartmentByNameResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void SearchDepartmentByNameResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


