
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RoleBasicDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RoleBasicDto_H_


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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  RoleBasicDto
    : public ModelBase
{
public:
    RoleBasicDto();
    virtual ~RoleBasicDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RoleBasicDto members

    /// <summary>
    /// **参数解释：** 角色唯一标识。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 角色名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 角色id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getRelatedRoleId() const;
    bool relatedRoleIdIsSet() const;
    void unsetrelatedRoleId();
    void setRelatedRoleId(const std::string& value);

    /// <summary>
    /// **参数解释：** 角色中文名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getChineseName() const;
    bool chineseNameIsSet() const;
    void unsetchineseName();
    void setChineseName(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string relatedRoleId_;
    bool relatedRoleIdIsSet_;
    std::string chineseName_;
    bool chineseNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RoleBasicDto_H_
