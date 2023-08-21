
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateAccessConfigRequestBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateAccessConfigRequestBody_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/AccessConfigHostGroupIdListCreate.h>
#include <huaweicloud/lts/v2/model/AccessConfigDeatilCreate.h>
#include <string>
#include <huaweicloud/lts/v2/model/AccessConfigTag.h>
#include <huaweicloud/lts/v2/model/AccessConfigBaseLogInfoCreate.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建日志接入请求体
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  CreateAccessConfigRequestBody
    : public ModelBase
{
public:
    CreateAccessConfigRequestBody();
    virtual ~CreateAccessConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateAccessConfigRequestBody members

    /// <summary>
    /// 日志接入名称。 满足正则表达式：^(?!\\.)(?!_)(?!.*?\\.$)[\\u4e00-\\u9fa5a-zA-Z0-9-_.]{1,64}$
    /// </summary>

    std::string getAccessConfigName() const;
    bool accessConfigNameIsSet() const;
    void unsetaccessConfigName();
    void setAccessConfigName(const std::string& value);

    /// <summary>
    /// 日志接入类型。AGENT：ECS接入,K8S_CCE:CCE接入
    /// </summary>

    std::string getAccessConfigType() const;
    bool accessConfigTypeIsSet() const;
    void unsetaccessConfigType();
    void setAccessConfigType(const std::string& value);

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

    AccessConfigBaseLogInfoCreate getLogInfo() const;
    bool logInfoIsSet() const;
    void unsetlogInfo();
    void setLogInfo(const AccessConfigBaseLogInfoCreate& value);

    /// <summary>
    /// 
    /// </summary>

    AccessConfigHostGroupIdListCreate getHostGroupInfo() const;
    bool hostGroupInfoIsSet() const;
    void unsethostGroupInfo();
    void setHostGroupInfo(const AccessConfigHostGroupIdListCreate& value);

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

    bool isBinaryCollect() const;
    bool binaryCollectIsSet() const;
    void unsetbinaryCollect();
    void setBinaryCollect(bool value);

    /// <summary>
    /// 日志拆分
    /// </summary>

    bool isLogSplit() const;
    bool logSplitIsSet() const;
    void unsetlogSplit();
    void setLogSplit(bool value);

    /// <summary>
    /// CCE集群ID，当CCE类型时，为必填
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);


protected:
    std::string accessConfigName_;
    bool accessConfigNameIsSet_;
    std::string accessConfigType_;
    bool accessConfigTypeIsSet_;
    AccessConfigDeatilCreate accessConfigDetail_;
    bool accessConfigDetailIsSet_;
    AccessConfigBaseLogInfoCreate logInfo_;
    bool logInfoIsSet_;
    AccessConfigHostGroupIdListCreate hostGroupInfo_;
    bool hostGroupInfoIsSet_;
    std::vector<AccessConfigTag> accessConfigTag_;
    bool accessConfigTagIsSet_;
    bool binaryCollect_;
    bool binaryCollectIsSet_;
    bool logSplit_;
    bool logSplitIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateAccessConfigRequestBody_H_
