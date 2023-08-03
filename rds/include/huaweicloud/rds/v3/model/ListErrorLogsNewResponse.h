
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListErrorLogsNewResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListErrorLogsNewResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ErrorLog.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListErrorLogsNewResponse
    : public ModelBase, public HttpResponse
{
public:
    ListErrorLogsNewResponse();
    virtual ~ListErrorLogsNewResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListErrorLogsNewResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<ErrorLog>& getErrorLogList();
    bool errorLogListIsSet() const;
    void unseterrorLogList();
    void setErrorLogList(const std::vector<ErrorLog>& value);

    /// <summary>
    /// 总记录数。
    /// </summary>

    int32_t getTotalRecord() const;
    bool totalRecordIsSet() const;
    void unsettotalRecord();
    void setTotalRecord(int32_t value);


protected:
    std::vector<ErrorLog> errorLogList_;
    bool errorLogListIsSet_;
    int32_t totalRecord_;
    bool totalRecordIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListErrorLogsNewResponse_H_
