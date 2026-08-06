
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ListAccessPointResponseBody_access_points_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ListAccessPointResponseBody_access_points_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ListAccessPointResponseBody_access_points
    : public ModelBase
{
public:
    ListAccessPointResponseBody_access_points();
    virtual ~ListAccessPointResponseBody_access_points();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAccessPointResponseBody_access_points members

    /// <summary>
    /// **参数解释：** 接入点ID **取值范围：** 不涉及
    /// </summary>

    std::string getAccessPointId() const;
    bool accessPointIdIsSet() const;
    void unsetaccessPointId();
    void setAccessPointId(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥空间ID **取值范围：** 不涉及
    /// </summary>

    std::string getKeyspaceId() const;
    bool keyspaceIdIsSet() const;
    void unsetkeyspaceId();
    void setKeyspaceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 接入点名称 **取值范围：** 不涉及
    /// </summary>

    std::string getAccessPointName() const;
    bool accessPointNameIsSet() const;
    void unsetaccessPointName();
    void setAccessPointName(const std::string& value);

    /// <summary>
    /// **参数解释：** 接入点状态 **取值范围：** 0:禁用，1：启用
    /// </summary>

    int32_t getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(int32_t value);

    /// <summary>
    /// **参数解释：** 接入点类型 **取值范围：** 1:ECS，2：CCE，3：Custom
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// **参数解释：** 接入点创建人 **取值范围：** 不涉及
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// **参数解释：** 接入点创建时间 **取值范围：** 不涉及
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 接入点最近更新时间 **取值范围：** 不涉及
    /// </summary>

    std::string getLsatModifyTime() const;
    bool lsatModifyTimeIsSet() const;
    void unsetlsatModifyTime();
    void setLsatModifyTime(const std::string& value);


protected:
    std::string accessPointId_;
    bool accessPointIdIsSet_;
    std::string keyspaceId_;
    bool keyspaceIdIsSet_;
    std::string accessPointName_;
    bool accessPointNameIsSet_;
    int32_t state_;
    bool stateIsSet_;
    int32_t type_;
    bool typeIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string lsatModifyTime_;
    bool lsatModifyTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ListAccessPointResponseBody_access_points_H_
