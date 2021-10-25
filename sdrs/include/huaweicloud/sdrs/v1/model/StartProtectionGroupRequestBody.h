
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_StartProtectionGroupRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_StartProtectionGroupRequestBody_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 开启保护/重保护请求体
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  StartProtectionGroupRequestBody
    : public ModelBase
{
public:
    StartProtectionGroupRequestBody();
    virtual ~StartProtectionGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// StartProtectionGroupRequestBody members

    /// <summary>
    /// 标识保护组开始保护操作。目前该参数为空。
    /// </summary>

    Object getStartServerGroup() const;
    bool startServerGroupIsSet() const;
    void unsetstartServerGroup();
    void setStartServerGroup(const Object& value);


protected:
    Object startServerGroup_;
    bool startServerGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_StartProtectionGroupRequestBody_H_
