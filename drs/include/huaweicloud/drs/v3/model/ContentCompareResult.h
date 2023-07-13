
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ContentCompareResult_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ContentCompareResult_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/ContentCompareResultDetails.h>
#include <string>
#include <huaweicloud/drs/v3/model/ContentCompareResultOverview.h>
#include <vector>
#include <huaweicloud/drs/v3/model/ContentCompareResultDiffs.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ContentCompareResult
    : public ModelBase
{
public:
    ContentCompareResult();
    virtual ~ContentCompareResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ContentCompareResult members

    /// <summary>
    /// 内容对比的任务id。
    /// </summary>

    std::string getCompareTaskId() const;
    bool compareTaskIdIsSet() const;
    void unsetcompareTaskId();
    void setCompareTaskId(const std::string& value);

    /// <summary>
    /// 内容对比结果概览。
    /// </summary>

    std::vector<ContentCompareResultOverview>& getContentCompareOverview();
    bool contentCompareOverviewIsSet() const;
    void unsetcontentCompareOverview();
    void setContentCompareOverview(const std::vector<ContentCompareResultOverview>& value);

    /// <summary>
    /// 内容对比结果概览总数。
    /// </summary>

    int32_t getContentCompareOverviewCount() const;
    bool contentCompareOverviewCountIsSet() const;
    void unsetcontentCompareOverviewCount();
    void setContentCompareOverviewCount(int32_t value);

    /// <summary>
    /// 内容对比结果详情。
    /// </summary>

    std::vector<ContentCompareResultDetails>& getContentCompareDetails();
    bool contentCompareDetailsIsSet() const;
    void unsetcontentCompareDetails();
    void setContentCompareDetails(const std::vector<ContentCompareResultDetails>& value);

    /// <summary>
    /// 内容对比结果差异。
    /// </summary>

    std::vector<ContentCompareResultDiffs>& getContentCompareDiffs();
    bool contentCompareDiffsIsSet() const;
    void unsetcontentCompareDiffs();
    void setContentCompareDiffs(const std::vector<ContentCompareResultDiffs>& value);

    /// <summary>
    /// 错误码。
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 错误信息。
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);


protected:
    std::string compareTaskId_;
    bool compareTaskIdIsSet_;
    std::vector<ContentCompareResultOverview> contentCompareOverview_;
    bool contentCompareOverviewIsSet_;
    int32_t contentCompareOverviewCount_;
    bool contentCompareOverviewCountIsSet_;
    std::vector<ContentCompareResultDetails> contentCompareDetails_;
    bool contentCompareDetailsIsSet_;
    std::vector<ContentCompareResultDiffs> contentCompareDiffs_;
    bool contentCompareDiffsIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ContentCompareResult_H_
