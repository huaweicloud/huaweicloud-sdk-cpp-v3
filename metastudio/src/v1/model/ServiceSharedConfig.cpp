

#include "huaweicloud/metastudio/v1/model/ServiceSharedConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ServiceSharedConfig::ServiceSharedConfig()
{
    enable_ = false;
    enableIsSet_ = false;
    optionalProjectIdsIsSet_ = false;
    noNeedReview_ = false;
    noNeedReviewIsSet_ = false;
}

ServiceSharedConfig::~ServiceSharedConfig() = default;

void ServiceSharedConfig::validate()
{
}

web::json::value ServiceSharedConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(optionalProjectIdsIsSet_) {
        val[utility::conversions::to_string_t("optional_project_ids")] = ModelBase::toJson(optionalProjectIds_);
    }
    if(noNeedReviewIsSet_) {
        val[utility::conversions::to_string_t("no_need_review")] = ModelBase::toJson(noNeedReview_);
    }

    return val;
}
bool ServiceSharedConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("optional_project_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("optional_project_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptionalProjectIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("no_need_review"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("no_need_review"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoNeedReview(refVal);
        }
    }
    return ok;
}


bool ServiceSharedConfig::isEnable() const
{
    return enable_;
}

void ServiceSharedConfig::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool ServiceSharedConfig::enableIsSet() const
{
    return enableIsSet_;
}

void ServiceSharedConfig::unsetenable()
{
    enableIsSet_ = false;
}

std::vector<std::string>& ServiceSharedConfig::getOptionalProjectIds()
{
    return optionalProjectIds_;
}

void ServiceSharedConfig::setOptionalProjectIds(const std::vector<std::string>& value)
{
    optionalProjectIds_ = value;
    optionalProjectIdsIsSet_ = true;
}

bool ServiceSharedConfig::optionalProjectIdsIsSet() const
{
    return optionalProjectIdsIsSet_;
}

void ServiceSharedConfig::unsetoptionalProjectIds()
{
    optionalProjectIdsIsSet_ = false;
}

bool ServiceSharedConfig::isNoNeedReview() const
{
    return noNeedReview_;
}

void ServiceSharedConfig::setNoNeedReview(bool value)
{
    noNeedReview_ = value;
    noNeedReviewIsSet_ = true;
}

bool ServiceSharedConfig::noNeedReviewIsSet() const
{
    return noNeedReviewIsSet_;
}

void ServiceSharedConfig::unsetnoNeedReview()
{
    noNeedReviewIsSet_ = false;
}

}
}
}
}
}


