

#include "huaweicloud/lts/v2/model/GetHostGroupListRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




GetHostGroupListRequestBody::GetHostGroupListRequestBody()
{
    hostGroupIdListIsSet_ = false;
    filterIsSet_ = false;
}

GetHostGroupListRequestBody::~GetHostGroupListRequestBody() = default;

void GetHostGroupListRequestBody::validate()
{
}

web::json::value GetHostGroupListRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostGroupIdListIsSet_) {
        val[utility::conversions::to_string_t("host_group_id_list")] = ModelBase::toJson(hostGroupIdList_);
    }
    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }

    return val;
}

bool GetHostGroupListRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter"));
        if(!fieldValue.is_null())
        {
            GetHostGroupListFilter refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilter(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& GetHostGroupListRequestBody::getHostGroupIdList()
{
    return hostGroupIdList_;
}

void GetHostGroupListRequestBody::setHostGroupIdList(const std::vector<std::string>& value)
{
    hostGroupIdList_ = value;
    hostGroupIdListIsSet_ = true;
}

bool GetHostGroupListRequestBody::hostGroupIdListIsSet() const
{
    return hostGroupIdListIsSet_;
}

void GetHostGroupListRequestBody::unsethostGroupIdList()
{
    hostGroupIdListIsSet_ = false;
}

GetHostGroupListFilter GetHostGroupListRequestBody::getFilter() const
{
    return filter_;
}

void GetHostGroupListRequestBody::setFilter(const GetHostGroupListFilter& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool GetHostGroupListRequestBody::filterIsSet() const
{
    return filterIsSet_;
}

void GetHostGroupListRequestBody::unsetfilter()
{
    filterIsSet_ = false;
}

}
}
}
}
}


