
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ImageGroup_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ImageGroup_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ImageGroup
    : public ModelBase
{
public:
    ImageGroup();
    virtual ~ImageGroup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageGroup members

    /// <summary>
    /// **参数解释**：镜像名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像创建的时间，单位：UTC毫秒。 **取值范围**：不涉及。
    /// </summary>

    int64_t getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(int64_t value);

    /// <summary>
    /// **参数解释**：镜像所属的SWR组织。 **取值范围**：不涉及。
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像最后更新的时间，单位：UTC毫秒。 **取值范围**：不涉及。
    /// </summary>

    int64_t getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(int64_t value);

    /// <summary>
    /// **参数解释**：镜像版本个数。 **取值范围**：不涉及。
    /// </summary>

    int32_t getVersionCount() const;
    bool versionCountIsSet() const;
    void unsetversionCount();
    void setVersionCount(int32_t value);

    /// <summary>
    /// **参数解释**：镜像描述信息。 **取值范围**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像指导。 **取值范围**：不涉及。
    /// </summary>

    std::string getReadMe() const;
    bool readMeIsSet() const;
    void unsetreadMe();
    void setReadMe(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像图标名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getIconName() const;
    bool iconNameIsSet() const;
    void unseticonName();
    void setIconName(const std::string& value);

    /// <summary>
    /// **参数解释**：镜像id。 **取值范围**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：SWR企业版镜像仓库名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getSwrInstanceName() const;
    bool swrInstanceNameIsSet() const;
    void unsetswrInstanceName();
    void setSwrInstanceName(const std::string& value);

    /// <summary>
    /// **参数解释**：SWR企业版镜像仓库ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getSwrInstanceId() const;
    bool swrInstanceIdIsSet() const;
    void unsetswrInstanceId();
    void setSwrInstanceId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    int64_t createAt_;
    bool createAtIsSet_;
    std::string namespace_;
    bool namespaceIsSet_;
    int64_t updateAt_;
    bool updateAtIsSet_;
    int32_t versionCount_;
    bool versionCountIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string readMe_;
    bool readMeIsSet_;
    std::string iconName_;
    bool iconNameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string swrInstanceName_;
    bool swrInstanceNameIsSet_;
    std::string swrInstanceId_;
    bool swrInstanceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ImageGroup_H_
