
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateCloudPersistentVolumeClaimsRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateCloudPersistentVolumeClaimsRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/PersistentVolumeClaim.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  CreateCloudPersistentVolumeClaimsRequest
    : public ModelBase
{
public:
    CreateCloudPersistentVolumeClaimsRequest();
    virtual ~CreateCloudPersistentVolumeClaimsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateCloudPersistentVolumeClaimsRequest members

    /// <summary>
    /// 指定PersistentVolumeClaim所在的命名空间。  使用namespace有如下约束：  - 用户自定义的namespace，使用前必须先在集群中创建namespace  - 系统自带的namespace：default  - 不能使用kube-system与kube-public 
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// 集群ID，使用**https://Endpoint/uri**这种URL格式时必须指定此参数。获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。 
    /// </summary>

    std::string getXClusterID() const;
    bool xClusterIDIsSet() const;
    void unsetxClusterID();
    void setXClusterID(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PersistentVolumeClaim getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const PersistentVolumeClaim& value);


protected:
    std::string namespace_;
    bool namespaceIsSet_;
    std::string xClusterID_;
    bool xClusterIDIsSet_;
    PersistentVolumeClaim body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateCloudPersistentVolumeClaimsRequest& dereference_from_shared_ptr(std::shared_ptr<CreateCloudPersistentVolumeClaimsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateCloudPersistentVolumeClaimsRequest_H_
