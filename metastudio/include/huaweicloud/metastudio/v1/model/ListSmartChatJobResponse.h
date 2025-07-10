
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListSmartChatJobResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListSmartChatJobResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/SmartChatJobBaseInfo.h>
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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListSmartChatJobResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSmartChatJobResponse();
    virtual ~ListSmartChatJobResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSmartChatJobResponse members

    /// <summary>
    /// 数字人智能交互对话任务总数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 数字人智能交互对话任务列表。
    /// </summary>

    std::vector<SmartChatJobBaseInfo>& getSmartChatJobs();
    bool smartChatJobsIsSet() const;
    void unsetsmartChatJobs();
    void setSmartChatJobs(const std::vector<SmartChatJobBaseInfo>& value);

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
    std::vector<SmartChatJobBaseInfo> smartChatJobs_;
    bool smartChatJobsIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListSmartChatJobResponse_H_
