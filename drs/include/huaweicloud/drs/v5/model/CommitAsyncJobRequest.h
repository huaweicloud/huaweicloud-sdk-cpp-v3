
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_CommitAsyncJobRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_CommitAsyncJobRequest_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_DRS_V5_EXPORT  CommitAsyncJobRequest
    : public ModelBase
{
public:
    CommitAsyncJobRequest();
    virtual ~CommitAsyncJobRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommitAsyncJobRequest members

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


protected:
    std::string asyncJobId_;
    bool asyncJobIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CommitAsyncJobRequest& dereference_from_shared_ptr(std::shared_ptr<CommitAsyncJobRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_CommitAsyncJobRequest_H_
