

#include "huaweicloud/rds/v3/model/ListXellogFilesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListXellogFilesResponse::ListXellogFilesResponse()
{
    listIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

ListXellogFilesResponse::~ListXellogFilesResponse() = default;

void ListXellogFilesResponse::validate()
{
}

web::json::value ListXellogFilesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ListXellogFilesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<ListXelLogResponseResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
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


std::vector<ListXelLogResponseResult>& ListXellogFilesResponse::getList()
{
    return list_;
}

void ListXellogFilesResponse::setList(const std::vector<ListXelLogResponseResult>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool ListXellogFilesResponse::listIsSet() const
{
    return listIsSet_;
}

void ListXellogFilesResponse::unsetlist()
{
    listIsSet_ = false;
}

int32_t ListXellogFilesResponse::getCount() const
{
    return count_;
}

void ListXellogFilesResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListXellogFilesResponse::countIsSet() const
{
    return countIsSet_;
}

void ListXellogFilesResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


