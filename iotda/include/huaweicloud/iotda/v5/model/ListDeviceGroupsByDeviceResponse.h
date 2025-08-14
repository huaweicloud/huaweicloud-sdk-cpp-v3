
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDeviceGroupsByDeviceResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDeviceGroupsByDeviceResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/iotda/v5/model/ListDeviceGroupSummary.h>

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
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListDeviceGroupsByDeviceResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDeviceGroupsByDeviceResponse();
    virtual ~ListDeviceGroupsByDeviceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDeviceGroupsByDeviceResponse members

    /// <summary>
    /// 设备组信息列表。
    /// </summary>

    std::vector<ListDeviceGroupSummary>& getDeviceGroups();
    bool deviceGroupsIsSet() const;
    void unsetdeviceGroups();
    void setDeviceGroups(const std::vector<ListDeviceGroupSummary>& value);


protected:
    std::vector<ListDeviceGroupSummary> deviceGroups_;
    bool deviceGroupsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDeviceGroupsByDeviceResponse_H_
