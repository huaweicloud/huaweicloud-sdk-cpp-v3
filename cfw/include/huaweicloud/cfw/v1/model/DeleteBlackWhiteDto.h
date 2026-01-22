
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteBlackWhiteDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteBlackWhiteDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  DeleteBlackWhiteDto
    : public ModelBase
{
public:
    DeleteBlackWhiteDto();
    virtual ~DeleteBlackWhiteDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteBlackWhiteDto members

    /// <summary>
    /// **参数解释**： 黑白名单列表ID **约束限制**： 不涉及  **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::vector<std::string>& getListIds();
    bool listIdsIsSet() const;
    void unsetlistIds();
    void setListIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 黑白名单列表类型 **约束限制**： 不涉及 **取值范围**： 4：黑名单 5：白名单 **默认取值**： 不涉及
    /// </summary>

    int32_t getListType() const;
    bool listTypeIsSet() const;
    void unsetlistType();
    void setListType(int32_t value);

    /// <summary>
    /// **参数解释**： 防护对象id，是创建云防火墙后用于区分互联网边界防护和VPC边界防护的标志id，可通过调用查询防火墙实例接口获得，通过返回值中的data.records.protect_objects.object_id（.表示各对象之间层级的区分）获得，type为0时，object_id为互联网边界防护对象ID，type为1时，object_id为VPC边界防护对象ID，type可通过data.records.protect_objects.type（.表示各对象之间层级的区分）获得 **约束限制**： 不涉及  **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);


protected:
    std::vector<std::string> listIds_;
    bool listIdsIsSet_;
    int32_t listType_;
    bool listTypeIsSet_;
    std::string objectId_;
    bool objectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteBlackWhiteDto_H_
