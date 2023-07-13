
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtendInfoReplication_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtendInfoReplication_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_CBR_V1_EXPORT  OpExtendInfoReplication
    : public ModelBase
{
public:
    OpExtendInfoReplication();
    virtual ~OpExtendInfoReplication();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// OpExtendInfoReplication members

    /// <summary>
    /// 目标副本ID
    /// </summary>

    std::string getDestinationBackupId() const;
    bool destinationBackupIdIsSet() const;
    void unsetdestinationBackupId();
    void setDestinationBackupId(const std::string& value);

    /// <summary>
    /// 目标还原点ID
    /// </summary>

    std::string getDestinationCheckpointId() const;
    bool destinationCheckpointIdIsSet() const;
    void unsetdestinationCheckpointId();
    void setDestinationCheckpointId(const std::string& value);

    /// <summary>
    /// 目标project_id
    /// </summary>

    std::string getDestinationProjectId() const;
    bool destinationProjectIdIsSet() const;
    void unsetdestinationProjectId();
    void setDestinationProjectId(const std::string& value);

    /// <summary>
    /// 目标区域
    /// </summary>

    std::string getDestinationRegion() const;
    bool destinationRegionIsSet() const;
    void unsetdestinationRegion();
    void setDestinationRegion(const std::string& value);

    /// <summary>
    /// 源副本ID
    /// </summary>

    std::string getSourceBackupId() const;
    bool sourceBackupIdIsSet() const;
    void unsetsourceBackupId();
    void setSourceBackupId(const std::string& value);

    /// <summary>
    /// 源还原点ID
    /// </summary>

    std::string getSourceCheckpointId() const;
    bool sourceCheckpointIdIsSet() const;
    void unsetsourceCheckpointId();
    void setSourceCheckpointId(const std::string& value);

    /// <summary>
    /// 源project_id
    /// </summary>

    std::string getSourceProjectId() const;
    bool sourceProjectIdIsSet() const;
    void unsetsourceProjectId();
    void setSourceProjectId(const std::string& value);

    /// <summary>
    /// 源区域
    /// </summary>

    std::string getSourceRegion() const;
    bool sourceRegionIsSet() const;
    void unsetsourceRegion();
    void setSourceRegion(const std::string& value);

    /// <summary>
    /// 源备份名称
    /// </summary>

    std::string getSourceBackupName() const;
    bool sourceBackupNameIsSet() const;
    void unsetsourceBackupName();
    void setSourceBackupName(const std::string& value);

    /// <summary>
    /// 目标备份名称
    /// </summary>

    std::string getDestinationBackupName() const;
    bool destinationBackupNameIsSet() const;
    void unsetdestinationBackupName();
    void setDestinationBackupName(const std::string& value);


protected:
    std::string destinationBackupId_;
    bool destinationBackupIdIsSet_;
    std::string destinationCheckpointId_;
    bool destinationCheckpointIdIsSet_;
    std::string destinationProjectId_;
    bool destinationProjectIdIsSet_;
    std::string destinationRegion_;
    bool destinationRegionIsSet_;
    std::string sourceBackupId_;
    bool sourceBackupIdIsSet_;
    std::string sourceCheckpointId_;
    bool sourceCheckpointIdIsSet_;
    std::string sourceProjectId_;
    bool sourceProjectIdIsSet_;
    std::string sourceRegion_;
    bool sourceRegionIsSet_;
    std::string sourceBackupName_;
    bool sourceBackupNameIsSet_;
    std::string destinationBackupName_;
    bool destinationBackupNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtendInfoReplication_H_
