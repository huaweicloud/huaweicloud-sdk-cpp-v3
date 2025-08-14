
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowOtaPackageResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowOtaPackageResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/OtaPackageInfo.h>
#include <string>
#include <huaweicloud/iotda/v5/model/FileLocation.h>
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
class HUAWEICLOUD_IOTDA_V5_EXPORT  ShowOtaPackageResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowOtaPackageResponse();
    virtual ~ShowOtaPackageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowOtaPackageResponse members

    /// <summary>
    /// **参数说明**：升级包ID，用于唯一标识一个升级包。由物联网平台分配获得。 **取值范围**：长度不超过36，只允许字母、数字、连接符（-）的组合。
    /// </summary>

    std::string getPackageId() const;
    bool packageIdIsSet() const;
    void unsetpackageId();
    void setPackageId(const std::string& value);

    /// <summary>
    /// **参数说明**：资源空间ID。 **取值范围**：长度不超过36，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// **参数说明**：升级包类型。 **取值范围**：软件包必须设置为：softwarePackage，固件包必须设置为：firmwarePackage。
    /// </summary>

    std::string getPackageType() const;
    bool packageTypeIsSet() const;
    void unsetpackageType();
    void setPackageType(const std::string& value);

    /// <summary>
    /// **参数说明**：设备关联的产品ID，用于唯一标识一个产品模型，创建产品后获得。方法请参见 [[创建产品](https://support.huaweicloud.com/api-iothub/iot_06_v5_0050.html)](tag:hws)[[创建产品](https://support.huaweicloud.com/intl/zh-cn/api-iothub/iot_06_v5_0050.html)](tag:hws_hk)。 **取值范围**：长度不超过36，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// **参数说明**：升级包版本号。 **取值范围**：长度不超过256，只允许字母、数字、下划线（_）、连接符（-）、英文点（.）的组合。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数说明**：支持用于升级此版本包的设备源版本号列表。最多支持20个源版本号。 **取值范围**：源版本号列表，源版本号只允许字母、数字、下划线（_）、连接符（-）、英文点（.）的组合。
    /// </summary>

    std::vector<std::string>& getSupportSourceVersions();
    bool supportSourceVersionsIsSet() const;
    void unsetsupportSourceVersions();
    void setSupportSourceVersions(const std::vector<std::string>& value);

    /// <summary>
    /// **参数说明**：用于描述升级包的功能等信息。 **取值范围**：长度不超过1024。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数说明**：推送给设备的自定义信息。添加该升级包完成，并创建升级任务后，物联网平台向设备下发升级通知时，会下发该自定义信息给设备。 **取值范围**：长度不超过4096。
    /// </summary>

    std::string getCustomInfo() const;
    bool customInfoIsSet() const;
    void unsetcustomInfo();
    void setCustomInfo(const std::string& value);

    /// <summary>
    /// 软固件包上传到物联网平台的时间，格式：\&quot;yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;\&quot;。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    FileLocation getFileLocation() const;
    bool fileLocationIsSet() const;
    void unsetfileLocation();
    void setFileLocation(const FileLocation& value);


protected:
    std::string packageId_;
    bool packageIdIsSet_;
    std::string appId_;
    bool appIdIsSet_;
    std::string packageType_;
    bool packageTypeIsSet_;
    std::string productId_;
    bool productIdIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::vector<std::string> supportSourceVersions_;
    bool supportSourceVersionsIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string customInfo_;
    bool customInfoIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    FileLocation fileLocation_;
    bool fileLocationIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowOtaPackageResponse_H_
