
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowUserReviewAttachmentUploadingAddressRequest_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowUserReviewAttachmentUploadingAddressRequest_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowUserReviewAttachmentUploadingAddressRequest
    : public ModelBase
{
public:
    ShowUserReviewAttachmentUploadingAddressRequest();
    virtual ~ShowUserReviewAttachmentUploadingAddressRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowUserReviewAttachmentUploadingAddressRequest members

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 起始序号
    /// </summary>

    int32_t getStartNumber() const;
    bool startNumberIsSet() const;
    void unsetstartNumber();
    void setStartNumber(int32_t value);

    /// <summary>
    /// 结束序号
    /// </summary>

    int32_t getEndNumber() const;
    bool endNumberIsSet() const;
    void unsetendNumber();
    void setEndNumber(int32_t value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    int32_t startNumber_;
    bool startNumberIsSet_;
    int32_t endNumber_;
    bool endNumberIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowUserReviewAttachmentUploadingAddressRequest& dereference_from_shared_ptr(std::shared_ptr<ShowUserReviewAttachmentUploadingAddressRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowUserReviewAttachmentUploadingAddressRequest_H_
