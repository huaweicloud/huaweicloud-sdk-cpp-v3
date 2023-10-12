
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateManualBackupRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateManualBackupRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/CreateManualBackupOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  CreateManualBackupRequestBody
    : public ModelBase
{
public:
    CreateManualBackupRequestBody();
    virtual ~CreateManualBackupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateManualBackupRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateManualBackupOption getBackup() const;
    bool backupIsSet() const;
    void unsetbackup();
    void setBackup(const CreateManualBackupOption& value);


protected:
    CreateManualBackupOption backup_;
    bool backupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateManualBackupRequestBody_H_
