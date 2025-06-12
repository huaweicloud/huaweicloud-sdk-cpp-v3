
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListTtsaJobsResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListTtsaJobsResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/TTSAJob.h>
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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListTtsaJobsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTtsaJobsResponse();
    virtual ~ListTtsaJobsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTtsaJobsResponse members

    /// <summary>
    /// 语音驱动任务总数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 语音驱动任务列表。
    /// </summary>

    std::vector<TTSAJob>& getTtsaJobs();
    bool ttsaJobsIsSet() const;
    void unsetttsaJobs();
    void setTtsaJobs(const std::vector<TTSAJob>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<TTSAJob> ttsaJobs_;
    bool ttsaJobsIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListTtsaJobsResponse_H_
