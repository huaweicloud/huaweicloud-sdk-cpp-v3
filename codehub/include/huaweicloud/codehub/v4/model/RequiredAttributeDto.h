
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RequiredAttributeDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RequiredAttributeDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  RequiredAttributeDto
    : public ModelBase
{
public:
    RequiredAttributeDto();
    virtual ~RequiredAttributeDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RequiredAttributeDto members

    /// <summary>
    /// **参数解释：** 必填字段名称。 描述：Body 严重程度：Severity 指派给：AssigneeId 意见分类：ReviewCategories 意见模块：ReviewModules
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否必填。
    /// </summary>

    bool isIsRequired() const;
    bool isRequiredIsSet() const;
    void unsetisRequired();
    void setIsRequired(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    bool isRequired_;
    bool isRequiredIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RequiredAttributeDto_H_
