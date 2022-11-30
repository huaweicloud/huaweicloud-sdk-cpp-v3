
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ReverseProtectionGroupRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ReverseProtectionGroupRequestBody_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/ReverseProtectionGroupRequestParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 保护组切换请求体
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ReverseProtectionGroupRequestBody
    : public ModelBase
{
public:
    ReverseProtectionGroupRequestBody();
    virtual ~ReverseProtectionGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ReverseProtectionGroupRequestBody members

    /// <summary>
    /// 
    /// </summary>

    ReverseProtectionGroupRequestParams getReverseServerGroup() const;
    bool reverseServerGroupIsSet() const;
    void unsetreverseServerGroup();
    void setReverseServerGroup(const ReverseProtectionGroupRequestParams& value);


protected:
    ReverseProtectionGroupRequestParams reverseServerGroup_;
    bool reverseServerGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ReverseProtectionGroupRequestBody_H_
