
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateStorageModeReq_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateStorageModeReq_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  UpdateStorageModeReq
    : public ModelBase
{
public:
    UpdateStorageModeReq();
    virtual ~UpdateStorageModeReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateStorageModeReq members

    /// <summary>
    /// 原媒资id 
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 存储模式。 取值如下： - STANDARD：标准存储。 - WARM：低频存储。 - COLD：归档存储。 
    /// </summary>

    std::string getStorageMode() const;
    bool storageModeIsSet() const;
    void unsetstorageMode();
    void setStorageMode(const std::string& value);

    /// <summary>
    /// 归档恢复方式。 取值如下： - TEMP：临时 - FOREVER：永久 
    /// </summary>

    std::string getRestoreMode() const;
    bool restoreModeIsSet() const;
    void unsetrestoreMode();
    void setRestoreMode(const std::string& value);

    /// <summary>
    /// 从归档转标准存储且选择临时恢复时临时恢复时间。 
    /// </summary>

    int32_t getDays() const;
    bool daysIsSet() const;
    void unsetdays();
    void setDays(int32_t value);

    /// <summary>
    /// 归档恢复选项，快速恢复EXPEDITED，标准恢复STANDARD，默认快速恢复 
    /// </summary>

    std::string getRestoreTier() const;
    bool restoreTierIsSet() const;
    void unsetrestoreTier();
    void setRestoreTier(const std::string& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string storageMode_;
    bool storageModeIsSet_;
    std::string restoreMode_;
    bool restoreModeIsSet_;
    int32_t days_;
    bool daysIsSet_;
    std::string restoreTier_;
    bool restoreTierIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateStorageModeReq_H_
