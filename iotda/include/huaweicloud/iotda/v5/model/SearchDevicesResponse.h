
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_SearchDevicesResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_SearchDevicesResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/SearchDevice.h>
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
class HUAWEICLOUD_IOTDA_V5_EXPORT  SearchDevicesResponse
    : public ModelBase, public HttpResponse
{
public:
    SearchDevicesResponse();
    virtual ~SearchDevicesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchDevicesResponse members

    /// <summary>
    /// 搜索设备结果列表。
    /// </summary>

    std::vector<SearchDevice>& getDevices();
    bool devicesIsSet() const;
    void unsetdevices();
    void setDevices(const std::vector<SearchDevice>& value);

    /// <summary>
    /// 满足查询条件的记录总数(只有条件为select count(*)/count(1)时单独返回)。
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);


protected:
    std::vector<SearchDevice> devices_;
    bool devicesIsSet_;
    int64_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_SearchDevicesResponse_H_
