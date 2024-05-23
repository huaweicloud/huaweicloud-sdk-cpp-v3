
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchResourceShareInvitationResponse_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchResourceShareInvitationResponse_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ram/v1/model/PageInfo.h>
#include <huaweicloud/ram/v1/model/ResourceShareInvitation.h>
#include <vector>

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
class HUAWEICLOUD_RAM_V1_EXPORT  SearchResourceShareInvitationResponse
    : public ModelBase, public HttpResponse
{
public:
    SearchResourceShareInvitationResponse();
    virtual ~SearchResourceShareInvitationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchResourceShareInvitationResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<ResourceShareInvitation>& getResourceShareInvitations();
    bool resourceShareInvitationsIsSet() const;
    void unsetresourceShareInvitations();
    void setResourceShareInvitations(const std::vector<ResourceShareInvitation>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfo getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfo& value);


protected:
    std::vector<ResourceShareInvitation> resourceShareInvitations_;
    bool resourceShareInvitationsIsSet_;
    PageInfo pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchResourceShareInvitationResponse_H_
