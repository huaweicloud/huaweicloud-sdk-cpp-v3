
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ObsForwarding_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ObsForwarding_H_


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
/// 服务配置信息
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ObsForwarding
    : public ModelBase
{
public:
    ObsForwarding();
    virtual ~ObsForwarding();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ObsForwarding members

    /// <summary>
    /// **参数说明**：OBS服务对应的region区域
    /// </summary>

    std::string getRegionName() const;
    bool regionNameIsSet() const;
    void unsetregionName();
    void setRegionName(const std::string& value);

    /// <summary>
    /// **参数说明**：OBS服务对应的projectId信息
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数说明**：OBS服务对应的桶名称
    /// </summary>

    std::string getBucketName() const;
    bool bucketNameIsSet() const;
    void unsetbucketName();
    void setBucketName(const std::string& value);

    /// <summary>
    /// **参数说明**：OBS服务对应桶的区域
    /// </summary>

    std::string getLocation() const;
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::string& value);

    /// <summary>
    /// **参数说明**：OBS服务中存储通道文件的自定义目录,多级目录可用(/)进行分隔，不可以斜杠(/)开头或结尾，不能包含两个以上相邻的斜杠(/) **取值范围**: 英文字母(a-zA-Z)、数字(0-9)、下划线(_)、中划线(-)、斜杠(/)和大括号({})，最大字符长度256个字符。其中大括号只能用于对应模板参数。 **模板参数**:    - \\{YYYY\\} 年   - \\{MM\\} 月   - \\{DD\\} 日   - \\{HH\\} 小时   - \\{appId\\} 应用ID   - \\{deviceId\\} 设备ID   例如:自定义目录结构为\\{YYYY\\}/\\{MM\\}/\\{DD\\}/\\{HH\\},则会在转发数据时，根据当前时间往对应的目录结构2021&gt;08&gt;11&gt;09下生成对应的数据。
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);


protected:
    std::string regionName_;
    bool regionNameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string bucketName_;
    bool bucketNameIsSet_;
    std::string location_;
    bool locationIsSet_;
    std::string filePath_;
    bool filePathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ObsForwarding_H_
