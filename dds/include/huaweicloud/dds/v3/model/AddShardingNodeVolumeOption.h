
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_AddShardingNodeVolumeOption_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_AddShardingNodeVolumeOption_H_


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
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  AddShardingNodeVolumeOption
    : public ModelBase
{
public:
    AddShardingNodeVolumeOption();
    virtual ~AddShardingNodeVolumeOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddShardingNodeVolumeOption members

    /// <summary>
    /// 指定新增的所有shard组的磁盘容量。取值范围：10GB~2000GB。
    /// </summary>

    std::string getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(const std::string& value);


protected:
    std::string size_;
    bool sizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_AddShardingNodeVolumeOption_H_
