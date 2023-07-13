
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateBatchAsyncJobsRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateBatchAsyncJobsRequest_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v5/model/BatchAsyncUpdateJobReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  UpdateBatchAsyncJobsRequest
    : public ModelBase
{
public:
    UpdateBatchAsyncJobsRequest();
    virtual ~UpdateBatchAsyncJobsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateBatchAsyncJobsRequest members

    /// <summary>
    /// 批量异步创建的任务ID，由创建批量异步任务接口返回。
    /// </summary>

    std::string getAsyncJobId() const;
    bool asyncJobIdIsSet() const;
    void unsetasyncJobId();
    void setAsyncJobId(const std::string& value);

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchAsyncUpdateJobReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchAsyncUpdateJobReq& value);


protected:
    std::string asyncJobId_;
    bool asyncJobIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    BatchAsyncUpdateJobReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateBatchAsyncJobsRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateBatchAsyncJobsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateBatchAsyncJobsRequest_H_
