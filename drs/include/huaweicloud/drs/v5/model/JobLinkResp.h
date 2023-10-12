
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_JobLinkResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_JobLinkResp_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 可用链路返回体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  JobLinkResp
    : public ModelBase
{
public:
    JobLinkResp();
    virtual ~JobLinkResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobLinkResp members

    /// <summary>
    /// 任务场景。取值： - migration：实时迁移。 - sync：实时同步。 - cloudDataGuard：实时灾备。
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);

    /// <summary>
    /// 引擎类型。取值： - oracle-to-gaussdbv5：Oracle同步到GaussDB分布式版，实时同步场景使用。
    /// </summary>

    std::string getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(const std::string& value);

    /// <summary>
    /// 源数据库实例类型。取值： - offline：自建数据库。 - ecs：华为云ECS自建数据库。 - cloud：华为云数据库。
    /// </summary>

    std::string getSourceEndpointType() const;
    bool sourceEndpointTypeIsSet() const;
    void unsetsourceEndpointType();
    void setSourceEndpointType(const std::string& value);

    /// <summary>
    /// 目标数据库实例类型。取值： - offline：自建数据库。 - ecs：华为云ECS自建数据库。 - cloud：华为云数据库。
    /// </summary>

    std::string getTargetEndpointType() const;
    bool targetEndpointTypeIsSet() const;
    void unsettargetEndpointType();
    void setTargetEndpointType(const std::string& value);

    /// <summary>
    /// 迁移方向。取值： - up：入云 ，灾备场景时对应本云为备。 - down：出云，灾备场景时对应本云为主。 - non-dbs：自建。
    /// </summary>

    std::string getJobDirection() const;
    bool jobDirectionIsSet() const;
    void unsetjobDirection();
    void setJobDirection(const std::string& value);

    /// <summary>
    /// 网络类型。取值： - eip：公网网络。 - vpc：VPC网络，灾备场景不支持选择VPC网络。 - vpn：VPN、专线网络。
    /// </summary>

    std::string getNetType() const;
    bool netTypeIsSet() const;
    void unsetnetType();
    void setNetType(const std::string& value);

    /// <summary>
    /// 迁移模式。取值： - FULL_TRANS ：全量。 - FULL_INCR_TRANS：全量+增量。 - INCR_TRANS：增量。
    /// </summary>

    std::vector<std::string>& getTaskTypes();
    bool taskTypesIsSet() const;
    void unsettaskTypes();
    void setTaskTypes(const std::vector<std::string>& value);

    /// <summary>
    /// 引擎实例模式。取值： - Single：单机模式。 - Ha：主备模式。 - Cluster：集群模式。 - Sharding：分片模式。 - Independent：GaussDB独立部署模式。
    /// </summary>

    std::vector<std::string>& getClusterModes();
    bool clusterModesIsSet() const;
    void unsetclusterModes();
    void setClusterModes(const std::vector<std::string>& value);

    /// <summary>
    /// 链路描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string jobType_;
    bool jobTypeIsSet_;
    std::string engineType_;
    bool engineTypeIsSet_;
    std::string sourceEndpointType_;
    bool sourceEndpointTypeIsSet_;
    std::string targetEndpointType_;
    bool targetEndpointTypeIsSet_;
    std::string jobDirection_;
    bool jobDirectionIsSet_;
    std::string netType_;
    bool netTypeIsSet_;
    std::vector<std::string> taskTypes_;
    bool taskTypesIsSet_;
    std::vector<std::string> clusterModes_;
    bool clusterModesIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_JobLinkResp_H_
