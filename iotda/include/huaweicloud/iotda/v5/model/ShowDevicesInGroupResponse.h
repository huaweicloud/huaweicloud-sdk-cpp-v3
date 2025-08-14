
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowDevicesInGroupResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowDevicesInGroupResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/SimplifyDevice.h>
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
class HUAWEICLOUD_IOTDA_V5_EXPORT  ShowDevicesInGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDevicesInGroupResponse();
    virtual ~ShowDevicesInGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDevicesInGroupResponse members

    /// <summary>
    /// 设备列表。
    /// </summary>

    std::vector<SimplifyDevice>& getDevices();
    bool devicesIsSet() const;
    void unsetdevices();
    void setDevices(const std::vector<SimplifyDevice>& value);

    /// <summary>
    /// 
    /// </summary>

    Page getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(const Page& value);


protected:
    std::vector<SimplifyDevice> devices_;
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

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowDevicesInGroupResponse_H_
