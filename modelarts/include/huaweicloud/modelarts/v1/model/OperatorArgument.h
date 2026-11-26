
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_OperatorArgument_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_OperatorArgument_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/OperatorArgItem.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/DependArg.h>
#include <huaweicloud/modelarts/v1/model/OperatorArgTypeEnum.h>
#include <vector>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  OperatorArgument
    : public ModelBase
{
public:
    OperatorArgument();
    virtual ~OperatorArgument();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OperatorArgument members

    /// <summary>
    /// **参数解释**：参数键
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释**：参数名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OperatorArgTypeEnum getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const OperatorArgTypeEnum& value);

    /// <summary>
    /// **参数解释**：参数说明
    /// </summary>

    std::string getTips() const;
    bool tipsIsSet() const;
    void unsettips();
    void setTips(const std::string& value);

    /// <summary>
    /// **参数解释**：参数最小值，数值型参数必填
    /// </summary>

    float getMin() const;
    bool minIsSet() const;
    void unsetmin();
    void setMin(float value);

    /// <summary>
    /// **参数解释**：参数最大值，数值型参数必填
    /// </summary>

    float getMax() const;
    bool maxIsSet() const;
    void unsetmax();
    void setMax(float value);

    /// <summary>
    /// **参数解释**：是否为区间型数值
    /// </summary>

    bool isBetween() const;
    bool betweenIsSet() const;
    void unsetbetween();
    void setBetween(bool value);

    /// <summary>
    /// **参数解释**：参数选项列表
    /// </summary>

    std::vector<OperatorArgItem>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<OperatorArgItem>& value);

    /// <summary>
    /// **参数解释**：参数默认值，用户不可见且必填的参数必须提供默认值
    /// </summary>

    std::string getDefaultValue() const;
    bool defaultValueIsSet() const;
    void unsetdefaultValue();
    void setDefaultValue(const std::string& value);

    /// <summary>
    /// **参数解释**：参数是否必填，默认false
    /// </summary>

    bool isRequired() const;
    bool requiredIsSet() const;
    void unsetrequired();
    void setRequired(bool value);

    /// <summary>
    /// **参数解释**：该参数界面是否展示给用户配置，默认true
    /// </summary>

    bool isVisible() const;
    bool visibleIsSet() const;
    void unsetvisible();
    void setVisible(bool value);

    /// <summary>
    /// **参数解释**：参数前端组件类型
    /// </summary>

    std::string getArgDisplayType() const;
    bool argDisplayTypeIsSet() const;
    void unsetargDisplayType();
    void setArgDisplayType(const std::string& value);

    /// <summary>
    /// **参数解释**：数据集支持的任务类型，type为dataset时可用
    /// </summary>

    std::vector<std::string>& getTaskCategory();
    bool taskCategoryIsSet() const;
    void unsettaskCategory();
    void setTaskCategory(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：数据集来源，type为dataset时可用
    /// </summary>

    std::vector<std::string>& getDatasetCatalog();
    bool datasetCatalogIsSet() const;
    void unsetdatasetCatalog();
    void setDatasetCatalog(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：资产类型,type为large_model时可用,多个以&#39;,&#39;分隔
    /// </summary>

    std::string getAssetTypes() const;
    bool assetTypesIsSet() const;
    void unsetassetTypes();
    void setAssetTypes(const std::string& value);

    /// <summary>
    /// **参数解释**：资产代码,type为large_model时可用,多个以&#39;,&#39;分隔
    /// </summary>

    std::string getAssetCodes() const;
    bool assetCodesIsSet() const;
    void unsetassetCodes();
    void setAssetCodes(const std::string& value);

    /// <summary>
    /// **参数解释**：模型的子资产类型,type为large_model时可用
    /// </summary>

    std::string getSubAssetType() const;
    bool subAssetTypeIsSet() const;
    void unsetsubAssetType();
    void setSubAssetType(const std::string& value);

    /// <summary>
    /// **参数解释**：当前参数所依赖的其他参数信息列表
    /// </summary>

    std::vector<DependArg>& getDependArgs();
    bool dependArgsIsSet() const;
    void unsetdependArgs();
    void setDependArgs(const std::vector<DependArg>& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string name_;
    bool nameIsSet_;
    OperatorArgTypeEnum type_;
    bool typeIsSet_;
    std::string tips_;
    bool tipsIsSet_;
    float min_;
    bool minIsSet_;
    float max_;
    bool maxIsSet_;
    bool between_;
    bool betweenIsSet_;
    std::vector<OperatorArgItem> items_;
    bool itemsIsSet_;
    std::string defaultValue_;
    bool defaultValueIsSet_;
    bool required_;
    bool requiredIsSet_;
    bool visible_;
    bool visibleIsSet_;
    std::string argDisplayType_;
    bool argDisplayTypeIsSet_;
    std::vector<std::string> taskCategory_;
    bool taskCategoryIsSet_;
    std::vector<std::string> datasetCatalog_;
    bool datasetCatalogIsSet_;
    std::string assetTypes_;
    bool assetTypesIsSet_;
    std::string assetCodes_;
    bool assetCodesIsSet_;
    std::string subAssetType_;
    bool subAssetTypeIsSet_;
    std::vector<DependArg> dependArgs_;
    bool dependArgsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_OperatorArgument_H_
