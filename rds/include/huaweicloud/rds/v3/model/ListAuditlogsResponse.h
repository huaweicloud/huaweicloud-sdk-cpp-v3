
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAuditlogsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAuditlogsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/Auditlog.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListAuditlogsResponse
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
    /// 
    /// </summary>

    std::vector<Auditlog>& getAuditlogs();
    bool auditlogsIsSet() const;
    void unsetauditlogs();
    void setAuditlogs(const std::vector<Auditlog>& value);

    /// <summary>
    /// 总记录数。
    /// </summary>

    int32_t getTotalRecord() const;
    bool totalRecordIsSet() const;
    void unsettotalRecord();
    void setTotalRecord(int32_t value);


protected:
    std::vector<Auditlog> auditlogs_;
    bool auditlogsIsSet_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAuditlogsResponse_H_
