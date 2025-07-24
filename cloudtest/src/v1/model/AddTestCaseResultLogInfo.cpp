

#include "huaweicloud/cloudtest/v1/model/AddTestCaseResultLogInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AddTestCaseResultLogInfo::AddTestCaseResultLogInfo()
{
    releaseDev_ = "";
    releaseDevIsSet_ = false;
}

AddTestCaseResultLogInfo::~AddTestCaseResultLogInfo() = default;

void AddTestCaseResultLogInfo::validate()
{
}

web::json::value AddTestCaseResultLogInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(releaseDevIsSet_) {
        val[utility::conversions::to_string_t("release_dev")] = ModelBase::toJson(releaseDev_);
    }

    return val;
}
bool AddTestCaseResultLogInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("release_dev"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_dev"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseDev(refVal);
        }
    }
    return ok;
}


std::string AddTestCaseResultLogInfo::getReleaseDev() const
{
    return releaseDev_;
}

void AddTestCaseResultLogInfo::setReleaseDev(const std::string& value)
{
    releaseDev_ = value;
    releaseDevIsSet_ = true;
}

bool AddTestCaseResultLogInfo::releaseDevIsSet() const
{
    return releaseDevIsSet_;
}

void AddTestCaseResultLogInfo::unsetreleaseDev()
{
    releaseDevIsSet_ = false;
}

}
}
}
}
}


