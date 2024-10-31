
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateAccessConfigRequestBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateAccessConfigRequestBody_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/AccessConfigHostGroupIdList.h>
#include <string>
#include <huaweicloud/lts/v2/model/AccessConfigTag.h>
#include <huaweicloud/lts/v2/model/DemoFieldAccess.h>
#include <huaweicloud/lts/v2/model/Processor.h>
#include <vector>
#include <huaweicloud/lts/v2/model/AccessConfigDeatilUpdate.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改日志接入请求体
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  UpdateAccessConfigRequestBody
    : public ModelBase
{
public:
    UpdateAccessConfigRequestBody();
    virtual ~UpdateAccessConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAccessConfigRequestBody members

    /// <summary>
    /// 日志接入ID
    /// </summary>

    std::string getAccessConfigId() const;
    bool accessConfigIdIsSet() const;
    void unsetaccessConfigId();
    void setAccessConfigId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AccessConfigDeatilUpdate getAccessConfigDetail() const;
    bool accessConfigDetailIsSet() const;
    void unsetaccessConfigDetail();
    void setAccessConfigDetail(const AccessConfigDeatilUpdate& value);

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
    /// 日志拆分
    /// </summary>

    bool isLogSplit() const;
    bool logSplitIsSet() const;
    void unsetlogSplit();
    void setLogSplit(bool value);

    /// <summary>
    /// 二进制采集
    /// </summary>

    bool isBinaryCollect() const;
    bool binaryCollectIsSet() const;
    void unsetbinaryCollect();
    void setBinaryCollect(bool value);

    /// <summary>
    /// CCE集群ID，CCE类型时，为必填
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 是否增量采集 true为是 false为否（全量采集）
    /// </summary>

    bool isIncrementalCollect() const;
    bool incrementalCollectIsSet() const;
    void unsetincrementalCollect();
    void setIncrementalCollect(bool value);

    /// <summary>
    /// 编码格式，默认UTF-8
    /// </summary>

    std::string getEncodingFormat() const;
    bool encodingFormatIsSet() const;
    void unsetencodingFormat();
    void setEncodingFormat(const std::string& value);

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
    AccessConfigDeatilUpdate accessConfigDetail_;
    bool accessConfigDetailIsSet_;
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
    bool incrementalCollect_;
    bool incrementalCollectIsSet_;
    std::string encodingFormat_;
    bool encodingFormatIsSet_;
    std::string processorType_;
    bool processorTypeIsSet_;
    std::string demoLog_;
    bool demoLogIsSet_;
    std::vector<DemoFieldAccess> demoFields_;
    bool demoFieldsIsSet_;
    std::vector<Processor> processors_;
    bool processorsIsSet_;
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

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateAccessConfigRequestBody_H_
