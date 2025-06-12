
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateTrainingMiddleJobResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateTrainingMiddleJobResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/CreateTrainingJobRsp_segment_uploading_url.h>
#include <string>

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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateTrainingMiddleJobResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateTrainingMiddleJobResponse();
    virtual ~CreateTrainingMiddleJobResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTrainingMiddleJobResponse members

    /// <summary>
    /// 任务id。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 上传训练数据的地址。训练数据需打包成zip文件后，上传至该url。  create_type取值为package时设置。 &gt; 通过该obs地址上传时，需设置content-type为application/zip。
    /// </summary>

    std::string getTrainingDataUploadingUrl() const;
    bool trainingDataUploadingUrlIsSet() const;
    void unsettrainingDataUploadingUrl();
    void setTrainingDataUploadingUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateTrainingJobRsp_segment_uploading_url getSegmentUploadingUrl() const;
    bool segmentUploadingUrlIsSet() const;
    void unsetsegmentUploadingUrl();
    void setSegmentUploadingUrl(const CreateTrainingJobRsp_segment_uploading_url& value);

    /// <summary>
    /// 授权书的上传地址。
    /// </summary>

    std::string getAuthorizationLetterUploadingUrl() const;
    bool authorizationLetterUploadingUrlIsSet() const;
    void unsetauthorizationLetterUploadingUrl();
    void setAuthorizationLetterUploadingUrl(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string trainingDataUploadingUrl_;
    bool trainingDataUploadingUrlIsSet_;
    CreateTrainingJobRsp_segment_uploading_url segmentUploadingUrl_;
    bool segmentUploadingUrlIsSet_;
    std::string authorizationLetterUploadingUrl_;
    bool authorizationLetterUploadingUrlIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateTrainingMiddleJobResponse_H_
