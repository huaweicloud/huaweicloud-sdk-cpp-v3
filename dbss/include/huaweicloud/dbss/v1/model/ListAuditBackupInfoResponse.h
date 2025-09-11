
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditBackupInfoResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditBackupInfoResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/BackupInfo.h>
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
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAuditBackupInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAuditBackupInfoResponse();
    virtual ~ListAuditBackupInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditBackupInfoResponse members

    /// <summary>
    /// 备份列表
    /// </summary>

    std::vector<BackupInfo>& getDataList();
    bool dataListIsSet() const;
    void unsetdataList();
    void setDataList(const std::vector<BackupInfo>& value);

    /// <summary>
    /// 总记录数
    /// </summary>

    int64_t getTotalNum() const;
    bool totalNumIsSet() const;
    void unsettotalNum();
    void setTotalNum(int64_t value);


protected:
    std::vector<BackupInfo> dataList_;
    bool dataListIsSet_;
    int64_t totalNum_;
    bool totalNumIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditBackupInfoResponse_H_
