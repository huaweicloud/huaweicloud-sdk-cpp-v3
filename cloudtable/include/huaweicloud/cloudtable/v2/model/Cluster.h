
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_Cluster_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_Cluster_H_

#include <huaweicloud/cloudtable/v2/CloudtableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtable/v2/model/Datastore.h>
#include <huaweicloud/cloudtable/v2/model/Instance.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建集群参数对象实体。
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  Cluster
    : public ModelBase
{
public:
    Cluster();
    virtual ~Cluster();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Cluster members

    /// <summary>
    /// 是否开启IAM权限认证。 - false：不开启 - true：开启
    /// </summary>

    std::string getAuthMode() const;
    bool authModeIsSet() const;
    void unsetauthMode();
    void setAuthMode(const std::string& value);

    /// <summary>
    /// 是否开启Lemon(目前已关闭该参数，填false即可) - false：不开启 - true：开启
    /// </summary>

    bool isEnableLemon() const;
    bool enableLemonIsSet() const;
    void unsetenableLemon();
    void setEnableLemon(bool value);

    /// <summary>
    /// 是否开启OpenTSDB。 - false：不开启 - true：开启
    /// </summary>

    bool isEnableOpenTSDB() const;
    bool enableOpenTSDBIsSet() const;
    void unsetenableOpenTSDB();
    void setEnableOpenTSDB(bool value);

    /// <summary>
    /// 
    /// </summary>

    Instance getInstance() const;
    bool instanceIsSet() const;
    void unsetinstance();
    void setInstance(const Instance& value);

    /// <summary>
    /// CloudTable集群的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 存储值的大小。  取值范围: 1-[10240-1024*1024*1024]
    /// </summary>

    int32_t getStorageSize() const;
    bool storageSizeIsSet() const;
    void unsetstorageSize();
    void setStorageSize(int32_t value);

    /// <summary>
    /// 存储类型： - ULTRAHIGH：超高IO - COMMON：普通IO
    /// </summary>

    std::string getStorageType() const;
    bool storageTypeIsSet() const;
    void unsetstorageType();
    void setStorageType(const std::string& value);

    /// <summary>
    /// 集群所在的（虚拟网络私有云）VPC。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Datastore getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const Datastore& value);


protected:
    std::string authMode_;
    bool authModeIsSet_;
    bool enableLemon_;
    bool enableLemonIsSet_;
    bool enableOpenTSDB_;
    bool enableOpenTSDBIsSet_;
    Instance instance_;
    bool instanceIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t storageSize_;
    bool storageSizeIsSet_;
    std::string storageType_;
    bool storageTypeIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    Datastore datastore_;
    bool datastoreIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_Cluster_H_
