
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ObsLocation_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ObsLocation_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 升级包在OBS的位置
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ObsLocation
    : public ModelBase
{
public:
    ObsLocation();
    virtual ~ObsLocation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ObsLocation members

    /// <summary>
    /// **参数说明**：OBS所在区域。您可以从[[地区和终端节点](https://developer.huaweicloud.com/endpoint?OBS)](tag:hws)[[地区和终端节点](https://developer.huaweicloud.com/intl/zh-cn/endpoint?OBS)](tag:hws_hk)中查询服务的终端节点。 **取值范围**：长度不超过256，只允许字母、数字、连接符（-）的组合。
    /// </summary>

    std::string getRegionName() const;
    bool regionNameIsSet() const;
    void unsetregionName();
    void setRegionName(const std::string& value);

    /// <summary>
    /// **参数说明**：OBS桶名称。 **取值范围**：长度最小为3，最大为63，只允许小写字母、数字、连接符（-）、英文点（.）的组合。
    /// </summary>

    std::string getBucketName() const;
    bool bucketNameIsSet() const;
    void unsetbucketName();
    void setBucketName(const std::string& value);

    /// <summary>
    /// **参数说明**：OBS对象名称(包含文件夹路径)。 **取值范围**：长度不超过1024。
    /// </summary>

    std::string getObjectKey() const;
    bool objectKeyIsSet() const;
    void unsetobjectKey();
    void setObjectKey(const std::string& value);

    /// <summary>
    /// **参数说明**：SHA256算法计算出的升级包签名值。添加该升级包完成，并创建升级任务后，物联网平台向设备下发升级通知时，会下发该签名给设备。 **取值范围**：长度为64，只允许大小写字母a到f、数字的组合。
    /// </summary>

    std::string getSign() const;
    bool signIsSet() const;
    void unsetsign();
    void setSign(const std::string& value);


protected:
    std::string regionName_;
    bool regionNameIsSet_;
    std::string bucketName_;
    bool bucketNameIsSet_;
    std::string objectKey_;
    bool objectKeyIsSet_;
    std::string sign_;
    bool signIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ObsLocation_H_
