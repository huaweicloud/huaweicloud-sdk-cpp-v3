
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowJobUploadingAddressRequest_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowJobUploadingAddressRequest_H_


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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowJobUploadingAddressRequest
    : public ModelBase
{
public:
    ShowJobUploadingAddressRequest();
    virtual ~ShowJobUploadingAddressRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowJobUploadingAddressRequest members

    /// <summary>
    /// 任务id。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowJobUploadingAddressRequest& dereference_from_shared_ptr(std::shared_ptr<ShowJobUploadingAddressRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowJobUploadingAddressRequest_H_
