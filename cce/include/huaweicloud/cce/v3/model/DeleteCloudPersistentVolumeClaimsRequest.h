
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_DeleteCloudPersistentVolumeClaimsRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_DeleteCloudPersistentVolumeClaimsRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  DeleteCloudPersistentVolumeClaimsRequest
    : public ModelBase
{
public:
    DeleteCloudPersistentVolumeClaimsRequest();
    virtual ~DeleteCloudPersistentVolumeClaimsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteCloudPersistentVolumeClaimsRequest members

    /// <summary>
    /// 需要删除的PersistentVolumClaim的名称。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 指定PersistentVolumeClaim所在的命名空间。 
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// 删除PersistentVolumeClaim后是否保留后端关联的云存储。false表示不删除，true表示删除，默认为false。 
    /// </summary>

    std::string getDeleteVolume() const;
    bool deleteVolumeIsSet() const;
    void unsetdeleteVolume();
    void setDeleteVolume(const std::string& value);

    /// <summary>
    /// 云存储的类型，和deleteVolume搭配使用。即deleteVolume和storageType必须同时配置。 - bs：EVS云硬盘存储 - nfs：SFS1.0弹性文件存储 - obs：OBS对象存储 - efs：SFS Turbo极速文件存储 
    /// </summary>

    std::string getStorageType() const;
    bool storageTypeIsSet() const;
    void unsetstorageType();
    void setStorageType(const std::string& value);

    /// <summary>
    /// 集群ID，使用**https://Endpoint/uri**这种URL格式时必须指定此参数。获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。 
    /// </summary>

    std::string getXClusterID() const;
    bool xClusterIDIsSet() const;
    void unsetxClusterID();
    void setXClusterID(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string namespace_;
    bool namespaceIsSet_;
    std::string deleteVolume_;
    bool deleteVolumeIsSet_;
    std::string storageType_;
    bool storageTypeIsSet_;
    std::string xClusterID_;
    bool xClusterIDIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteCloudPersistentVolumeClaimsRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteCloudPersistentVolumeClaimsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_DeleteCloudPersistentVolumeClaimsRequest_H_
