

#include "huaweicloud/iotda/v5/model/ListAsyncHistoryCommandsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListAsyncHistoryCommandsResponse::ListAsyncHistoryCommandsResponse()
{
    commandsIsSet_ = false;
    pageIsSet_ = false;
}

ListAsyncHistoryCommandsResponse::~ListAsyncHistoryCommandsResponse() = default;

void ListAsyncHistoryCommandsResponse::validate()
{
}

web::json::value ListAsyncHistoryCommandsResponse::toJson() const
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
bool ListAsyncHistoryCommandsResponse::fromJson(const web::json::value& val)
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
            HistoryCommandPage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    return ok;
}


std::vector<AsyncDeviceListCommand>& ListAsyncHistoryCommandsResponse::getCommands()
{
    return commands_;
}

void ListAsyncHistoryCommandsResponse::setCommands(const std::vector<AsyncDeviceListCommand>& value)
{
    commands_ = value;
    commandsIsSet_ = true;
}

bool ListAsyncHistoryCommandsResponse::commandsIsSet() const
{
    return commandsIsSet_;
}

void ListAsyncHistoryCommandsResponse::unsetcommands()
{
    commandsIsSet_ = false;
}

HistoryCommandPage ListAsyncHistoryCommandsResponse::getPage() const
{
    return page_;
}

void ListAsyncHistoryCommandsResponse::setPage(const HistoryCommandPage& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListAsyncHistoryCommandsResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListAsyncHistoryCommandsResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


