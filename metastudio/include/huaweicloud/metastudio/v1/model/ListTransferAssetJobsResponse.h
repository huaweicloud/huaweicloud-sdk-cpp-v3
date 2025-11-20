
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListTransferAssetJobsResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListTransferAssetJobsResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/TransferAssetJobInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListTransferAssetJobsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTransferAssetJobsResponse();
    virtual ~ListTransferAssetJobsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTransferAssetJobsResponse members

    /// <summary>
    /// 任务总数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 任务信息
    /// </summary>

    std::vector<TransferAssetJobInfo>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<TransferAssetJobInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<TransferAssetJobInfo> jobs_;
    bool jobsIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListTransferAssetJobsResponse_H_
