
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_GenerateReportInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_GenerateReportInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/ReportFilter.h>
#include <string>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  GenerateReportInfo
    : public ModelBase
{
public:
    GenerateReportInfo();
    virtual ~GenerateReportInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GenerateReportInfo members

    /// <summary>
    /// 报表名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 工件类型(用例：case,测试套：suite)
    /// </summary>

    std::string getWorkpieceType() const;
    bool workpieceTypeIsSet() const;
    void unsetworkpieceType();
    void setWorkpieceType(const std::string& value);

    /// <summary>
    /// 分析维度。该参数选择横坐标（X轴）维度，不传会返回空列表。
    /// </summary>

    std::string getAnalysisDimRow() const;
    bool analysisDimRowIsSet() const;
    void unsetanalysisDimRow();
    void setAnalysisDimRow(const std::string& value);

    /// <summary>
    /// 对比维度
    /// </summary>

    std::string getCompareDimColumn() const;
    bool compareDimColumnIsSet() const;
    void unsetcompareDimColumn();
    void setCompareDimColumn(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ReportFilter getFilter() const;
    bool filterIsSet() const;
    void unsetfilter();
    void setFilter(const ReportFilter& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string workpieceType_;
    bool workpieceTypeIsSet_;
    std::string analysisDimRow_;
    bool analysisDimRowIsSet_;
    std::string compareDimColumn_;
    bool compareDimColumnIsSet_;
    ReportFilter filter_;
    bool filterIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_GenerateReportInfo_H_
