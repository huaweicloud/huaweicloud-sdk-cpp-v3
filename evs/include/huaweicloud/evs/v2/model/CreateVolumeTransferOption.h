
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateVolumeTransferOption_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateVolumeTransferOption_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  CreateVolumeTransferOption
    : public ModelBase
{
public:
    CreateVolumeTransferOption();
    virtual ~CreateVolumeTransferOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateVolumeTransferOption members

    /// <summary>
    /// 云硬盘过户记录的名称。最大支持255个字节。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 云硬盘ID。  通过[查询所有云硬盘详情](https://support.huaweicloud.com/api-evs/evs_04_3033.html)获取。
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateVolumeTransferOption_H_
