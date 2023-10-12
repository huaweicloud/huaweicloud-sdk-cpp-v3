

#include "huaweicloud/lts/v2/model/AccessConfigHostGroupIdListCreate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AccessConfigHostGroupIdListCreate::AccessConfigHostGroupIdListCreate()
{
    hostGroupIdListIsSet_ = false;
}

AccessConfigHostGroupIdListCreate::~AccessConfigHostGroupIdListCreate() = default;

void AccessConfigHostGroupIdListCreate::validate()
{
}

web::json::value AccessConfigHostGroupIdListCreate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostGroupIdListIsSet_) {
        val[utility::conversions::to_string_t("host_group_id_list")] = ModelBase::toJson(hostGroupIdList_);
    }

    return val;
}
bool AccessConfigHostGroupIdListCreate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("host_group_id_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_group_id_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostGroupIdList(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& AccessConfigHostGroupIdListCreate::getHostGroupIdList()
{
    return hostGroupIdList_;
}

void AccessConfigHostGroupIdListCreate::setHostGroupIdList(const std::vector<std::string>& value)
{
    hostGroupIdList_ = value;
    hostGroupIdListIsSet_ = true;
}

bool AccessConfigHostGroupIdListCreate::hostGroupIdListIsSet() const
{
    return hostGroupIdListIsSet_;
}

void AccessConfigHostGroupIdListCreate::unsethostGroupIdList()
{
    hostGroupIdListIsSet_ = false;
}

}
}
}
}
}


