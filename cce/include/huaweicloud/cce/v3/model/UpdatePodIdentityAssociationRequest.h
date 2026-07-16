
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdatePodIdentityAssociationRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdatePodIdentityAssociationRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/PodIdentityAssociationUpdate.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  UpdatePodIdentityAssociationRequest
    : public ModelBase
{
public:
    UpdatePodIdentityAssociationRequest();
    virtual ~UpdatePodIdentityAssociationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePodIdentityAssociationRequest members

    /// <summary>
    /// 集群ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// **参数解释**： Pod-identity关联ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getAssociationId() const;
    bool associationIdIsSet() const;
    void unsetassociationId();
    void setAssociationId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PodIdentityAssociationUpdate getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const PodIdentityAssociationUpdate& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string associationId_;
    bool associationIdIsSet_;
    PodIdentityAssociationUpdate body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdatePodIdentityAssociationRequest& dereference_from_shared_ptr(std::shared_ptr<UpdatePodIdentityAssociationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdatePodIdentityAssociationRequest_H_
