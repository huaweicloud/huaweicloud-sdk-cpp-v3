
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateBackupDownloadPolicyRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateBackupDownloadPolicyRequest_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/UpdateBackupDownloadPolicyRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  UpdateBackupDownloadPolicyRequest
    : public ModelBase
{
public:
    UpdateBackupDownloadPolicyRequest();
    virtual ~UpdateBackupDownloadPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateBackupDownloadPolicyRequest members

    /// <summary>
    /// 
    /// </summary>

    UpdateBackupDownloadPolicyRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateBackupDownloadPolicyRequestBody& value);


protected:
    UpdateBackupDownloadPolicyRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateBackupDownloadPolicyRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateBackupDownloadPolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateBackupDownloadPolicyRequest_H_
