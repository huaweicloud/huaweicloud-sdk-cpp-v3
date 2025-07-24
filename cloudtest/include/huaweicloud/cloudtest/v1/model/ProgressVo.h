
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ProgressVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ProgressVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ProgressVo
    : public ModelBase
{
public:
    ProgressVo();
    virtual ~ProgressVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProgressVo members

    /// <summary>
    /// 进度uri
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 异步进度名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 资源总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 异步操作是否完成
    /// </summary>

    bool isCompleted() const;
    bool completedIsSet() const;
    void unsetcompleted();
    void setCompleted(bool value);

    /// <summary>
    /// 异步操作是否取消
    /// </summary>

    bool isCancelled() const;
    bool cancelledIsSet() const;
    void unsetcancelled();
    void setCancelled(bool value);

    /// <summary>
    /// 提示信息列表
    /// </summary>

    std::vector<std::string>& getInformations();
    bool informationsIsSet() const;
    void unsetinformations();
    void setInformations(const std::vector<std::string>& value);

    /// <summary>
    /// 错误编码
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 错误信息
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// 提交时间
    /// </summary>

    std::string getSubmittedTime() const;
    bool submittedTimeIsSet() const;
    void unsetsubmittedTime();
    void setSubmittedTime(const std::string& value);

    /// <summary>
    /// 开始时间
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 结束时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 服务ip
    /// </summary>

    std::string getServerIp() const;
    bool serverIpIsSet() const;
    void unsetserverIp();
    void setServerIp(const std::string& value);

    /// <summary>
    /// 最后修改时间
    /// </summary>

    int64_t getLastModifiedTime() const;
    bool lastModifiedTimeIsSet() const;
    void unsetlastModifiedTime();
    void setLastModifiedTime(int64_t value);

    /// <summary>
    /// 执行完成总数
    /// </summary>

    int32_t getFinishedCount() const;
    bool finishedCountIsSet() const;
    void unsetfinishedCount();
    void setFinishedCount(int32_t value);

    /// <summary>
    /// 异步操作返回值
    /// </summary>

    Object getReturnValue() const;
    bool returnValueIsSet() const;
    void unsetreturnValue();
    void setReturnValue(const Object& value);

    /// <summary>
    /// 异常信息
    /// </summary>

    std::string getExceptionMessage() const;
    bool exceptionMessageIsSet() const;
    void unsetexceptionMessage();
    void setExceptionMessage(const std::string& value);

    /// <summary>
    /// 行编号
    /// </summary>

    int32_t getLineUpNum() const;
    bool lineUpNumIsSet() const;
    void unsetlineUpNum();
    void setLineUpNum(int32_t value);

    /// <summary>
    /// 异步操作的key
    /// </summary>

    std::string getAsynOperationKey() const;
    bool asynOperationKeyIsSet() const;
    void unsetasynOperationKey();
    void setAsynOperationKey(const std::string& value);

    /// <summary>
    /// 是否结束
    /// </summary>

    bool isIsEnded() const;
    bool isEndedIsSet() const;
    void unsetisEnded();
    void setIsEnded(bool value);

    /// <summary>
    /// 异步操作完成进度
    /// </summary>

    int32_t getFinishedPercent() const;
    bool finishedPercentIsSet() const;
    void unsetfinishedPercent();
    void setFinishedPercent(int32_t value);


protected:
    std::string uri_;
    bool uriIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t total_;
    bool totalIsSet_;
    bool completed_;
    bool completedIsSet_;
    bool cancelled_;
    bool cancelledIsSet_;
    std::vector<std::string> informations_;
    bool informationsIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string reason_;
    bool reasonIsSet_;
    std::string submittedTime_;
    bool submittedTimeIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string serverIp_;
    bool serverIpIsSet_;
    int64_t lastModifiedTime_;
    bool lastModifiedTimeIsSet_;
    int32_t finishedCount_;
    bool finishedCountIsSet_;
    Object returnValue_;
    bool returnValueIsSet_;
    std::string exceptionMessage_;
    bool exceptionMessageIsSet_;
    int32_t lineUpNum_;
    bool lineUpNumIsSet_;
    std::string asynOperationKey_;
    bool asynOperationKeyIsSet_;
    bool isEnded_;
    bool isEndedIsSet_;
    int32_t finishedPercent_;
    bool finishedPercentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ProgressVo_H_
