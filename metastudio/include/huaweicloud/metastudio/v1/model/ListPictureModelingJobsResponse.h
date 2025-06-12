
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListPictureModelingJobsResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListPictureModelingJobsResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/PictureModelingInfo.h>
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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListPictureModelingJobsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPictureModelingJobsResponse();
    virtual ~ListPictureModelingJobsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPictureModelingJobsResponse members

    /// <summary>
    /// 照片建模任务总数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 照片建模任务列表。
    /// </summary>

    std::vector<PictureModelingInfo>& getPictureModelingJobs();
    bool pictureModelingJobsIsSet() const;
    void unsetpictureModelingJobs();
    void setPictureModelingJobs(const std::vector<PictureModelingInfo>& value);

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
    std::vector<PictureModelingInfo> pictureModelingJobs_;
    bool pictureModelingJobsIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListPictureModelingJobsResponse_H_
