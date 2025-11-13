
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateShortJobResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateShortJobResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateShortJobResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateShortJobResponse();
    virtual ~CreateShortJobResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateShortJobResponse members

    /// <summary>
    /// 任务id。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 上传训练数据的地址。训练数据需打包成zip文件后，上传至该url。 &gt; 通过该obs地址上传时，需设置content-type为application/zip。
    /// </summary>

    std::string getDataUploadingUrl() const;
    bool dataUploadingUrlIsSet() const;
    void unsetdataUploadingUrl();
    void setDataUploadingUrl(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string dataUploadingUrl_;
    bool dataUploadingUrlIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateShortJobResponse_H_
