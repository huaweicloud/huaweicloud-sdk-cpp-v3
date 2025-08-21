

#include "huaweicloud/cfw/v1/model/ShowEwAssociatedErResp_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowEwAssociatedErResp_data::ShowEwAssociatedErResp_data()
{
    erListIsSet_ = false;
}

ShowEwAssociatedErResp_data::~ShowEwAssociatedErResp_data() = default;

void ShowEwAssociatedErResp_data::validate()
{
}

web::json::value ShowEwAssociatedErResp_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(erListIsSet_) {
        val[utility::conversions::to_string_t("er_list")] = ModelBase::toJson(erList_);
    }

    return val;
}
bool ShowEwAssociatedErResp_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("er_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("er_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ErInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErList(refVal);
        }
    }
    return ok;
}


std::vector<ErInfo>& ShowEwAssociatedErResp_data::getErList()
{
    return erList_;
}

void ShowEwAssociatedErResp_data::setErList(const std::vector<ErInfo>& value)
{
    erList_ = value;
    erListIsSet_ = true;
}

bool ShowEwAssociatedErResp_data::erListIsSet() const
{
    return erListIsSet_;
}

void ShowEwAssociatedErResp_data::unseterList()
{
    erListIsSet_ = false;
}

}
}
}
}
}


