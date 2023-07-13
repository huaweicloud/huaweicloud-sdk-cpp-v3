
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_RestoreBackupRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_RestoreBackupRequest_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/BackupRestoreReq.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  RestoreBackupRequest
    : public ModelBase
{
public:
    RestoreBackupRequest();
    virtual ~RestoreBackupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RestoreBackupRequest members

    /// <summary>
    /// 备份id
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BackupRestoreReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BackupRestoreReq& value);


protected:
    std::string backupId_;
    bool backupIdIsSet_;
    BackupRestoreReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RestoreBackupRequest& dereference_from_shared_ptr(std::shared_ptr<RestoreBackupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_RestoreBackupRequest_H_
