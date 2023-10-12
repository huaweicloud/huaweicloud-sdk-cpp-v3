
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_StopProtectionGroupRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_StopProtectionGroupRequestBody_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 保护组停止保护请求体
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  StopProtectionGroupRequestBody
    : public ModelBase
{
public:
    StopProtectionGroupRequestBody();
    virtual ~StopProtectionGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StopProtectionGroupRequestBody members

    /// <summary>
    /// 标识保护组停止保护操作。该参数目前默认值为空。
    /// </summary>

    Object getStopServerGroup() const;
    bool stopServerGroupIsSet() const;
    void unsetstopServerGroup();
    void setStopServerGroup(const Object& value);


protected:
    Object stopServerGroup_;
    bool stopServerGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_StopProtectionGroupRequestBody_H_
