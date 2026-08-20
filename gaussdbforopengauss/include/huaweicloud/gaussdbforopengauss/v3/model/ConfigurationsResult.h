
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ConfigurationsResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ConfigurationsResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**: 参数模板信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ConfigurationsResult
    : public ModelBase
{
public:
    ConfigurationsResult();
    virtual ~ConfigurationsResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConfigurationsResult members

    /// <summary>
    /// **参数解释**: 参数模板ID。参数模板的唯一标识。 **取值范围**: 只能由英文字母、数字组成，且长度为36个字符。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**: 参数模板名称。 **取值范围**: 参数模板名称在1到64个字符之间，区分大小写，可包含字母、数字、英文中划线、下划线或句点，不能包含其他特殊字符。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**: 参数模板描述。 **取值范围**: 描述不能超过256个字符，且不能包含回车和 ! &lt; \&quot; &#x3D; &#39; &gt; &amp;这些特殊字符。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**: 引擎版本。 **取值范围**: 不涉及。
    /// </summary>

    std::string getDatastoreVersion() const;
    bool datastoreVersionIsSet() const;
    void unsetdatastoreVersion();
    void setDatastoreVersion(const std::string& value);

    /// <summary>
    /// **参数解释**: 引擎名称。 **取值范围**: GaussDB。
    /// </summary>

    std::string getDatastoreName() const;
    bool datastoreNameIsSet() const;
    void unsetdatastoreName();
    void setDatastoreName(const std::string& value);

    /// <summary>
    /// **参数解释**: 节点类型。 **取值范围**: - independent：独立部署。 - ha：集中式。 - combined：混合部署。
    /// </summary>

    std::string getNodeType() const;
    bool nodeTypeIsSet() const;
    void unsetnodeType();
    void setNodeType(const std::string& value);

    /// <summary>
    /// **参数解释**: 实例类型。 **取值范围**: - Enterprise：分布式实例（企业版）。 - centralization_standard：集中式版实例。  区分大小写。
    /// </summary>

    std::string getHaMode() const;
    bool haModeIsSet() const;
    void unsethaMode();
    void setHaMode(const std::string& value);

    /// <summary>
    /// **参数解释**: 创建时间，格式为\&quot;yyyy-MM-ddTHH:mm:ssZ\&quot;。例如：2024-07-03T14:18:55。 **取值范围**: 不涉及。
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// **参数解释**: 更新时间，格式为\&quot;yyyy-MM-ddTHH:mm:ssZ\&quot;。例如：2024-07-03T14:18:55。 **取值范围**: 不涉及。
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);

    /// <summary>
    /// **参数解释**: 是否是用户自定义参数模板。 **取值范围**: - false：表示为系统默认参数模板。 - true：表示为用户自定义参数模板。
    /// </summary>

    bool isUserDefined() const;
    bool userDefinedIsSet() const;
    void unsetuserDefined();
    void setUserDefined(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string datastoreVersion_;
    bool datastoreVersionIsSet_;
    std::string datastoreName_;
    bool datastoreNameIsSet_;
    std::string nodeType_;
    bool nodeTypeIsSet_;
    std::string haMode_;
    bool haModeIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    bool userDefined_;
    bool userDefinedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ConfigurationsResult_H_
