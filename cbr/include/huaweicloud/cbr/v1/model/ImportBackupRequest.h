
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ImportBackupRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ImportBackupRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/BackupSyncReq.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  ImportBackupRequest
    : public ModelBase
{
public:
    ImportBackupRequest();
    virtual ~ImportBackupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImportBackupRequest members

    /// <summary>
    /// 
    /// </summary>

    BackupSyncReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BackupSyncReq& value);


protected:
    BackupSyncReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ImportBackupRequest& dereference_from_shared_ptr(std::shared_ptr<ImportBackupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ImportBackupRequest_H_
