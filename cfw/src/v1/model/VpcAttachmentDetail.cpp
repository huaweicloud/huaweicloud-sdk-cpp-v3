

#include "huaweicloud/cfw/v1/model/VpcAttachmentDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




VpcAttachmentDetail::VpcAttachmentDetail()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
}

VpcAttachmentDetail::~VpcAttachmentDetail() = default;

void VpcAttachmentDetail::validate()
{
}

web::json::value VpcAttachmentDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }

    return val;
}
bool VpcAttachmentDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    return ok;
}


std::string VpcAttachmentDetail::getVpcId() const
{
    return vpcId_;
}

void VpcAttachmentDetail::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool VpcAttachmentDetail::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void VpcAttachmentDetail::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

}
}
}
}
}


