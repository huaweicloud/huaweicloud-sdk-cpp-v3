

#include "huaweicloud/modelarts/v1/model/ShowAuthmodeDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowAuthmodeDetailResponse::ShowAuthmodeDetailResponse()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
}

ShowAuthmodeDetailResponse::~ShowAuthmodeDetailResponse() = default;

void ShowAuthmodeDetailResponse::validate()
{
}

web::json::value ShowAuthmodeDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool ShowAuthmodeDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    return ok;
}


std::string ShowAuthmodeDetailResponse::getDomainId() const
{
    return domainId_;
}

void ShowAuthmodeDetailResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowAuthmodeDetailResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowAuthmodeDetailResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowAuthmodeDetailResponse::getMode() const
{
    return mode_;
}

void ShowAuthmodeDetailResponse::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ShowAuthmodeDetailResponse::modeIsSet() const
{
    return modeIsSet_;
}

void ShowAuthmodeDetailResponse::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


