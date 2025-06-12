
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StyleExtraMeta_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StyleExtraMeta_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 风格额外信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  StyleExtraMeta
    : public ModelBase
{
public:
    StyleExtraMeta();
    virtual ~StyleExtraMeta();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StyleExtraMeta members

    /// <summary>
    /// 是否支持照片建模
    /// </summary>

    bool isPictureModelingEnable() const;
    bool pictureModelingEnableIsSet() const;
    void unsetpictureModelingEnable();
    void setPictureModelingEnable(bool value);

    /// <summary>
    /// 是否支持模型编辑
    /// </summary>

    bool isEditEnable() const;
    bool editEnableIsSet() const;
    void unseteditEnable();
    void setEditEnable(bool value);

    /// <summary>
    /// 编辑使用引擎
    /// </summary>

    std::string getEditEngine() const;
    bool editEngineIsSet() const;
    void unseteditEngine();
    void setEditEngine(const std::string& value);

    /// <summary>
    /// 照片建模算法调用的模型类型
    /// </summary>

    std::string getModelId() const;
    bool modelIdIsSet() const;
    void unsetmodelId();
    void setModelId(const std::string& value);


protected:
    bool pictureModelingEnable_;
    bool pictureModelingEnableIsSet_;
    bool editEnable_;
    bool editEnableIsSet_;
    std::string editEngine_;
    bool editEngineIsSet_;
    std::string modelId_;
    bool modelIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StyleExtraMeta_H_
