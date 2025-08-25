
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateReleaseRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateReleaseRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/UpdateReleaseReqBody.h>
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
class HUAWEICLOUD_CCE_V3_EXPORT  UpdateReleaseRequest
    : public ModelBase
{
public:
    UpdateReleaseRequest();
    virtual ~UpdateReleaseRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateReleaseRequest members

    /// <summary>
    /// 模板实例名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 模板实例所在的命名空间
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// 集群ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateReleaseReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateReleaseReqBody& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string namespace_;
    bool namespaceIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    UpdateReleaseReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateReleaseRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateReleaseRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdateReleaseRequest_H_
