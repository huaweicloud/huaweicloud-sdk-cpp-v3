
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateKnowledgeSkillReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateKnowledgeSkillReq_H_


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
/// 创建知识库技能请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateKnowledgeSkillReq
    : public ModelBase
{
public:
    CreateKnowledgeSkillReq();
    virtual ~CreateKnowledgeSkillReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateKnowledgeSkillReq members

    /// <summary>
    /// 技能名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 技能标识。
    /// </summary>

    std::string getIdentify() const;
    bool identifyIsSet() const;
    void unsetidentify();
    void setIdentify(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string identify_;
    bool identifyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateKnowledgeSkillReq_H_
