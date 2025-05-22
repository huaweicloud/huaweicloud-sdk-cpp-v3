
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowReportSummaryBody_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowReportSummaryBody_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/ShowReportSummary.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowReportSummaryBody_result
    : public ModelBase
{
public:
    ShowReportSummaryBody_result();
    virtual ~ShowReportSummaryBody_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowReportSummaryBody_result members

    /// <summary>
    /// 
    /// </summary>

    ShowReportSummary getSummary() const;
    bool summaryIsSet() const;
    void unsetsummary();
    void setSummary(const ShowReportSummary& value);

    /// <summary>
    /// 单元测试报告列表
    /// </summary>

    std::vector<ShowReportSummary>& getSubSummarys();
    bool subSummarysIsSet() const;
    void unsetsubSummarys();
    void setSubSummarys(const std::vector<ShowReportSummary>& value);


protected:
    ShowReportSummary summary_;
    bool summaryIsSet_;
    std::vector<ShowReportSummary> subSummarys_;
    bool subSummarysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowReportSummaryBody_result_H_
