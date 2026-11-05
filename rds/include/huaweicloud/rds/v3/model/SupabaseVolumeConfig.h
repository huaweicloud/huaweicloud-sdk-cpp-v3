
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseVolumeConfig_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseVolumeConfig_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 存储配置。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SupabaseVolumeConfig
    : public ModelBase
{
public:
    SupabaseVolumeConfig();
    virtual ~SupabaseVolumeConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SupabaseVolumeConfig members

    /// <summary>
    /// 磁盘类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 磁盘大小（GB）。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    int32_t size_;
    bool sizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseVolumeConfig_H_
