
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CopyBackupRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CopyBackupRequest_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/BackupReplicateReq.h>
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
class HUAWEICLOUD_CBR_V1_EXPORT  CopyBackupRequest
    : public ModelBase
{
public:
    CopyBackupRequest();
    virtual ~CopyBackupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CopyBackupRequest members

    /// <summary>
    /// 复制的备份ID
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BackupReplicateReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BackupReplicateReq& value);


protected:
    std::string backupId_;
    bool backupIdIsSet_;
    BackupReplicateReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CopyBackupRequest& dereference_from_shared_ptr(std::shared_ptr<CopyBackupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CopyBackupRequest_H_
