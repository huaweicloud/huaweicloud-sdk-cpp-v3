
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowProtectionGroupResponse_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowProtectionGroupResponse_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/ShowProtectionGroupParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ShowProtectionGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowProtectionGroupResponse();
    virtual ~ShowProtectionGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowProtectionGroupResponse members

    /// <summary>
    /// 
    /// </summary>

    ShowProtectionGroupParams getServerGroup() const;
    bool serverGroupIsSet() const;
    void unsetserverGroup();
    void setServerGroup(const ShowProtectionGroupParams& value);


protected:
    ShowProtectionGroupParams serverGroup_;
    bool serverGroupIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowProtectionGroupResponse_H_
