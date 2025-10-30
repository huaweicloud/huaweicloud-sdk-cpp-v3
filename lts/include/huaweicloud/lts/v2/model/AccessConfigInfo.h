
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigInfo_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigInfo_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/AccessConfigHostGroupIdList.h>
#include <huaweicloud/lts/v2/model/AccessConfigDeatilCreate.h>
#include <string>
#include <huaweicloud/lts/v2/model/AccessConfigQueryLogInfo.h>
#include <huaweicloud/lts/v2/model/AccessConfigTag.h>
#include <huaweicloud/lts/v2/model/DemoFieldAccess.h>
#include <huaweicloud/lts/v2/model/Processor.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 日志接入配置
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  AccessConfigInfo
    : public ModelBase
{
public:
    AccessConfigInfo();
    virtual ~AccessConfigInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccessConfigInfo members

    /// <summary>
    /// 日志接入ID
    /// </summary>

    std::string getAccessConfigId() const;
    bool accessConfigIdIsSet() const;
    void unsetaccessConfigId();
    void setAccessConfigId(const std::string& value);

    /// <summary>
    /// 日志接入名称
    /// </summary>

    std::string getAccessConfigName() const;
    bool accessConfigNameIsSet() const;
    void unsetaccessConfigName();
    void setAccessConfigName(const std::string& value);

    /// <summary>
    /// 日志接入类型。AGENT：ECS接入  K8S_CCE: CCE接入
    /// </summary>

    std::string getAccessConfigType() const;
    bool accessConfigTypeIsSet() const;
    void unsetaccessConfigType();
    void setAccessConfigType(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    AccessConfigDeatilCreate getAccessConfigDetail() const;
    bool accessConfigDetailIsSet() const;
    void unsetaccessConfigDetail();
    void setAccessConfigDetail(const AccessConfigDeatilCreate& value);

    /// <summary>
    /// 
    /// </summary>

    AccessConfigQueryLogInfo getLogInfo() const;
    bool logInfoIsSet() const;
    void unsetlogInfo();
    void setLogInfo(const AccessConfigQueryLogInfo& value);

    /// <summary>
    /// 
    /// </summary>

    AccessConfigHostGroupIdList getHostGroupInfo() const;
    bool hostGroupInfoIsSet() const;
    void unsethostGroupInfo();
    void setHostGroupInfo(const AccessConfigHostGroupIdList& value);

    /// <summary>
    /// 标签信息。KEY不能重复,最多20个标签
    /// </summary>

    std::vector<AccessConfigTag>& getAccessConfigTag();
    bool accessConfigTagIsSet() const;
    void unsetaccessConfigTag();
    void setAccessConfigTag(const std::vector<AccessConfigTag>& value);

    /// <summary>
    /// 二进制采集
    /// </summary>

    bool isLogSplit() const;
    bool logSplitIsSet() const;
    void unsetlogSplit();
    void setLogSplit(bool value);

    /// <summary>
    /// 日志拆分
    /// </summary>

    bool isBinaryCollect() const;
    bool binaryCollectIsSet() const;
    void unsetbinaryCollect();
    void setBinaryCollect(bool value);

    /// <summary>
    /// CCE集群ID
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 编码格式，默认UTF-8
    /// </summary>

    std::string getEncodingFormat() const;
    bool encodingFormatIsSet() const;
    void unsetencodingFormat();
    void setEncodingFormat(const std::string& value);

    /// <summary>
    /// 采集策略：增量/全量
    /// </summary>

    bool isIncrementalCollect() const;
    bool incrementalCollectIsSet() const;
    void unsetincrementalCollect();
    void setIncrementalCollect(bool value);

    /// <summary>
    /// IC结构化解析类型
    /// </summary>

    std::string getProcessorType() const;
    bool processorTypeIsSet() const;
    void unsetprocessorType();
    void setProcessorType(const std::string& value);

    /// <summary>
    /// 示例日志
    /// </summary>

    std::string getDemoLog() const;
    bool demoLogIsSet() const;
    void unsetdemoLog();
    void setDemoLog(const std::string& value);

    /// <summary>
    /// 示例日志解析字段
    /// </summary>

    std::vector<DemoFieldAccess>& getDemoFields();
    bool demoFieldsIsSet() const;
    void unsetdemoFields();
    void setDemoFields(const std::vector<DemoFieldAccess>& value);

    /// <summary>
    /// IC结构化解析器
    /// </summary>

    std::vector<Processor>& getProcessors();
    bool processorsIsSet() const;
    void unsetprocessors();
    void setProcessors(const std::vector<Processor>& value);

    /// <summary>
    /// **参数解释：** 拆分日志大小。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getLogSplitSize() const;
    bool logSplitSizeIsSet() const;
    void unsetlogSplitSize();
    void setLogSplitSize(int32_t value);

    /// <summary>
    /// **参数解释：** 采集路径递归最大深度。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getRecursiveDepth() const;
    bool recursiveDepthIsSet() const;
    void unsetrecursiveDepth();
    void setRecursiveDepth(int32_t value);

    /// <summary>
    /// **参数解释：** 日志接入自建软件来源。 **取值范围：** - ECS - CCE - BMS - K8S - ServiceStageHost - ServiceStage
    /// </summary>

    std::string getAccessConfigTypeSource() const;
    bool accessConfigTypeSourceIsSet() const;
    void unsetaccessConfigTypeSource();
    void setAccessConfigTypeSource(const std::string& value);

    /// <summary>
    /// ServiceStage应用ID
    /// </summary>

    std::string getApplicationId() const;
    bool applicationIdIsSet() const;
    void unsetapplicationId();
    void setApplicationId(const std::string& value);

    /// <summary>
    /// ServiceStage环境ID
    /// </summary>

    std::string getEnvironmentId() const;
    bool environmentIdIsSet() const;
    void unsetenvironmentId();
    void setEnvironmentId(const std::string& value);

    /// <summary>
    /// ServiceStage组件ID
    /// </summary>

    std::vector<std::string>& getComponentId();
    bool componentIdIsSet() const;
    void unsetcomponentId();
    void setComponentId(const std::vector<std::string>& value);


protected:
    std::string accessConfigId_;
    bool accessConfigIdIsSet_;
    std::string accessConfigName_;
    bool accessConfigNameIsSet_;
    std::string accessConfigType_;
    bool accessConfigTypeIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    AccessConfigDeatilCreate accessConfigDetail_;
    bool accessConfigDetailIsSet_;
    AccessConfigQueryLogInfo logInfo_;
    bool logInfoIsSet_;
    AccessConfigHostGroupIdList hostGroupInfo_;
    bool hostGroupInfoIsSet_;
    std::vector<AccessConfigTag> accessConfigTag_;
    bool accessConfigTagIsSet_;
    bool logSplit_;
    bool logSplitIsSet_;
    bool binaryCollect_;
    bool binaryCollectIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string encodingFormat_;
    bool encodingFormatIsSet_;
    bool incrementalCollect_;
    bool incrementalCollectIsSet_;
    std::string processorType_;
    bool processorTypeIsSet_;
    std::string demoLog_;
    bool demoLogIsSet_;
    std::vector<DemoFieldAccess> demoFields_;
    bool demoFieldsIsSet_;
    std::vector<Processor> processors_;
    bool processorsIsSet_;
    int32_t logSplitSize_;
    bool logSplitSizeIsSet_;
    int32_t recursiveDepth_;
    bool recursiveDepthIsSet_;
    std::string accessConfigTypeSource_;
    bool accessConfigTypeSourceIsSet_;
    std::string applicationId_;
    bool applicationIdIsSet_;
    std::string environmentId_;
    bool environmentIdIsSet_;
    std::vector<std::string> componentId_;
    bool componentIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_AccessConfigInfo_H_
