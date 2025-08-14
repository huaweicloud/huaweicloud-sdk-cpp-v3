

#include "huaweicloud/iotda/v5/model/BatchShowQueueResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




BatchShowQueueResponse::BatchShowQueueResponse()
{
    queuesIsSet_ = false;
    pageIsSet_ = false;
}

BatchShowQueueResponse::~BatchShowQueueResponse() = default;

void BatchShowQueueResponse::validate()
{
}

web::json::value BatchShowQueueResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(queuesIsSet_) {
        val[utility::conversions::to_string_t("queues")] = ModelBase::toJson(queues_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool BatchShowQueueResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("queues"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("queues"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryQueueBase> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            Page refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    return ok;
}


std::vector<QueryQueueBase>& BatchShowQueueResponse::getQueues()
{
    return queues_;
}

void BatchShowQueueResponse::setQueues(const std::vector<QueryQueueBase>& value)
{
    queues_ = value;
    queuesIsSet_ = true;
}

bool BatchShowQueueResponse::queuesIsSet() const
{
    return queuesIsSet_;
}

void BatchShowQueueResponse::unsetqueues()
{
    queuesIsSet_ = false;
}

Page BatchShowQueueResponse::getPage() const
{
    return page_;
}

void BatchShowQueueResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool BatchShowQueueResponse::pageIsSet() const
{
    return pageIsSet_;
}

void BatchShowQueueResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


