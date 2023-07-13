
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtendInfoRestore_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtendInfoRestore_H_

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
class HUAWEICLOUD_CBR_V1_EXPORT  OpExtendInfoRestore
    : public ModelBase
{
public:
    OpExtendInfoRestore();
    virtual ~OpExtendInfoRestore();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// OpExtendInfoRestore members

    /// <summary>
    /// 备份副本ID
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 备份名称
    /// </summary>

    std::string getBackupName() const;
    bool backupNameIsSet() const;
    void unsetbackupName();
    void setBackupName(const std::string& value);

    /// <summary>
    /// 恢复目标资源ID
    /// </summary>

    std::string getTargetResourceId() const;
    bool targetResourceIdIsSet() const;
    void unsettargetResourceId();
    void setTargetResourceId(const std::string& value);

    /// <summary>
    /// 恢复目标资源名称
    /// </summary>

    std::string getTargetResourceName() const;
    bool targetResourceNameIsSet() const;
    void unsettargetResourceName();
    void setTargetResourceName(const std::string& value);


protected:
    std::string backupId_;
    bool backupIdIsSet_;
    std::string backupName_;
    bool backupNameIsSet_;
    std::string targetResourceId_;
    bool targetResourceIdIsSet_;
    std::string targetResourceName_;
    bool targetResourceNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtendInfoRestore_H_
