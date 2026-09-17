
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchOperateInfo_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchOperateInfo_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 批量操作结果详情，包含操作对象ID和操作人ID。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchOperateInfo
    : public ModelBase
{
public:
    BatchOperateInfo();
    virtual ~BatchOperateInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchOperateInfo members

    /// <summary>
    /// **参数解释**： 发布/迭代计划ID。 **取值范围**： 长度为18~19个字符的数字字符串。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 最近更新人ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string modifiedBy_;
    bool modifiedByIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchOperateInfo_H_
