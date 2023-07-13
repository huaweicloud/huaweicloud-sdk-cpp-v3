
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_AsyncCommitJobResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_AsyncCommitJobResp_H_

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
/// 提交异步任务响应体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  AsyncCommitJobResp
    : public ModelBase
{
public:
    AsyncCommitJobResp();
    virtual ~AsyncCommitJobResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AsyncCommitJobResp members

    /// <summary>
    /// 批量异步任务ID。
    /// </summary>

    std::string getAsyncJobId() const;
    bool asyncJobIdIsSet() const;
    void unsetasyncJobId();
    void setAsyncJobId(const std::string& value);

    /// <summary>
    /// 批量异步任务状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 提交指定ID批量异步任务结果信息。
    /// </summary>

    std::string getMsg() const;
    bool msgIsSet() const;
    void unsetmsg();
    void setMsg(const std::string& value);


protected:
    std::string asyncJobId_;
    bool asyncJobIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string msg_;
    bool msgIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_AsyncCommitJobResp_H_
