
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_Partition_metadata_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_Partition_metadata_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 分区的元数据信息 **约束限制**： 不涉及 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  Partition_metadata
    : public ModelBase
{
public:
    Partition_metadata();
    virtual ~Partition_metadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Partition_metadata members

    /// <summary>
    /// **参数解释**： 分区名称 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建时间 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getCreationTimestamp() const;
    bool creationTimestampIsSet() const;
    void unsetcreationTimestamp();
    void setCreationTimestamp(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string creationTimestamp_;
    bool creationTimestampIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_Partition_metadata_H_
