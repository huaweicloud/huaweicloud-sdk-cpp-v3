
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_HyperNodeMetadata_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_HyperNodeMetadata_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/HyperNodeMetadata_ownerReference.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  HyperNodeMetadata
    : public ModelBase
{
public:
    HyperNodeMetadata();
    virtual ~HyperNodeMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HyperNodeMetadata members

    /// <summary>
    /// **参数解释**： 超节点名称 &gt; 命名规则：以小写字母开头，由小写字母、数字、中划线(-)组成，长度范围1-56位，且不能以中划线(-)结尾。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 超节点ID，资源唯一标识，创建成功后自动生成，填写无效
    /// </summary>

    std::string getUid() const;
    bool uidIsSet() const;
    void unsetuid();
    void setUid(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建时间，创建成功后自动生成，填写无效
    /// </summary>

    std::string getCreationTimestamp() const;
    bool creationTimestampIsSet() const;
    void unsetcreationTimestamp();
    void setCreationTimestamp(const std::string& value);

    /// <summary>
    /// **参数解释**： 更新时间，创建成功后自动生成，填写无效
    /// </summary>

    std::string getUpdateTimestamp() const;
    bool updateTimestampIsSet() const;
    void unsetupdateTimestamp();
    void setUpdateTimestamp(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    HyperNodeMetadata_ownerReference getOwnerReference() const;
    bool ownerReferenceIsSet() const;
    void unsetownerReference();
    void setOwnerReference(const HyperNodeMetadata_ownerReference& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string uid_;
    bool uidIsSet_;
    std::string creationTimestamp_;
    bool creationTimestampIsSet_;
    std::string updateTimestamp_;
    bool updateTimestampIsSet_;
    HyperNodeMetadata_ownerReference ownerReference_;
    bool ownerReferenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_HyperNodeMetadata_H_
