
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateProtectionGroupRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateProtectionGroupRequestBody_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/CreateProtectionGroupRequestParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建保护组请求体
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  CreateProtectionGroupRequestBody
    : public ModelBase
{
public:
    CreateProtectionGroupRequestBody();
    virtual ~CreateProtectionGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateProtectionGroupRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateProtectionGroupRequestParams getServerGroup() const;
    bool serverGroupIsSet() const;
    void unsetserverGroup();
    void setServerGroup(const CreateProtectionGroupRequestParams& value);


protected:
    CreateProtectionGroupRequestParams serverGroup_;
    bool serverGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateProtectionGroupRequestBody_H_
