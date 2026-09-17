
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowCategoryStatusRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowCategoryStatusRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowCategoryStatusRequest
    : public ModelBase
{
public:
    ShowCategoryStatusRequest();
    virtual ~ShowCategoryStatusRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCategoryStatusRequest members

    /// <summary>
    /// 项目32位ID，项目唯一标识。通过查询IPD项目列表获取，响应消息体中的id字段的值就是项目ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项类型。 **约束限制**： 2~128个字符。 **取值范围**： 支持多种工作项类型，使用英文逗号分隔，例如：IR,SR,AR。 - 系统设备类项目：RR、SF、IR、SR、AR、Task、Bug - 独立软件类项目：RR、SF、IR、US、Task、Bug - 云服务类项目：RR、Epic、FE、US、Task、Bug **默认取值**： 不涉及。
    /// </summary>

    std::string getCategories() const;
    bool categoriesIsSet() const;
    void unsetcategories();
    void setCategories(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string categories_;
    bool categoriesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowCategoryStatusRequest& dereference_from_shared_ptr(std::shared_ptr<ShowCategoryStatusRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowCategoryStatusRequest_H_
