

#include "huaweicloud/gaussdbforopengauss/v3/model/ListWdrSnapshotAvailableGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListWdrSnapshotAvailableGroupsRequest::ListWdrSnapshotAvailableGroupsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListWdrSnapshotAvailableGroupsRequest::~ListWdrSnapshotAvailableGroupsRequest() = default;

void ListWdrSnapshotAvailableGroupsRequest::validate()
{
}

web::json::value ListWdrSnapshotAvailableGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ListWdrSnapshotAvailableGroupsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string ListWdrSnapshotAvailableGroupsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListWdrSnapshotAvailableGroupsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListWdrSnapshotAvailableGroupsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListWdrSnapshotAvailableGroupsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListWdrSnapshotAvailableGroupsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListWdrSnapshotAvailableGroupsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListWdrSnapshotAvailableGroupsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListWdrSnapshotAvailableGroupsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListWdrSnapshotAvailableGroupsRequest::getBeginTime() const
{
    return beginTime_;
}

void ListWdrSnapshotAvailableGroupsRequest::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ListWdrSnapshotAvailableGroupsRequest::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ListWdrSnapshotAvailableGroupsRequest::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ListWdrSnapshotAvailableGroupsRequest::getEndTime() const
{
    return endTime_;
}

void ListWdrSnapshotAvailableGroupsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListWdrSnapshotAvailableGroupsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListWdrSnapshotAvailableGroupsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


