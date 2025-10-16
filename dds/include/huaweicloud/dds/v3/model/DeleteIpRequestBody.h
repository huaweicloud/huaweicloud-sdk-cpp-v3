
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteIpRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteIpRequestBody_H_


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
class HUAWEICLOUD_DDS_V3_EXPORT  DeleteIpRequestBody
    : public ModelBase
{
public:
    DeleteIpRequestBody();
    virtual ~DeleteIpRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteIpRequestBody members

    /// <summary>
    /// **参数解释：** 需要删除IP的组类型。 **约束限制：** 不涉及。 **取值范围：** shard：表示删除所有Shard组IP。 config：表示删除Config组IP。 **默认取值：** 不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteIpRequestBody_H_
