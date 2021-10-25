
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_JobEntities_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_JobEntities_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/SubJobParams.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  JobEntities
    : public ModelBase
{
public:
    JobEntities();
    virtual ~JobEntities();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// JobEntities members

    /// <summary>
    /// 复制对ID
    /// </summary>

    std::string getReplicationPairId() const;
    bool replicationPairIdIsSet() const;
    void unsetreplicationPairId();
    void setReplicationPairId(const std::string& value);

    /// <summary>
    /// 组成复制对的云硬盘ID
    /// </summary>

    std::string getVolumeIds() const;
    bool volumeIdsIsSet() const;
    void unsetvolumeIds();
    void setVolumeIds(const std::string& value);

    /// <summary>
    /// 保护组ID
    /// </summary>

    std::string getServerGroupId() const;
    bool serverGroupIdIsSet() const;
    void unsetserverGroupId();
    void setServerGroupId(const std::string& value);

    /// <summary>
    /// 保护实例ID
    /// </summary>

    std::string getProtectedInstanceId() const;
    bool protectedInstanceIdIsSet() const;
    void unsetprotectedInstanceId();
    void setProtectedInstanceId(const std::string& value);

    /// <summary>
    /// 容灾站点服务器ID
    /// </summary>

    std::string getNativeServerId() const;
    bool nativeServerIdIsSet() const;
    void unsetnativeServerId();
    void setNativeServerId(const std::string& value);

    /// <summary>
    /// 网卡ID
    /// </summary>

    std::string getNicId() const;
    bool nicIdIsSet() const;
    void unsetnicId();
    void setNicId(const std::string& value);

    /// <summary>
    /// 子Job信息
    /// </summary>

    std::vector<SubJobParams>& getSubJobs();
    bool subJobsIsSet() const;
    void unsetsubJobs();
    void setSubJobs(const std::vector<SubJobParams>& value);


protected:
    std::string replicationPairId_;
    bool replicationPairIdIsSet_;
    std::string volumeIds_;
    bool volumeIdsIsSet_;
    std::string serverGroupId_;
    bool serverGroupIdIsSet_;
    std::string protectedInstanceId_;
    bool protectedInstanceIdIsSet_;
    std::string nativeServerId_;
    bool nativeServerIdIsSet_;
    std::string nicId_;
    bool nicIdIsSet_;
    std::vector<SubJobParams> subJobs_;
    bool subJobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_JobEntities_H_
