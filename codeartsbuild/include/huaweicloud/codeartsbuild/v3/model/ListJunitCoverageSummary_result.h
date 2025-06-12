
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListJunitCoverageSummary_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListJunitCoverageSummary_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/ListJunitCoverageSummary_result_unit_summary_list.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 返回结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ListJunitCoverageSummary_result
    : public ModelBase
{
public:
    ListJunitCoverageSummary_result();
    virtual ~ListJunitCoverageSummary_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListJunitCoverageSummary_result members

    /// <summary>
    /// 单元测试覆盖率报告列表
    /// </summary>

    std::vector<ListJunitCoverageSummary_result_unit_summary_list>& getUnitSummaryList();
    bool unitSummaryListIsSet() const;
    void unsetunitSummaryList();
    void setUnitSummaryList(const std::vector<ListJunitCoverageSummary_result_unit_summary_list>& value);


protected:
    std::vector<ListJunitCoverageSummary_result_unit_summary_list> unitSummaryList_;
    bool unitSummaryListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListJunitCoverageSummary_result_H_
