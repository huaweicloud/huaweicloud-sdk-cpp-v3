
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_InputDataInfo_dataset_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_InputDataInfo_dataset_H_


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
/// 数据输入信息为数据集。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  InputDataInfo_dataset
    : public ModelBase
{
public:
    InputDataInfo_dataset();
    virtual ~InputDataInfo_dataset();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InputDataInfo_dataset members

    /// <summary>
    /// 训练作业的数据集ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 训练作业的数据集版本ID。
    /// </summary>

    std::string getVersionId() const;
    bool versionIdIsSet() const;
    void unsetversionId();
    void setVersionId(const std::string& value);

    /// <summary>
    /// 训练作业需要的数据集OBS路径URL，ModelArts会通过数据集ID和数据集版本ID自动解析生成。如：“/usr/data/”。
    /// </summary>

    std::string getObsUrl() const;
    bool obsUrlIsSet() const;
    void unsetobsUrl();
    void setObsUrl(const std::string& value);

    /// <summary>
    /// **参数解释**：数据集服务类型。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：取值为V3时表示使用的是资产服务提供的数据集，其他表示旧版数据集。
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// **参数解释**：训练作业的数据集名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：精调训练作业的数据集配比比率，表示使用多少比率的该数据集进行训练。
    /// </summary>

    int32_t getDatasetProportion() const;
    bool datasetProportionIsSet() const;
    void unsetdatasetProportion();
    void setDatasetProportion(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string versionId_;
    bool versionIdIsSet_;
    std::string obsUrl_;
    bool obsUrlIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t datasetProportion_;
    bool datasetProportionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_InputDataInfo_dataset_H_
