
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_LineCompareResult_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_LineCompareResult_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/LineCompareResultDetails.h>
#include <huaweicloud/drs/v3/model/LineCompareResultOverview.h>
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
/// 
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  LineCompareResult
    : public ModelBase
{
public:
    LineCompareResult();
    virtual ~LineCompareResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LineCompareResult members

    /// <summary>
    /// 行对比任务的id。
    /// </summary>

    std::string getCompareTaskId() const;
    bool compareTaskIdIsSet() const;
    void unsetcompareTaskId();
    void setCompareTaskId(const std::string& value);

    /// <summary>
    /// 行对比结果概览。
    /// </summary>

    std::vector<LineCompareResultOverview>& getLineCompareOverview();
    bool lineCompareOverviewIsSet() const;
    void unsetlineCompareOverview();
    void setLineCompareOverview(const std::vector<LineCompareResultOverview>& value);

    /// <summary>
    /// 行对比结果概览总数。
    /// </summary>

    int32_t getLineCompareOverviewCount() const;
    bool lineCompareOverviewCountIsSet() const;
    void unsetlineCompareOverviewCount();
    void setLineCompareOverviewCount(int32_t value);

    /// <summary>
    /// 行对比结果详情。
    /// </summary>

    std::vector<LineCompareResultDetails>& getLineCompareDetails();
    bool lineCompareDetailsIsSet() const;
    void unsetlineCompareDetails();
    void setLineCompareDetails(const std::vector<LineCompareResultDetails>& value);

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
    std::vector<LineCompareResultOverview> lineCompareOverview_;
    bool lineCompareOverviewIsSet_;
    int32_t lineCompareOverviewCount_;
    bool lineCompareOverviewCountIsSet_;
    std::vector<LineCompareResultDetails> lineCompareDetails_;
    bool lineCompareDetailsIsSet_;
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

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_LineCompareResult_H_
