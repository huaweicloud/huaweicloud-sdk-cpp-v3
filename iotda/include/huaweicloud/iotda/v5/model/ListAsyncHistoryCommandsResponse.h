
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListAsyncHistoryCommandsResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListAsyncHistoryCommandsResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/HistoryCommandPage.h>
#include <vector>
#include <huaweicloud/iotda/v5/model/AsyncDeviceListCommand.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListAsyncHistoryCommandsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAsyncHistoryCommandsResponse();
    virtual ~ListAsyncHistoryCommandsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAsyncHistoryCommandsResponse members

    /// <summary>
    /// 设备历史命令列表。
    /// </summary>

    std::vector<AsyncDeviceListCommand>& getCommands();
    bool commandsIsSet() const;
    void unsetcommands();
    void setCommands(const std::vector<AsyncDeviceListCommand>& value);

    /// <summary>
    /// 
    /// </summary>

    HistoryCommandPage getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(const HistoryCommandPage& value);


protected:
    std::vector<AsyncDeviceListCommand> commands_;
    bool commandsIsSet_;
    HistoryCommandPage page_;
    bool pageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListAsyncHistoryCommandsResponse_H_
