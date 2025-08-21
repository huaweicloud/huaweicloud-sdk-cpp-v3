

#include "huaweicloud/cfw/v1/model/ShowEwAssociatedVpcResp_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowEwAssociatedVpcResp_data::ShowEwAssociatedVpcResp_data()
{
    inspectionVpcListIsSet_ = false;
}

ShowEwAssociatedVpcResp_data::~ShowEwAssociatedVpcResp_data() = default;

void ShowEwAssociatedVpcResp_data::validate()
{
}

web::json::value ShowEwAssociatedVpcResp_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inspectionVpcListIsSet_) {
        val[utility::conversions::to_string_t("inspection_vpc_list")] = ModelBase::toJson(inspectionVpcList_);
    }

    return val;
}
bool ShowEwAssociatedVpcResp_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("inspection_vpc_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inspection_vpc_list"));
        if(!fieldValue.is_null())
        {
            std::vector<InspectionVpcInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInspectionVpcList(refVal);
        }
    }
    return ok;
}


std::vector<InspectionVpcInfo>& ShowEwAssociatedVpcResp_data::getInspectionVpcList()
{
    return inspectionVpcList_;
}

void ShowEwAssociatedVpcResp_data::setInspectionVpcList(const std::vector<InspectionVpcInfo>& value)
{
    inspectionVpcList_ = value;
    inspectionVpcListIsSet_ = true;
}

bool ShowEwAssociatedVpcResp_data::inspectionVpcListIsSet() const
{
    return inspectionVpcListIsSet_;
}

void ShowEwAssociatedVpcResp_data::unsetinspectionVpcList()
{
    inspectionVpcListIsSet_ = false;
}

}
}
}
}
}


