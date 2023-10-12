
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListAuditlogsResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListAuditlogsResponse_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/ListAuditlogsResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ListAuditlogsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAuditlogsResponse();
    virtual ~ListAuditlogsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditlogsResponse members

    /// <summary>
    /// 总记录数。
    /// </summary>

    int32_t getTotalRecord() const;
    bool totalRecordIsSet() const;
    void unsettotalRecord();
    void setTotalRecord(int32_t value);

    /// <summary>
    /// 审计日志具体信息。
    /// </summary>

    std::vector<ListAuditlogsResult>& getAuditLogs();
    bool auditLogsIsSet() const;
    void unsetauditLogs();
    void setAuditLogs(const std::vector<ListAuditlogsResult>& value);


protected:
    int32_t totalRecord_;
    bool totalRecordIsSet_;
    std::vector<ListAuditlogsResult> auditLogs_;
    bool auditLogsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListAuditlogsResponse_H_
