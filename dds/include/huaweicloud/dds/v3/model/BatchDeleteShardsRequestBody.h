
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_BatchDeleteShardsRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_BatchDeleteShardsRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 请求体
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  BatchDeleteShardsRequestBody
    : public ModelBase
{
public:
    BatchDeleteShardsRequestBody();
    virtual ~BatchDeleteShardsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteShardsRequestBody members

    /// <summary>
    /// **参数解释：** 组ID。可以调用“查询实例列表和详情”接口获取。 **约束限制：** 只支持shard组。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<std::string>& getIds();
    bool idsIsSet() const;
    void unsetids();
    void setIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> ids_;
    bool idsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_BatchDeleteShardsRequestBody_H_
