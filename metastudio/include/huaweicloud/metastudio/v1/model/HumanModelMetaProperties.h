
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_HumanModelMetaProperties_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_HumanModelMetaProperties_H_


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
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  HumanModelMetaProperties
    : public ModelBase
{
public:
    HumanModelMetaProperties();
    virtual ~HumanModelMetaProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HumanModelMetaProperties members

    /// <summary>
    /// **参数解释**： 用于生成WHOLE_MODEL的模型file_id **约束限制**： 如果当前记录的信息与MAIN文件的file_id一致，那就认为已经生成过，无需再进行全模型导出 **取值范围**： 字符长度0-64位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getWholeModelBaseFileId() const;
    bool wholeModelBaseFileIdIsSet() const;
    void unsetwholeModelBaseFileId();
    void setWholeModelBaseFileId(const std::string& value);

    /// <summary>
    /// **参数解释**： 当前用于渲染加载的模型file_id **约束限制**： 若为空或未匹配到，则使用MAIN文件 **取值范围**： 字符长度0-64位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getLoadModelFileId() const;
    bool loadModelFileIdIsSet() const;
    void unsetloadModelFileId();
    void setLoadModelFileId(const std::string& value);


protected:
    std::string wholeModelBaseFileId_;
    bool wholeModelBaseFileIdIsSet_;
    std::string loadModelFileId_;
    bool loadModelFileIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_HumanModelMetaProperties_H_
