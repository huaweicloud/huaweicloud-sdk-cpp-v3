
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_RejectResourceShareInvitationResponse_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_RejectResourceShareInvitationResponse_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ram/v1/model/ResourceShareInvitation.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  RejectResourceShareInvitationResponse
    : public ModelBase, public HttpResponse
{
public:
    RejectResourceShareInvitationResponse();
    virtual ~RejectResourceShareInvitationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RejectResourceShareInvitationResponse members

    /// <summary>
    /// 
    /// </summary>

    ResourceShareInvitation getResourceShareInvitation() const;
    bool resourceShareInvitationIsSet() const;
    void unsetresourceShareInvitation();
    void setResourceShareInvitation(const ResourceShareInvitation& value);


protected:
    ResourceShareInvitation resourceShareInvitation_;
    bool resourceShareInvitationIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_RejectResourceShareInvitationResponse_H_
