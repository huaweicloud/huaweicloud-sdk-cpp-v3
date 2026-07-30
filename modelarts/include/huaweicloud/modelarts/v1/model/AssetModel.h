
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AssetModel_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AssetModel_H_


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
/// **参数解释**：自定义训练作业产物发布成模型的信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AssetModel
    : public ModelBase
{
public:
    AssetModel();
    virtual ~AssetModel();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssetModel members

    /// <summary>
    /// **参数解释**：模型名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：模型名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// **参数解释**：模型发布版本。 **取值范围**：不涉及。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：模型描述。 **取值范围**：不涉及。
    /// </summary>

    std::string getDesc() const;
    bool descIsSet() const;
    void unsetdesc();
    void setDesc(const std::string& value);

    /// <summary>
    /// **参数解释**：模型品牌。 **取值范围**：不涉及。
    /// </summary>

    std::string getSeries() const;
    bool seriesIsSet() const;
    void unsetseries();
    void setSeries(const std::string& value);

    /// <summary>
    /// **参数解释**：模型类型。 **取值范围**：不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：模型资产描述。\\n**取值范围**：不涉及。
    /// </summary>

    std::string getModelDesc() const;
    bool modelDescIsSet() const;
    void unsetmodelDesc();
    void setModelDesc(const std::string& value);

    /// <summary>
    /// **参数解释**：父资产ID（可选），选择已有模型时传递。\\n**取值范围**：不涉及。
    /// </summary>

    std::string getParentAssetId() const;
    bool parentAssetIdIsSet() const;
    void unsetparentAssetId();
    void setParentAssetId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string desc_;
    bool descIsSet_;
    std::string series_;
    bool seriesIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string modelDesc_;
    bool modelDescIsSet_;
    std::string parentAssetId_;
    bool parentAssetIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AssetModel_H_
