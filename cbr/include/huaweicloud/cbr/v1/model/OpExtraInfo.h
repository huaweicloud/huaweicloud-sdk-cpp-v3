
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtraInfo_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtraInfo_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/OpExtendInfoVaultDelete.h>
#include <huaweicloud/cbr/v1/model/OpExtendInfoCommon.h>
#include <huaweicloud/cbr/v1/model/OpExtendInfoRestore.h>
#include <huaweicloud/cbr/v1/model/OpExtendInfoReplication.h>
#include <huaweicloud/cbr/v1/model/Resource.h>
#include <huaweicloud/cbr/v1/model/OpExtendInfoBckup.h>
#include <huaweicloud/cbr/v1/model/OpExtendInfoDelete.h>
#include <huaweicloud/cbr/v1/model/OpExtendInfoRemoveResources.h>
#include <huaweicloud/cbr/v1/model/OpExtendInfoSync.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  OpExtraInfo
    : public ModelBase
{
public:
    OpExtraInfo();
    virtual ~OpExtraInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// OpExtraInfo members

    /// <summary>
    /// 
    /// </summary>

    OpExtendInfoBckup getBackup() const;
    bool backupIsSet() const;
    void unsetbackup();
    void setBackup(const OpExtendInfoBckup& value);

    /// <summary>
    /// 
    /// </summary>

    OpExtendInfoCommon getCommon() const;
    bool commonIsSet() const;
    void unsetcommon();
    void setCommon(const OpExtendInfoCommon& value);

    /// <summary>
    /// 
    /// </summary>

    OpExtendInfoDelete getDelete() const;
    bool deleteIsSet() const;
    void unsetdelete();
    void setDelete(const OpExtendInfoDelete& value);

    /// <summary>
    /// 
    /// </summary>

    OpExtendInfoSync getSync() const;
    bool syncIsSet() const;
    void unsetsync();
    void setSync(const OpExtendInfoSync& value);

    /// <summary>
    /// 
    /// </summary>

    OpExtendInfoRemoveResources getRemoveResources() const;
    bool removeResourcesIsSet() const;
    void unsetremoveResources();
    void setRemoveResources(const OpExtendInfoRemoveResources& value);

    /// <summary>
    /// 
    /// </summary>

    OpExtendInfoReplication getReplication() const;
    bool replicationIsSet() const;
    void unsetreplication();
    void setReplication(const OpExtendInfoReplication& value);

    /// <summary>
    /// 
    /// </summary>

    Resource getResource() const;
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const Resource& value);

    /// <summary>
    /// 
    /// </summary>

    OpExtendInfoRestore getRestore() const;
    bool restoreIsSet() const;
    void unsetrestore();
    void setRestore(const OpExtendInfoRestore& value);

    /// <summary>
    /// 
    /// </summary>

    OpExtendInfoVaultDelete getVaultDelete() const;
    bool vaultDeleteIsSet() const;
    void unsetvaultDelete();
    void setVaultDelete(const OpExtendInfoVaultDelete& value);


protected:
    OpExtendInfoBckup backup_;
    bool backupIsSet_;
    OpExtendInfoCommon common_;
    bool commonIsSet_;
    OpExtendInfoDelete delete_;
    bool deleteIsSet_;
    OpExtendInfoSync sync_;
    bool syncIsSet_;
    OpExtendInfoRemoveResources removeResources_;
    bool removeResourcesIsSet_;
    OpExtendInfoReplication replication_;
    bool replicationIsSet_;
    Resource resource_;
    bool resourceIsSet_;
    OpExtendInfoRestore restore_;
    bool restoreIsSet_;
    OpExtendInfoVaultDelete vaultDelete_;
    bool vaultDeleteIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtraInfo_H_
