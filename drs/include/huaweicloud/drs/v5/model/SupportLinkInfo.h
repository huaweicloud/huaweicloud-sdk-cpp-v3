
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_SupportLinkInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_SupportLinkInfo_H_


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
/// 支持的链路信息
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  SupportLinkInfo
    : public ModelBase
{
public:
    SupportLinkInfo();
    virtual ~SupportLinkInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SupportLinkInfo members

    /// <summary>
    /// 引擎类型
    /// </summary>

    std::string getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(const std::string& value);

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

    std::vector<std::string>& getTaskModes();
    bool taskModesIsSet() const;
    void unsettaskModes();
    void setTaskModes(const std::vector<std::string>& value);

    /// <summary>
    /// 迁移方向。取值： - up：入云 ，灾备场景时对应本云为备。 - down：出云，灾备场景时对应本云为主。 - non-dbs：自建。
    /// </summary>

    std::string getJobDirection() const;
    bool jobDirectionIsSet() const;
    void unsetjobDirection();
    void setJobDirection(const std::string& value);

    /// <summary>
    /// 云上实例类型。取值： - Single：单机模式。 - Ha：主备模式。 - Cluster：集群模式。 - Sharding：分片模式。 - Independent：GaussDB独立部署模式。
    /// </summary>

    std::string getClusterMode() const;
    bool clusterModeIsSet() const;
    void unsetclusterMode();
    void setClusterMode(const std::string& value);

    /// <summary>
    /// DRS实例类型。取值： - Single ：单机。 - Ha：主备。
    /// </summary>

    std::string getJobInstanceType() const;
    bool jobInstanceTypeIsSet() const;
    void unsetjobInstanceType();
    void setJobInstanceType(const std::string& value);

    /// <summary>
    /// 是否支持绑定EIP
    /// </summary>

    bool isIsSupportBindEip() const;
    bool isSupportBindEipIsSet() const;
    void unsetisSupportBindEip();
    void setIsSupportBindEip(bool value);


protected:
    std::string engineType_;
    bool engineTypeIsSet_;
    std::string netType_;
    bool netTypeIsSet_;
    std::vector<std::string> taskModes_;
    bool taskModesIsSet_;
    std::string jobDirection_;
    bool jobDirectionIsSet_;
    std::string clusterMode_;
    bool clusterModeIsSet_;
    std::string jobInstanceType_;
    bool jobInstanceTypeIsSet_;
    bool isSupportBindEip_;
    bool isSupportBindEipIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_SupportLinkInfo_H_
