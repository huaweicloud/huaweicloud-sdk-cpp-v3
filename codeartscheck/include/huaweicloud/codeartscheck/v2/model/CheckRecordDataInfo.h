
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CheckRecordDataInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CheckRecordDataInfo_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartscheck/v2/model/CheckRecordIssueCountsInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  CheckRecordDataInfo
    : public ModelBase
{
public:
    CheckRecordDataInfo();
    virtual ~CheckRecordDataInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckRecordDataInfo members

    /// <summary>
    /// 检查任务执行开始时间
    /// </summary>

    std::string getCheckTime() const;
    bool checkTimeIsSet() const;
    void unsetcheckTime();
    void setCheckTime(const std::string& value);

    /// <summary>
    /// 检查任务执行结束时间
    /// </summary>

    std::string getCheckEndTime() const;
    bool checkEndTimeIsSet() const;
    void unsetcheckEndTime();
    void setCheckEndTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CheckRecordIssueCountsInfo getIssueCounts() const;
    bool issueCountsIsSet() const;
    void unsetissueCounts();
    void setIssueCounts(const CheckRecordIssueCountsInfo& value);


protected:
    std::string checkTime_;
    bool checkTimeIsSet_;
    std::string checkEndTime_;
    bool checkEndTimeIsSet_;
    CheckRecordIssueCountsInfo issueCounts_;
    bool issueCountsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CheckRecordDataInfo_H_
