
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ProtectedInstanceAttachReplicationRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ProtectedInstanceAttachReplicationRequestBody_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/ProtectedInstanceAttachReplicationRequestParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 保护实例挂载复制对请求体
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ProtectedInstanceAttachReplicationRequestBody
    : public ModelBase
{
public:
    ProtectedInstanceAttachReplicationRequestBody();
    virtual ~ProtectedInstanceAttachReplicationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProtectedInstanceAttachReplicationRequestBody members

    /// <summary>
    /// 
    /// </summary>

    ProtectedInstanceAttachReplicationRequestParams getReplicationAttachment() const;
    bool replicationAttachmentIsSet() const;
    void unsetreplicationAttachment();
    void setReplicationAttachment(const ProtectedInstanceAttachReplicationRequestParams& value);


protected:
    ProtectedInstanceAttachReplicationRequestParams replicationAttachment_;
    bool replicationAttachmentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ProtectedInstanceAttachReplicationRequestBody_H_
