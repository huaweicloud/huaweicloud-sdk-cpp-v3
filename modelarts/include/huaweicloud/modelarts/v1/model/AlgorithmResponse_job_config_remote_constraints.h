
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmResponse_job_config_remote_constraints_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmResponse_job_config_remote_constraints_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AlgorithmResponse_job_config_remote_constraints
    : public ModelBase
{
public:
    AlgorithmResponse_job_config_remote_constraints();
    virtual ~AlgorithmResponse_job_config_remote_constraints();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlgorithmResponse_job_config_remote_constraints members

    /// <summary>
    /// 数据输入类型，包括数据存储位置、数据集两种方式。
    /// </summary>

    std::string getDataType() const;
    bool dataTypeIsSet() const;
    void unsetdataType();
    void setDataType(const std::string& value);

    /// <summary>
    /// 数据输入为数据集时的相关属性。枚举值：   - data_format数据格式。   - data_segmentation数据切分方式。   - dataset_type标注类型。
    /// </summary>

    std::vector<std::map<std::string, std::string>>& getAttributes();
    bool attributesIsSet() const;
    void unsetattributes();
    void setAttributes(const std::vector<std::map<std::string, std::string>>& value);


protected:
    std::string dataType_;
    bool dataTypeIsSet_;
    std::vector<std::map<std::string, std::string>> attributes_;
    bool attributesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmResponse_job_config_remote_constraints_H_
