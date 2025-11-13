

#include "huaweicloud/metastudio/v1/model/CreateShortJobReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateShortJobReq::CreateShortJobReq()
{
    jobTypeIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
}

CreateShortJobReq::~CreateShortJobReq() = default;

void CreateShortJobReq::validate()
{
}

web::json::value CreateShortJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}
bool CreateShortJobReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_type"));
        if(!fieldValue.is_null())
        {
            ShortJobType refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    return ok;
}


ShortJobType CreateShortJobReq::getJobType() const
{
    return jobType_;
}

void CreateShortJobReq::setJobType(const ShortJobType& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool CreateShortJobReq::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void CreateShortJobReq::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string CreateShortJobReq::getLanguage() const
{
    return language_;
}

void CreateShortJobReq::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool CreateShortJobReq::languageIsSet() const
{
    return languageIsSet_;
}

void CreateShortJobReq::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


