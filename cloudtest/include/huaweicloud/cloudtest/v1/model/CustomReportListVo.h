
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CustomReportListVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CustomReportListVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/ReportFilter.h>
#include <huaweicloud/cloudtest/v1/model/ReportChartDataVo.h>
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
/// 实际的数据类型：单个对象，集合或NULL
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CustomReportListVo
    : public ModelBase
{
public:
    CustomReportListVo();
    virtual ~CustomReportListVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CustomReportListVo members

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

    ReportFilter getFilter() const;
    bool filterIsSet() const;
    void unsetfilter();
    void setFilter(const ReportFilter& value);

    /// <summary>
    /// 工件类型(用例：case,测试套：task)
    /// </summary>

    std::string getWorkpieceType() const;
    bool workpieceTypeIsSet() const;
    void unsetworkpieceType();
    void setWorkpieceType(const std::string& value);

    /// <summary>
    /// 分析维度
    /// </summary>

    std::string getAnalysisDimension() const;
    bool analysisDimensionIsSet() const;
    void unsetanalysisDimension();
    void setAnalysisDimension(const std::string& value);

    /// <summary>
    /// 对比维度
    /// </summary>

    std::string getCompareDimension() const;
    bool compareDimensionIsSet() const;
    void unsetcompareDimension();
    void setCompareDimension(const std::string& value);

    /// <summary>
    /// 报表数据
    /// </summary>

    std::vector<ReportChartDataVo>& getChartData();
    bool chartDataIsSet() const;
    void unsetchartData();
    void setChartData(const std::vector<ReportChartDataVo>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    ReportFilter filter_;
    bool filterIsSet_;
    std::string workpieceType_;
    bool workpieceTypeIsSet_;
    std::string analysisDimension_;
    bool analysisDimensionIsSet_;
    std::string compareDimension_;
    bool compareDimensionIsSet_;
    std::vector<ReportChartDataVo> chartData_;
    bool chartDataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CustomReportListVo_H_
