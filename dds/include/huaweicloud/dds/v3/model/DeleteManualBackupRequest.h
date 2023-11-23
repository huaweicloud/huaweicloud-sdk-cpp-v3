
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteManualBackupRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteManualBackupRequest_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  DeleteManualBackupRequest
    : public ModelBase
{
public:
    DeleteManualBackupRequest();
    virtual ~DeleteManualBackupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteManualBackupRequest members

    /// <summary>
    /// 备份ID。
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);


protected:
    std::string backupId_;
    bool backupIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteManualBackupRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteManualBackupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteManualBackupRequest_H_
