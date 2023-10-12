
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtendInfoSync_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtendInfoSync_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_CBR_V1_EXPORT  OpExtendInfoSync
    : public ModelBase
{
public:
    OpExtendInfoSync();
    virtual ~OpExtendInfoSync();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OpExtendInfoSync members

    /// <summary>
    /// 同步备份副本数
    /// </summary>

    int32_t getSyncBackupNum() const;
    bool syncBackupNumIsSet() const;
    void unsetsyncBackupNum();
    void setSyncBackupNum(int32_t value);

    /// <summary>
    /// 删除的备份副本数
    /// </summary>

    int32_t getDeleteBackupNum() const;
    bool deleteBackupNumIsSet() const;
    void unsetdeleteBackupNum();
    void setDeleteBackupNum(int32_t value);

    /// <summary>
    /// 同步失败备副本数
    /// </summary>

    int32_t getErrSyncBackupNum() const;
    bool errSyncBackupNumIsSet() const;
    void unseterrSyncBackupNum();
    void setErrSyncBackupNum(int32_t value);


protected:
    int32_t syncBackupNum_;
    bool syncBackupNumIsSet_;
    int32_t deleteBackupNum_;
    bool deleteBackupNumIsSet_;
    int32_t errSyncBackupNum_;
    bool errSyncBackupNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtendInfoSync_H_
