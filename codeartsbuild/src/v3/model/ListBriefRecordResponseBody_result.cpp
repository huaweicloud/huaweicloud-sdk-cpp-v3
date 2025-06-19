

#include "huaweicloud/codeartsbuild/v3/model/ListBriefRecordResponseBody_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListBriefRecordResponseBody_result::ListBriefRecordResponseBody_result()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    briefBuildRecordDtosIsSet_ = false;
}

ListBriefRecordResponseBody_result::~ListBriefRecordResponseBody_result() = default;

void ListBriefRecordResponseBody_result::validate()
{
}

web::json::value ListBriefRecordResponseBody_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(briefBuildRecordDtosIsSet_) {
        val[utility::conversions::to_string_t("brief_build_record_dtos")] = ModelBase::toJson(briefBuildRecordDtos_);
    }

    return val;
}
bool ListBriefRecordResponseBody_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("brief_build_record_dtos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("brief_build_record_dtos"));
        if(!fieldValue.is_null())
        {
            std::vector<BriefRecordItems> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBriefBuildRecordDtos(refVal);
        }
    }
    return ok;
}


std::string ListBriefRecordResponseBody_result::getProjectId() const
{
    return projectId_;
}

void ListBriefRecordResponseBody_result::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListBriefRecordResponseBody_result::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListBriefRecordResponseBody_result::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<BriefRecordItems>& ListBriefRecordResponseBody_result::getBriefBuildRecordDtos()
{
    return briefBuildRecordDtos_;
}

void ListBriefRecordResponseBody_result::setBriefBuildRecordDtos(const std::vector<BriefRecordItems>& value)
{
    briefBuildRecordDtos_ = value;
    briefBuildRecordDtosIsSet_ = true;
}

bool ListBriefRecordResponseBody_result::briefBuildRecordDtosIsSet() const
{
    return briefBuildRecordDtosIsSet_;
}

void ListBriefRecordResponseBody_result::unsetbriefBuildRecordDtos()
{
    briefBuildRecordDtosIsSet_ = false;
}

}
}
}
}
}


