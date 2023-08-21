
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateAccessConfigRequestBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateAccessConfigRequestBody_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/AccessConfigHostGroupIdList.h>
#include <huaweicloud/lts/v2/model/AccessConfigDeatilCreate.h>
#include <string>
#include <huaweicloud/lts/v2/model/AccessConfigTag.h>
#include <vector>

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

    AccessConfigDeatilCreate getAccessConfigDetail() const;
    bool accessConfigDetailIsSet() const;
    void unsetaccessConfigDetail();
    void setAccessConfigDetail(const AccessConfigDeatilCreate& value);

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


protected:
    std::string accessConfigId_;
    bool accessConfigIdIsSet_;
    AccessConfigDeatilCreate accessConfigDetail_;
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateAccessConfigRequestBody_H_
