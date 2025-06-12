
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateKnowledgeSkillResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateKnowledgeSkillResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateKnowledgeSkillResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateKnowledgeSkillResponse();
    virtual ~CreateKnowledgeSkillResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateKnowledgeSkillResponse members

    /// <summary>
    /// 技能ID。
    /// </summary>

    std::string getSkillId() const;
    bool skillIdIsSet() const;
    void unsetskillId();
    void setSkillId(const std::string& value);

    /// <summary>
    /// 技能标识。
    /// </summary>

    std::string getIdentify() const;
    bool identifyIsSet() const;
    void unsetidentify();
    void setIdentify(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string skillId_;
    bool skillIdIsSet_;
    std::string identify_;
    bool identifyIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateKnowledgeSkillResponse_H_
