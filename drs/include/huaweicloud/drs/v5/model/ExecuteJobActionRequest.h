
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ExecuteJobActionRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ExecuteJobActionRequest_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/JobActionReq.h>
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
class HUAWEICLOUD_DRS_V5_EXPORT  ExecuteJobActionRequest
    : public ModelBase
{
public:
    ExecuteJobActionRequest();
    virtual ~ExecuteJobActionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ExecuteJobActionRequest members

    /// <summary>
    /// 任务ID (对比任务相关操作，多任务场景传父任务详情返回的master_job_id)
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

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

    JobActionReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const JobActionReq& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    JobActionReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ExecuteJobActionRequest& dereference_from_shared_ptr(std::shared_ptr<ExecuteJobActionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ExecuteJobActionRequest_H_
