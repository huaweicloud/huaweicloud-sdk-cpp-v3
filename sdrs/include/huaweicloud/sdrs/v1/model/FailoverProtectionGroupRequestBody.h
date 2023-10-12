
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_FailoverProtectionGroupRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_FailoverProtectionGroupRequestBody_H_


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
/// 保护组故障切换请求体
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  FailoverProtectionGroupRequestBody
    : public ModelBase
{
public:
    FailoverProtectionGroupRequestBody();
    virtual ~FailoverProtectionGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FailoverProtectionGroupRequestBody members

    /// <summary>
    /// 标识保护组故障切换操作。该参数目前默认值为空。
    /// </summary>

    Object getFailoverServerGroup() const;
    bool failoverServerGroupIsSet() const;
    void unsetfailoverServerGroup();
    void setFailoverServerGroup(const Object& value);


protected:
    Object failoverServerGroup_;
    bool failoverServerGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_FailoverProtectionGroupRequestBody_H_
