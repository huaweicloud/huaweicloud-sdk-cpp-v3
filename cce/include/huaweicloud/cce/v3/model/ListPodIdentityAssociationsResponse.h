
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ListPodIdentityAssociationsResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ListPodIdentityAssociationsResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/cce/v3/model/PodIdentityAssociationResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ListPodIdentityAssociationsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPodIdentityAssociationsResponse();
    virtual ~ListPodIdentityAssociationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPodIdentityAssociationsResponse members

    /// <summary>
    /// **参数解释**: pod-identity 关联列表信息 **约束限制**： 不涉及
    /// </summary>

    std::vector<PodIdentityAssociationResp>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<PodIdentityAssociationResp>& value);


protected:
    std::vector<PodIdentityAssociationResp> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ListPodIdentityAssociationsResponse_H_
