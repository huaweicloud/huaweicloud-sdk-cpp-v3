
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDevicesResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDevicesResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/QueryDeviceSimplify.h>
#include <huaweicloud/iotda/v5/model/Page.h>
#include <vector>

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
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListDevicesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDevicesResponse();
    virtual ~ListDevicesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDevicesResponse members

    /// <summary>
    /// 设备信息列表。
    /// </summary>

    std::vector<QueryDeviceSimplify>& getDevices();
    bool devicesIsSet() const;
    void unsetdevices();
    void setDevices(const std::vector<QueryDeviceSimplify>& value);

    /// <summary>
    /// 
    /// </summary>

    Page getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(const Page& value);


protected:
    std::vector<QueryDeviceSimplify> devices_;
    bool devicesIsSet_;
    Page page_;
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

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDevicesResponse_H_
