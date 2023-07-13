
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ListCompareResultResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ListCompareResultResponse_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/ContentCompareResult.h>
#include <huaweicloud/drs/v3/model/CompareTaskListResult.h>
#include <huaweicloud/drs/v3/model/LineCompareResult.h>
#include <huaweicloud/drs/v3/model/ObjectCompareResult.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ListCompareResultResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCompareResultResponse();
    virtual ~ListCompareResultResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListCompareResultResponse members

    /// <summary>
    /// 任务id。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ObjectCompareResult getObjectLevelCompareResults() const;
    bool objectLevelCompareResultsIsSet() const;
    void unsetobjectLevelCompareResults();
    void setObjectLevelCompareResults(const ObjectCompareResult& value);

    /// <summary>
    /// 
    /// </summary>

    LineCompareResult getLineCompareResults() const;
    bool lineCompareResultsIsSet() const;
    void unsetlineCompareResults();
    void setLineCompareResults(const LineCompareResult& value);

    /// <summary>
    /// 
    /// </summary>

    ContentCompareResult getContentCompareResults() const;
    bool contentCompareResultsIsSet() const;
    void unsetcontentCompareResults();
    void setContentCompareResults(const ContentCompareResult& value);

    /// <summary>
    /// 
    /// </summary>

    CompareTaskListResult getCompareTaskListResults() const;
    bool compareTaskListResultsIsSet() const;
    void unsetcompareTaskListResults();
    void setCompareTaskListResults(const CompareTaskListResult& value);

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
    std::string jobId_;
    bool jobIdIsSet_;
    ObjectCompareResult objectLevelCompareResults_;
    bool objectLevelCompareResultsIsSet_;
    LineCompareResult lineCompareResults_;
    bool lineCompareResultsIsSet_;
    ContentCompareResult contentCompareResults_;
    bool contentCompareResultsIsSet_;
    CompareTaskListResult compareTaskListResults_;
    bool compareTaskListResultsIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ListCompareResultResponse_H_
