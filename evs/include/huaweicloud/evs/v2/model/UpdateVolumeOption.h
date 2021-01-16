
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateVolumeOption_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateVolumeOption_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_EVS_V2_EXPORT  UpdateVolumeOption
    : public ModelBase
{
public:
    UpdateVolumeOption();
    virtual ~UpdateVolumeOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateVolumeOption members

    /// <summary>
    /// 新的云硬盘的描述，name和description不能同时为null。最大支持255个字节。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 新的云硬盘的名字，name和description不能同时为null。最大支持255个字节。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateVolumeOption_H_
