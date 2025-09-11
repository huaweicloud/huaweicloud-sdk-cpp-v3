
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditReportsResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditReportsResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/ReportInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAuditReportsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAuditReportsResponse();
    virtual ~ListAuditReportsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditReportsResponse members

    /// <summary>
    /// 报表对象列表
    /// </summary>

    std::vector<ReportInfo>& getReports();
    bool reportsIsSet() const;
    void unsetreports();
    void setReports(const std::vector<ReportInfo>& value);

    /// <summary>
    /// 总记录数
    /// </summary>

    int64_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int64_t value);


protected:
    std::vector<ReportInfo> reports_;
    bool reportsIsSet_;
    int64_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditReportsResponse_H_
