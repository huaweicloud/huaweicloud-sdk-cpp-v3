
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_CreateClusterReqBody_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_CreateClusterReqBody_H_


#include <huaweicloud/cloudtable/v2/CloudTableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtable/v2/model/CreateClusterReqBody_cluster_info.h>
#include <string>
#include <huaweicloud/cloudtable/v2/model/Datastore.h>
#include <huaweicloud/cloudtable/v2/model/Nic.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建集群发起的请求的请求体对象。
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  CreateClusterReqBody
    : public ModelBase
{
public:
    CreateClusterReqBody();
    virtual ~CreateClusterReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateClusterReqBody members

    /// <summary>
    /// 集群名字
    /// </summary>

    std::string getClusterName() const;
    bool clusterNameIsSet() const;
    void unsetclusterName();
    void setClusterName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Datastore getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const Datastore& value);

    /// <summary>
    /// 可用区
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 集群所在的网络信息以及安全组信息。
    /// </summary>

    std::vector<Nic>& getNics();
    bool nicsIsSet() const;
    void unsetnics();
    void setNics(const std::vector<Nic>& value);

    /// <summary>
    /// 
    /// </summary>

    CreateClusterReqBody_cluster_info getClusterInfo() const;
    bool clusterInfoIsSet() const;
    void unsetclusterInfo();
    void setClusterInfo(const CreateClusterReqBody_cluster_info& value);

    /// <summary>
    /// 企业项目ID
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 虚拟私有云ID
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// type为doris时，必填项，管理账号：admin
    /// </summary>

    std::string getDbuser() const;
    bool dbuserIsSet() const;
    void unsetdbuser();
    void setDbuser(const std::string& value);

    /// <summary>
    /// type为doris时，必填项，管理账号密码
    /// </summary>

    std::string getDbuserpwd() const;
    bool dbuserpwdIsSet() const;
    void unsetdbuserpwd();
    void setDbuserpwd(const std::string& value);


protected:
    std::string clusterName_;
    bool clusterNameIsSet_;
    Datastore datastore_;
    bool datastoreIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::vector<Nic> nics_;
    bool nicsIsSet_;
    CreateClusterReqBody_cluster_info clusterInfo_;
    bool clusterInfoIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string dbuser_;
    bool dbuserIsSet_;
    std::string dbuserpwd_;
    bool dbuserpwdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_CreateClusterReqBody_H_
