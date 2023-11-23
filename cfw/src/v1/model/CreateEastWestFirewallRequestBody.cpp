

#include "huaweicloud/cfw/v1/model/CreateEastWestFirewallRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateEastWestFirewallRequestBody::CreateEastWestFirewallRequestBody()
{
    erId_ = "";
    erIdIsSet_ = false;
    inspectionCidr_ = "";
    inspectionCidrIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
}

CreateEastWestFirewallRequestBody::~CreateEastWestFirewallRequestBody() = default;

void CreateEastWestFirewallRequestBody::validate()
{
}

web::json::value CreateEastWestFirewallRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(erIdIsSet_) {
        val[utility::conversions::to_string_t("er_id")] = ModelBase::toJson(erId_);
    }
    if(inspectionCidrIsSet_) {
        val[utility::conversions::to_string_t("inspection_cidr")] = ModelBase::toJson(inspectionCidr_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool CreateEastWestFirewallRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("er_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("er_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inspection_cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inspection_cidr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInspectionCidr(refVal);
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


std::string CreateEastWestFirewallRequestBody::getErId() const
{
    return erId_;
}

void CreateEastWestFirewallRequestBody::setErId(const std::string& value)
{
    erId_ = value;
    erIdIsSet_ = true;
}

bool CreateEastWestFirewallRequestBody::erIdIsSet() const
{
    return erIdIsSet_;
}

void CreateEastWestFirewallRequestBody::unseterId()
{
    erIdIsSet_ = false;
}

std::string CreateEastWestFirewallRequestBody::getInspectionCidr() const
{
    return inspectionCidr_;
}

void CreateEastWestFirewallRequestBody::setInspectionCidr(const std::string& value)
{
    inspectionCidr_ = value;
    inspectionCidrIsSet_ = true;
}

bool CreateEastWestFirewallRequestBody::inspectionCidrIsSet() const
{
    return inspectionCidrIsSet_;
}

void CreateEastWestFirewallRequestBody::unsetinspectionCidr()
{
    inspectionCidrIsSet_ = false;
}

std::string CreateEastWestFirewallRequestBody::getMode() const
{
    return mode_;
}

void CreateEastWestFirewallRequestBody::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool CreateEastWestFirewallRequestBody::modeIsSet() const
{
    return modeIsSet_;
}

void CreateEastWestFirewallRequestBody::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


