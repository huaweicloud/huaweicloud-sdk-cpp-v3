
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointReplicateRespbackups_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointReplicateRespbackups_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  CheckpointReplicateRespbackups
    : public ModelBase
{
public:
    CheckpointReplicateRespbackups();
    virtual ~CheckpointReplicateRespbackups();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckpointReplicateRespbackups members

    /// <summary>
    /// 待复制的备份ID
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 复制记录ID
    /// </summary>

    std::string getReplicationRecordId() const;
    bool replicationRecordIdIsSet() const;
    void unsetreplicationRecordId();
    void setReplicationRecordId(const std::string& value);


protected:
    std::string backupId_;
    bool backupIdIsSet_;
    std::string replicationRecordId_;
    bool replicationRecordIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointReplicateRespbackups_H_
