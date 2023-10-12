

#include "huaweicloud/mpc/v1/model/MixInfo_layout.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




MixInfo_layout::MixInfo_layout()
{
    panesIsSet_ = false;
}

MixInfo_layout::~MixInfo_layout() = default;

void MixInfo_layout::validate()
{
}

web::json::value MixInfo_layout::toJson() const
{
    web::json::value val = web::json::value::object();

    if(panesIsSet_) {
        val[utility::conversions::to_string_t("panes")] = ModelBase::toJson(panes_);
    }

    return val;
}
bool MixInfo_layout::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("panes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("panes"));
        if(!fieldValue.is_null())
        {
            std::vector<PaneSetting> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPanes(refVal);
        }
    }
    return ok;
}


std::vector<PaneSetting>& MixInfo_layout::getPanes()
{
    return panes_;
}

void MixInfo_layout::setPanes(const std::vector<PaneSetting>& value)
{
    panes_ = value;
    panesIsSet_ = true;
}

bool MixInfo_layout::panesIsSet() const
{
    return panesIsSet_;
}

void MixInfo_layout::unsetpanes()
{
    panesIsSet_ = false;
}

}
}
}
}
}


