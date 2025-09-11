
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ReportInfo_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ReportInfo_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/ReportBean.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ReportInfo
    : public ModelBase
{
public:
    ReportInfo();
    virtual ~ReportInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReportInfo members

    /// <summary>
    /// 
    /// </summary>

    ReportBean getReport() const;
    bool reportIsSet() const;
    void unsetreport();
    void setReport(const ReportBean& value);


protected:
    ReportBean report_;
    bool reportIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ReportInfo_H_
