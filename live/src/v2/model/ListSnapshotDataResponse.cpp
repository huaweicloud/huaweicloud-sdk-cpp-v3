

#include "huaweicloud/live/v2/model/ListSnapshotDataResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListSnapshotDataResponse::ListSnapshotDataResponse()
{
    snapshotListIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListSnapshotDataResponse::~ListSnapshotDataResponse() = default;

void ListSnapshotDataResponse::validate()
{
}

web::json::value ListSnapshotDataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotListIsSet_) {
        val[utility::conversions::to_string_t("snapshot_list")] = ModelBase::toJson(snapshotList_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListSnapshotDataResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshot_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_list"));
        if(!fieldValue.is_null())
        {
            std::vector<SnapshotData> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::vector<SnapshotData>& ListSnapshotDataResponse::getSnapshotList()
{
    return snapshotList_;
}

void ListSnapshotDataResponse::setSnapshotList(const std::vector<SnapshotData>& value)
{
    snapshotList_ = value;
    snapshotListIsSet_ = true;
}

bool ListSnapshotDataResponse::snapshotListIsSet() const
{
    return snapshotListIsSet_;
}

void ListSnapshotDataResponse::unsetsnapshotList()
{
    snapshotListIsSet_ = false;
}

int64_t ListSnapshotDataResponse::getTotal() const
{
    return total_;
}

void ListSnapshotDataResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListSnapshotDataResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListSnapshotDataResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::string ListSnapshotDataResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListSnapshotDataResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListSnapshotDataResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListSnapshotDataResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


