

#include "huaweicloud/cloudtest/v1/model/ListBranchesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListBranchesResponse::ListBranchesResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    valuesIsSet_ = false;
}

ListBranchesResponse::~ListBranchesResponse() = default;

void ListBranchesResponse::validate()
{
}

web::json::value ListBranchesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}
bool ListBranchesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::vector<ExternalBranchInfoVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    return ok;
}


int32_t ListBranchesResponse::getTotal() const
{
    return total_;
}

void ListBranchesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListBranchesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListBranchesResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::string ListBranchesResponse::getProjectId() const
{
    return projectId_;
}

void ListBranchesResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListBranchesResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListBranchesResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<ExternalBranchInfoVo>& ListBranchesResponse::getValues()
{
    return values_;
}

void ListBranchesResponse::setValues(const std::vector<ExternalBranchInfoVo>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ListBranchesResponse::valuesIsSet() const
{
    return valuesIsSet_;
}

void ListBranchesResponse::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


