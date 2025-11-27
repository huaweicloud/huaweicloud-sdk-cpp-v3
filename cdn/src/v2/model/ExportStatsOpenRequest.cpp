

#include "huaweicloud/cdn/v2/model/ExportStatsOpenRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ExportStatsOpenRequest::ExportStatsOpenRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExportStatsOpenRequest::~ExportStatsOpenRequest() = default;

void ExportStatsOpenRequest::validate()
{
}

web::json::value ExportStatsOpenRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ExportStatsOpenRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ExportVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExportStatsOpenRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ExportStatsOpenRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ExportStatsOpenRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ExportStatsOpenRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

ExportVo ExportStatsOpenRequest::getBody() const
{
    return body_;
}

void ExportStatsOpenRequest::setBody(const ExportVo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExportStatsOpenRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExportStatsOpenRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


