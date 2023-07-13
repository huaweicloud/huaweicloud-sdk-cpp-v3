

#include "huaweicloud/sdrs/v1/model/ListReplicationsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ListReplicationsResponse::ListReplicationsResponse()
{
    replicationsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

ListReplicationsResponse::~ListReplicationsResponse() = default;

void ListReplicationsResponse::validate()
{
}

web::json::value ListReplicationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(replicationsIsSet_) {
        val[utility::conversions::to_string_t("replications")] = ModelBase::toJson(replications_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}

bool ListReplicationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("replications"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replications"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowReplicationParams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplications(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}

std::vector<ShowReplicationParams>& ListReplicationsResponse::getReplications()
{
    return replications_;
}

void ListReplicationsResponse::setReplications(const std::vector<ShowReplicationParams>& value)
{
    replications_ = value;
    replicationsIsSet_ = true;
}

bool ListReplicationsResponse::replicationsIsSet() const
{
    return replicationsIsSet_;
}

void ListReplicationsResponse::unsetreplications()
{
    replicationsIsSet_ = false;
}

int32_t ListReplicationsResponse::getCount() const
{
    return count_;
}

void ListReplicationsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListReplicationsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListReplicationsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


