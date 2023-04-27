

#include "huaweicloud/lts/v2/model/AccessConfigHostGroupIdList.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AccessConfigHostGroupIdList::AccessConfigHostGroupIdList()
{
    hostGroupIdListIsSet_ = false;
}

AccessConfigHostGroupIdList::~AccessConfigHostGroupIdList() = default;

void AccessConfigHostGroupIdList::validate()
{
}

web::json::value AccessConfigHostGroupIdList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostGroupIdListIsSet_) {
        val[utility::conversions::to_string_t("host_group_id_list")] = ModelBase::toJson(hostGroupIdList_);
    }

    return val;
}

bool AccessConfigHostGroupIdList::fromJson(const web::json::value& val)
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


std::vector<std::string>& AccessConfigHostGroupIdList::getHostGroupIdList()
{
    return hostGroupIdList_;
}

void AccessConfigHostGroupIdList::setHostGroupIdList(const std::vector<std::string>& value)
{
    hostGroupIdList_ = value;
    hostGroupIdListIsSet_ = true;
}

bool AccessConfigHostGroupIdList::hostGroupIdListIsSet() const
{
    return hostGroupIdListIsSet_;
}

void AccessConfigHostGroupIdList::unsethostGroupIdList()
{
    hostGroupIdListIsSet_ = false;
}

}
}
}
}
}


