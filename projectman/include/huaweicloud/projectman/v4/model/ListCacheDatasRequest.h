
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListCacheDatasRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListCacheDatasRequest_H_


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
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListCacheDatasRequest
    : public ModelBase
{
public:
    ListCacheDatasRequest();
    virtual ~ListCacheDatasRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCacheDatasRequest members

    /// <summary>
    /// **参数解释**： 项目的32位uuid，项目唯一标识，通过[查询项目列表](ListProjectsV4.xml)接口获取，响应消息体中的**project_id**字段的值就是项目ID。 **约束限制**： 32位的数字和字母组成的字符串。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getProjectUUId() const;
    bool projectUUIdIsSet() const;
    void unsetprojectUUId();
    void setProjectUUId(const std::string& value);

    /// <summary>
    /// **参数解释：** 字段类型。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： backlog。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string projectUUId_;
    bool projectUUIdIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListCacheDatasRequest_H_
