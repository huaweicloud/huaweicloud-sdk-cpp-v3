
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowReportFileObsUrisRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowReportFileObsUrisRequest_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowReportFileObsUrisRequest
    : public ModelBase
{
public:
    ShowReportFileObsUrisRequest();
    virtual ~ShowReportFileObsUrisRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowReportFileObsUrisRequest members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 导出的sql文件类型。取值范围：  abnormal_sql ：异常sql列表 abnormal_sql_detail ：异常sql详情 slow_sql ：慢sql列表 slow_sql_detail ： 慢sql详情
    /// </summary>

    std::string getReportType() const;
    bool reportTypeIsSet() const;
    void unsetreportType();
    void setReportType(const std::string& value);

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string reportType_;
    bool reportTypeIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowReportFileObsUrisRequest& dereference_from_shared_ptr(std::shared_ptr<ShowReportFileObsUrisRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowReportFileObsUrisRequest_H_
