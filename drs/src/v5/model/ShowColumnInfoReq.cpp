

#include "huaweicloud/drs/v5/model/ShowColumnInfoReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowColumnInfoReq::ShowColumnInfoReq()
{
    refresh_ = false;
    refreshIsSet_ = false;
    objectIdsIsSet_ = false;
}

ShowColumnInfoReq::~ShowColumnInfoReq() = default;

void ShowColumnInfoReq::validate()
{
}

web::json::value ShowColumnInfoReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(refreshIsSet_) {
        val[utility::conversions::to_string_t("refresh")] = ModelBase::toJson(refresh_);
    }
    if(objectIdsIsSet_) {
        val[utility::conversions::to_string_t("object_ids")] = ModelBase::toJson(objectIds_);
    }

    return val;
}
bool ShowColumnInfoReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("refresh"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("refresh"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefresh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectIds(refVal);
        }
    }
    return ok;
}


bool ShowColumnInfoReq::isRefresh() const
{
    return refresh_;
}

void ShowColumnInfoReq::setRefresh(bool value)
{
    refresh_ = value;
    refreshIsSet_ = true;
}

bool ShowColumnInfoReq::refreshIsSet() const
{
    return refreshIsSet_;
}

void ShowColumnInfoReq::unsetrefresh()
{
    refreshIsSet_ = false;
}

std::vector<std::string>& ShowColumnInfoReq::getObjectIds()
{
    return objectIds_;
}

void ShowColumnInfoReq::setObjectIds(const std::vector<std::string>& value)
{
    objectIds_ = value;
    objectIdsIsSet_ = true;
}

bool ShowColumnInfoReq::objectIdsIsSet() const
{
    return objectIdsIsSet_;
}

void ShowColumnInfoReq::unsetobjectIds()
{
    objectIdsIsSet_ = false;
}

}
}
}
}
}


