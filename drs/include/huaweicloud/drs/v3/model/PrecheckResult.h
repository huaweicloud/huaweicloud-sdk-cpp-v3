
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_PrecheckResult_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_PrecheckResult_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/PrecheckFailSubJobVO.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 预检查结果信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  PrecheckResult
    : public ModelBase
{
public:
    PrecheckResult();
    virtual ~PrecheckResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PrecheckResult members

    /// <summary>
    /// 检查项。
    /// </summary>

    std::string getItem() const;
    bool itemIsSet() const;
    void unsetitem();
    void setItem(const std::string& value);

    /// <summary>
    /// 检查结果
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// 失败原因。
    /// </summary>

    std::string getFailedReason() const;
    bool failedReasonIsSet() const;
    void unsetfailedReason();
    void setFailedReason(const std::string& value);

    /// <summary>
    /// 加密的数据。
    /// </summary>

    std::string getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::string& value);

    /// <summary>
    /// 行错误信息。
    /// </summary>

    std::string getRawErrorMsg() const;
    bool rawErrorMsgIsSet() const;
    void unsetrawErrorMsg();
    void setRawErrorMsg(const std::string& value);

    /// <summary>
    /// 检查项分组
    /// </summary>

    std::string getGroup() const;
    bool groupIsSet() const;
    void unsetgroup();
    void setGroup(const std::string& value);

    /// <summary>
    /// 失败的子任务信息。
    /// </summary>

    std::vector<PrecheckFailSubJobVO>& getFailedSubJobs();
    bool failedSubJobsIsSet() const;
    void unsetfailedSubJobs();
    void setFailedSubJobs(const std::vector<PrecheckFailSubJobVO>& value);


protected:
    std::string item_;
    bool itemIsSet_;
    std::string result_;
    bool resultIsSet_;
    std::string failedReason_;
    bool failedReasonIsSet_;
    std::string data_;
    bool dataIsSet_;
    std::string rawErrorMsg_;
    bool rawErrorMsgIsSet_;
    std::string group_;
    bool groupIsSet_;
    std::vector<PrecheckFailSubJobVO> failedSubJobs_;
    bool failedSubJobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_PrecheckResult_H_
