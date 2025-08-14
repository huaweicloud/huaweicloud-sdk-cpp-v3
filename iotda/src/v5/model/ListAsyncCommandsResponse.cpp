

#include "huaweicloud/iotda/v5/model/ListAsyncCommandsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListAsyncCommandsResponse::ListAsyncCommandsResponse()
{
    commandsIsSet_ = false;
    pageIsSet_ = false;
}

ListAsyncCommandsResponse::~ListAsyncCommandsResponse() = default;

void ListAsyncCommandsResponse::validate()
{
}

web::json::value ListAsyncCommandsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commandsIsSet_) {
        val[utility::conversions::to_string_t("commands")] = ModelBase::toJson(commands_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ListAsyncCommandsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("commands"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commands"));
        if(!fieldValue.is_null())
        {
            std::vector<AsyncDeviceListCommand> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommands(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            QueueCommandPage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    return ok;
}


std::vector<AsyncDeviceListCommand>& ListAsyncCommandsResponse::getCommands()
{
    return commands_;
}

void ListAsyncCommandsResponse::setCommands(const std::vector<AsyncDeviceListCommand>& value)
{
    commands_ = value;
    commandsIsSet_ = true;
}

bool ListAsyncCommandsResponse::commandsIsSet() const
{
    return commandsIsSet_;
}

void ListAsyncCommandsResponse::unsetcommands()
{
    commandsIsSet_ = false;
}

QueueCommandPage ListAsyncCommandsResponse::getPage() const
{
    return page_;
}

void ListAsyncCommandsResponse::setPage(const QueueCommandPage& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListAsyncCommandsResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListAsyncCommandsResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


