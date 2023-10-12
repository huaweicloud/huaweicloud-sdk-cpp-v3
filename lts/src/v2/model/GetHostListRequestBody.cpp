

#include "huaweicloud/lts/v2/model/GetHostListRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




GetHostListRequestBody::GetHostListRequestBody()
{
    hostIdListIsSet_ = false;
    filterIsSet_ = false;
}

GetHostListRequestBody::~GetHostListRequestBody() = default;

void GetHostListRequestBody::validate()
{
}

web::json::value GetHostListRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostIdListIsSet_) {
        val[utility::conversions::to_string_t("host_id_list")] = ModelBase::toJson(hostIdList_);
    }
    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }

    return val;
}
bool GetHostListRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("host_id_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_id_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostIdList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter"));
        if(!fieldValue.is_null())
        {
            GetHostListFilter refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilter(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& GetHostListRequestBody::getHostIdList()
{
    return hostIdList_;
}

void GetHostListRequestBody::setHostIdList(const std::vector<std::string>& value)
{
    hostIdList_ = value;
    hostIdListIsSet_ = true;
}

bool GetHostListRequestBody::hostIdListIsSet() const
{
    return hostIdListIsSet_;
}

void GetHostListRequestBody::unsethostIdList()
{
    hostIdListIsSet_ = false;
}

GetHostListFilter GetHostListRequestBody::getFilter() const
{
    return filter_;
}

void GetHostListRequestBody::setFilter(const GetHostListFilter& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool GetHostListRequestBody::filterIsSet() const
{
    return filterIsSet_;
}

void GetHostListRequestBody::unsetfilter()
{
    filterIsSet_ = false;
}

}
}
}
}
}


