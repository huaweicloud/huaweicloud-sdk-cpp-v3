
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ReportChartDataVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ReportChartDataVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/ReportDimVo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 报表数据
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ReportChartDataVo
    : public ModelBase
{
public:
    ReportChartDataVo();
    virtual ~ReportChartDataVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReportChartDataVo members

    /// <summary>
    /// 报表id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 报表名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ReportDimVo getAnalyzeDim() const;
    bool analyzeDimIsSet() const;
    void unsetanalyzeDim();
    void setAnalyzeDim(const ReportDimVo& value);

    /// <summary>
    /// 对比维度数据
    /// </summary>

    std::vector<ReportDimVo>& getCompareDim();
    bool compareDimIsSet() const;
    void unsetcompareDim();
    void setCompareDim(const std::vector<ReportDimVo>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    ReportDimVo analyzeDim_;
    bool analyzeDimIsSet_;
    std::vector<ReportDimVo> compareDim_;
    bool compareDimIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ReportChartDataVo_H_
