

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowEpsRemainingQuotaRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowEpsRemainingQuotaRequestBody::ShowEpsRemainingQuotaRequestBody()
{
    epsTagsIsSet_ = false;
}

ShowEpsRemainingQuotaRequestBody::~ShowEpsRemainingQuotaRequestBody() = default;

void ShowEpsRemainingQuotaRequestBody::validate()
{
}

web::json::value ShowEpsRemainingQuotaRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(epsTagsIsSet_) {
        val[utility::conversions::to_string_t("eps_tags")] = ModelBase::toJson(epsTags_);
    }

    return val;
}
bool ShowEpsRemainingQuotaRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eps_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eps_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEpsTags(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ShowEpsRemainingQuotaRequestBody::getEpsTags()
{
    return epsTags_;
}

void ShowEpsRemainingQuotaRequestBody::setEpsTags(const std::vector<std::string>& value)
{
    epsTags_ = value;
    epsTagsIsSet_ = true;
}

bool ShowEpsRemainingQuotaRequestBody::epsTagsIsSet() const
{
    return epsTagsIsSet_;
}

void ShowEpsRemainingQuotaRequestBody::unsetepsTags()
{
    epsTagsIsSet_ = false;
}

}
}
}
}
}


