

#include "huaweicloud/iotda/v5/model/ListBatchTaskFilesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListBatchTaskFilesRequest::ListBatchTaskFilesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListBatchTaskFilesRequest::~ListBatchTaskFilesRequest() = default;

void ListBatchTaskFilesRequest::validate()
{
}

web::json::value ListBatchTaskFilesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ListBatchTaskFilesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string ListBatchTaskFilesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListBatchTaskFilesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListBatchTaskFilesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListBatchTaskFilesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


