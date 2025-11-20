
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_Metadata_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_Metadata_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 资源描述基本信息，集合类的元素类型，包含一组由不同名称定义的属性。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  Metadata
    : public ModelBase
{
public:
    Metadata();
    virtual ~Metadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Metadata members

    /// <summary>
    /// **参数解释**： 唯一id标识 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getUid() const;
    bool uidIsSet() const;
    void unsetuid();
    void setUid(const std::string& value);

    /// <summary>
    /// **参数解释**： 资源名称 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 资源标签，key/value对格式，接口保留字段，填写不会生效 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::map<std::string, std::string>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::map<std::string, std::string>& value);

    /// <summary>
    /// **参数解释**： 资源注解，由key/value组成 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::map<std::string, std::string>& getAnnotations();
    bool annotationsIsSet() const;
    void unsetannotations();
    void setAnnotations(const std::map<std::string, std::string>& value);

    /// <summary>
    /// **参数解释**： 更新时间 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    utility::datetime getUpdateTimestamp() const;
    bool updateTimestampIsSet() const;
    void unsetupdateTimestamp();
    void setUpdateTimestamp(const utility::datetime& value);

    /// <summary>
    /// **参数解释**： 创建时间 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    utility::datetime getCreationTimestamp() const;
    bool creationTimestampIsSet() const;
    void unsetcreationTimestamp();
    void setCreationTimestamp(const utility::datetime& value);


protected:
    std::string uid_;
    bool uidIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::map<std::string, std::string> labels_;
    bool labelsIsSet_;
    std::map<std::string, std::string> annotations_;
    bool annotationsIsSet_;
    utility::datetime updateTimestamp_;
    bool updateTimestampIsSet_;
    utility::datetime creationTimestamp_;
    bool creationTimestampIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_Metadata_H_
