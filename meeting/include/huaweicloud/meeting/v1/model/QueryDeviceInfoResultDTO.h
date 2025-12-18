
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryDeviceInfoResultDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryDeviceInfoResultDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 终端设备型号信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  QueryDeviceInfoResultDTO
    : public ModelBase
{
public:
    QueryDeviceInfoResultDTO();
    virtual ~QueryDeviceInfoResultDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryDeviceInfoResultDTO members

    /// <summary>
    /// 终端型号。
    /// </summary>

    std::string getModel() const;
    bool modelIsSet() const;
    void unsetmodel();
    void setModel(const std::string& value);

    /// <summary>
    /// 设备终端产品尺寸。
    /// </summary>

    std::string getDeviceSize() const;
    bool deviceSizeIsSet() const;
    void unsetdeviceSize();
    void setDeviceSize(const std::string& value);

    /// <summary>
    /// 终端设备购买渠道。
    /// </summary>

    std::string getPurchaseChannel() const;
    bool purchaseChannelIsSet() const;
    void unsetpurchaseChannel();
    void setPurchaseChannel(const std::string& value);


protected:
    std::string model_;
    bool modelIsSet_;
    std::string deviceSize_;
    bool deviceSizeIsSet_;
    std::string purchaseChannel_;
    bool purchaseChannelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryDeviceInfoResultDTO_H_
