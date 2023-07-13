
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_AsyncJobResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_AsyncJobResp_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 批量异步创建任务响应体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  AsyncJobResp
    : public ModelBase
{
public:
    AsyncJobResp();
    virtual ~AsyncJobResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AsyncJobResp members

    /// <summary>
    /// 批量异步创建的任务ID。
    /// </summary>

    std::string getAsyncJobId() const;
    bool asyncJobIdIsSet() const;
    void unsetasyncJobId();
    void setAsyncJobId(const std::string& value);

    /// <summary>
    /// 批量异步创建的任务状态。取值： - ASYNC_JOB_VALIDATING：批量异步任务参数校验中。 - ASYNC_JOB_VALIDATE_FAILED：批量异步任务参数校验失败。 - ASYNC_JOB_CREATING：批量异步任务创建中。 - ASYNC_JOB_CREATE_FAILED：批量异步任务创建失败。 - ASYNC_JOB_COMPLETED：批量异步任务创建完成。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 批量异步创建的任务的租户名。
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 批量异步创建的任务的用户名。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 批量异步创建的任务的创建时间。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);


protected:
    std::string asyncJobId_;
    bool asyncJobIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_AsyncJobResp_H_
