
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListBackupTransfersResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListBackupTransfersResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/BackupTransferInfo.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListBackupTransfersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListBackupTransfersResponse();
    virtual ~ListBackupTransfersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBackupTransfersResponse members

    /// <summary>
    /// 任务数量
    /// </summary>

    int64_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int64_t value);

    /// <summary>
    /// 任务列表
    /// </summary>

    std::vector<BackupTransferInfo>& getTransferList();
    bool transferListIsSet() const;
    void unsettransferList();
    void setTransferList(const std::vector<BackupTransferInfo>& value);


protected:
    int64_t total_;
    bool totalIsSet_;
    std::vector<BackupTransferInfo> transferList_;
    bool transferListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListBackupTransfersResponse_H_
