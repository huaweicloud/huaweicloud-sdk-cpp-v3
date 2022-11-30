
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateProtectionGroupNameRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateProtectionGroupNameRequestBody_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/UpdateProtectionGroupNameRequestParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新保护组名称请求体
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  UpdateProtectionGroupNameRequestBody
    : public ModelBase
{
public:
    UpdateProtectionGroupNameRequestBody();
    virtual ~UpdateProtectionGroupNameRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateProtectionGroupNameRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateProtectionGroupNameRequestParams getServerGroup() const;
    bool serverGroupIsSet() const;
    void unsetserverGroup();
    void setServerGroup(const UpdateProtectionGroupNameRequestParams& value);


protected:
    UpdateProtectionGroupNameRequestParams serverGroup_;
    bool serverGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateProtectionGroupNameRequestBody_H_
