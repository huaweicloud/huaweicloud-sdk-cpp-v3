
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowActiveActiveDomainParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowActiveActiveDomainParams_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/sdrs/v1/model/ReplicationClusterParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 查询双活域响应体结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ShowActiveActiveDomainParams
    : public ModelBase
{
public:
    ShowActiveActiveDomainParams();
    virtual ~ShowActiveActiveDomainParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowActiveActiveDomainParams members

    /// <summary>
    /// 双活域ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 双活域名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 双活域描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 表示该双活域下的资源是否售罄。
    /// </summary>

    bool isSoldOut() const;
    bool soldOutIsSet() const;
    void unsetsoldOut();
    void setSoldOut(bool value);

    /// <summary>
    /// 
    /// </summary>

    ReplicationClusterParams getLocalReplicationCluster() const;
    bool localReplicationClusterIsSet() const;
    void unsetlocalReplicationCluster();
    void setLocalReplicationCluster(const ReplicationClusterParams& value);

    /// <summary>
    /// 
    /// </summary>

    ReplicationClusterParams getRemoteReplicationCluster() const;
    bool remoteReplicationClusterIsSet() const;
    void unsetremoteReplicationCluster();
    void setRemoteReplicationCluster(const ReplicationClusterParams& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    bool soldOut_;
    bool soldOutIsSet_;
    ReplicationClusterParams localReplicationCluster_;
    bool localReplicationClusterIsSet_;
    ReplicationClusterParams remoteReplicationCluster_;
    bool remoteReplicationClusterIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowActiveActiveDomainParams_H_
