
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_YamlTemplate_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_YamlTemplate_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 自动化搜索作业yaml模板。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  YamlTemplate
    : public ModelBase
{
public:
    YamlTemplate();
    virtual ~YamlTemplate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// YamlTemplate members

    /// <summary>
    /// AutoSearch算法类型，英文描述。
    /// </summary>

    std::string getAlgorithmTypeEn() const;
    bool algorithmTypeEnIsSet() const;
    void unsetalgorithmTypeEn();
    void setAlgorithmTypeEn(const std::string& value);

    /// <summary>
    /// AutoSearch算法类型[，中文描述](tag:hc,hk)。
    /// </summary>

    std::string getAlgorithmTypeZh() const;
    bool algorithmTypeZhIsSet() const;
    void unsetalgorithmTypeZh();
    void setAlgorithmTypeZh(const std::string& value);

    /// <summary>
    /// 该算法类型下所有算法的名称。
    /// </summary>

    std::vector<std::string>& getAlgorithmNames();
    bool algorithmNamesIsSet() const;
    void unsetalgorithmNames();
    void setAlgorithmNames(const std::vector<std::string>& value);


protected:
    std::string algorithmTypeEn_;
    bool algorithmTypeEnIsSet_;
    std::string algorithmTypeZh_;
    bool algorithmTypeZhIsSet_;
    std::vector<std::string> algorithmNames_;
    bool algorithmNamesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_YamlTemplate_H_
